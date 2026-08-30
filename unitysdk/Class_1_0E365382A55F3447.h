#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetLoadPriority.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0E365382A55F3447_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x15468770)
#define CLASS_1_0E365382A55F3447_METHOD_1_46781B3E528922A9_OFFSET UNITYSDK_OFFSET(0x15468990)
#define CLASS_1_0E365382A55F3447_METHOD_1_6918C8F0BA385316_OFFSET UNITYSDK_OFFSET(0x15468B20)
#define CLASS_1_0E365382A55F3447_METHOD_1_A35812AFB149920C_OFFSET UNITYSDK_OFFSET(0x15468660)
#define CLASS_1_0E365382A55F3447_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x15468D00)
#define CLASS_1_0E365382A55F3447__CTOR_OFFSET UNITYSDK_OFFSET(0x15469180)

inline static constexpr unsigned int Class_1_0E365382A55F3447_TypeDefinitionIndex = 49557;

class Class_1_0E365382A55F3447 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::IAssetOperation*, ::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB*>* MEANPJDFKBK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447__CTOR_OFFSET))(this);
	}

	::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB* Method_1_A35812AFB149920C(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
	{
		return ((::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_A35812AFB149920C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_1_46781B3E528922A9(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_46781B3E528922A9_OFFSET))(this, a1);
	}

	::System::Single Method_1_6918C8F0BA385316(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_6918C8F0BA385316_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}
};
