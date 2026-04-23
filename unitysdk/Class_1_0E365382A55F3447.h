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

#define CLASS_1_0E365382A55F3447_METHOD_1_4314B8404BBBF9E2_OFFSET UNITYSDK_OFFSET(0x98E76F0)
#define CLASS_1_0E365382A55F3447_METHOD_1_493DBFE2FBBED9A2_OFFSET UNITYSDK_OFFSET(0x98E75C0)
#define CLASS_1_0E365382A55F3447_METHOD_1_A35812AFB149920C_OFFSET UNITYSDK_OFFSET(0x98E7280)
#define CLASS_1_0E365382A55F3447_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x98E7810)
#define CLASS_1_0E365382A55F3447_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x98E7390)
#define CLASS_1_0E365382A55F3447__CTOR_OFFSET UNITYSDK_OFFSET(0x98E7B10)

inline static constexpr unsigned int Class_1_0E365382A55F3447_TypeDefinitionIndex = 45729;

class Class_1_0E365382A55F3447 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::IAssetOperation*, ::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447__CTOR_OFFSET))(this);
	}

	::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB* Method_1_A35812AFB149920C(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
	{
		return ((::Class_1_0E365382A55F3447_Class_1_90B29E9104B098EB*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_A35812AFB149920C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_493DBFE2FBBED9A2(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_493DBFE2FBBED9A2_OFFSET))(this, a1);
	}

	::System::Single Method_1_4314B8404BBBF9E2(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_4314B8404BBBF9E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}
};
