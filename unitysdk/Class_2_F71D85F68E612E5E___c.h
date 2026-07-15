#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_F71D85F68E612E5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18178540)
#define CLASS_2_F71D85F68E612E5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18178580)
#define CLASS_2_F71D85F68E612E5E___C__LOADTITLECONFIG_B__14_0_OFFSET UNITYSDK_OFFSET(0x18178590)

inline static constexpr unsigned int Class_2_F71D85F68E612E5E___c_TypeDefinitionIndex = 35681;

class Class_2_F71D85F68E612E5E___c : public ::System::Object
{
public:
	static ::Class_2_F71D85F68E612E5E___c** StaticGet___9()
	{
		return (::Class_2_F71D85F68E612E5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F71D85F68E612E5E___c_TypeDefinitionIndex)->GetStaticField(0x596B0);
	}
	static ::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::CakeRaceTitleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F71D85F68E612E5E___c_TypeDefinitionIndex)->GetStaticField(0x596B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _LoadTitleConfig_b__14_0(::RPG::GameCore::CakeRaceTitleRow* a1, ::RPG::GameCore::CakeRaceTitleRow* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceTitleRow*, ::RPG::GameCore::CakeRaceTitleRow*))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E___C__LOADTITLECONFIG_B__14_0_OFFSET))(this, a1, a2);
	}
};
