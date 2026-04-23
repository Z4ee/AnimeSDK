#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleFateHouguRuntime; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A48F3719AA1CF200_18___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA07D070)
#define CLASS_2_A48F3719AA1CF200_18___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA07D0B0)
#define CLASS_2_A48F3719AA1CF200_18___C__EVALUATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xA07D0C0)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_18___c_TypeDefinitionIndex = 59012;

class Class_2_A48F3719AA1CF200_18___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::BattleFateHouguRuntime*, ::System::Int64>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::GameCore::BattleFateHouguRuntime*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A48F3719AA1CF200_18___c_TypeDefinitionIndex)->GetStaticField(0x6AE30);
	}
	static ::Class_2_A48F3719AA1CF200_18___c** StaticGet___9()
	{
		return (::Class_2_A48F3719AA1CF200_18___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A48F3719AA1CF200_18___c_TypeDefinitionIndex)->GetStaticField(0x6AE38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_18___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_18___C__CTOR_OFFSET))(this);
	}

	::System::Int64 _Evaluate_b__0_0(::RPG::GameCore::BattleFateHouguRuntime* battleHougu)
	{
		return ((::System::Int64(*)(::PVOID, ::RPG::GameCore::BattleFateHouguRuntime*))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_18___C__EVALUATE_B__0_0_OFFSET))(this, battleHougu);
	}
};
