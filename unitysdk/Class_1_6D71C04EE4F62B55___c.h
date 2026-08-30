#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6D71C04EE4F62B55___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1976ED30)
#define CLASS_1_6D71C04EE4F62B55___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1976ED70)
#define CLASS_1_6D71C04EE4F62B55___C__STATSECTIONSETTLE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1976ED80)

inline static constexpr unsigned int Class_1_6D71C04EE4F62B55___c_TypeDefinitionIndex = 36647;

class Class_1_6D71C04EE4F62B55___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::CakeRaceRegionTag, ::System::UInt32>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::RPG::GameCore::CakeRaceRegionTag, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D71C04EE4F62B55___c_TypeDefinitionIndex)->GetStaticField(0xC490);
	}
	static ::Class_1_6D71C04EE4F62B55___c** StaticGet___9()
	{
		return (::Class_1_6D71C04EE4F62B55___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D71C04EE4F62B55___c_TypeDefinitionIndex)->GetStaticField(0xC498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _StatSectionSettle_b__16_0(::RPG::GameCore::CakeRaceRegionTag a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55___C__STATSECTIONSETTLE_B__16_0_OFFSET))(this, a1);
	}
};
