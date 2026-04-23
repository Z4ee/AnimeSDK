#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4AA2D1AF25F4ADCD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9388ED0)
#define CLASS_1_4AA2D1AF25F4ADCD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9388F10)
#define CLASS_1_4AA2D1AF25F4ADCD___C___TRYUPDATECACHEDPLANRESULTRELICUID_B__14_0_OFFSET UNITYSDK_OFFSET(0x9388F20)

inline static constexpr unsigned int Class_1_4AA2D1AF25F4ADCD___c_TypeDefinitionIndex = 68663;

class Class_1_4AA2D1AF25F4ADCD___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AA2D1AF25F4ADCD___c_TypeDefinitionIndex)->GetStaticField(0x6AF10);
	}
	static ::Class_1_4AA2D1AF25F4ADCD___c** StaticGet___9()
	{
		return (::Class_1_4AA2D1AF25F4ADCD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AA2D1AF25F4ADCD___c_TypeDefinitionIndex)->GetStaticField(0x6AF18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AA2D1AF25F4ADCD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA2D1AF25F4ADCD___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __TryUpdateCachedPlanResultRelicUID_b__14_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* info)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4AA2D1AF25F4ADCD___C___TRYUPDATECACHEDPLANRESULTRELICUID_B__14_0_OFFSET))(this, info);
	}
};
