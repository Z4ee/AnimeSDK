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

#define CLASS_1_0E365382A55F3447_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x1366F230)
#define CLASS_1_0E365382A55F3447_METHOD_1_1D06DD13F29A2901_OFFSET UNITYSDK_OFFSET(0x1366F5E0)
#define CLASS_1_0E365382A55F3447_METHOD_1_46781B3E528922A9_OFFSET UNITYSDK_OFFSET(0x1366F450)
#define CLASS_1_0E365382A55F3447_METHOD_1_A35812AFB149920C_OFFSET UNITYSDK_OFFSET(0x1366F120)
#define CLASS_1_0E365382A55F3447_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1366F760)
#define CLASS_1_0E365382A55F3447__CTOR_OFFSET UNITYSDK_OFFSET(0x1366FAF0)

inline static constexpr unsigned int Class_1_0E365382A55F3447_TypeDefinitionIndex = 46312;

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

	::System::Void Method_1_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_1_46781B3E528922A9(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_46781B3E528922A9_OFFSET))(this, a1);
	}

	::System::Single Method_1_1D06DD13F29A2901(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_1D06DD13F29A2901_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E365382A55F3447_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
