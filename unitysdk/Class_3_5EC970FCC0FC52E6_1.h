#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_5EC970FCC0FC52E6_1_METHOD_3_4DB5E71CDBC1B075_OFFSET UNITYSDK_OFFSET(0x17AFDEB0)
#define CLASS_3_5EC970FCC0FC52E6_1_METHOD_3_FDF8F38C06F95478_OFFSET UNITYSDK_OFFSET(0x17AFDF80)
#define CLASS_3_5EC970FCC0FC52E6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFDF50)

inline static constexpr unsigned int Class_3_5EC970FCC0FC52E6_1_TypeDefinitionIndex = 35877;

class Class_3_5EC970FCC0FC52E6_1 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*>
{
public:
	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5EC970FCC0FC52E6_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_5EC970FCC0FC52E6_1* Method_3_4DB5E71CDBC1B075(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_5EC970FCC0FC52E6_1*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5EC970FCC0FC52E6_1_METHOD_3_4DB5E71CDBC1B075_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>* Method_3_FDF8F38C06F95478()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC970FCC0FC52E6_1_METHOD_3_FDF8F38C06F95478_OFFSET))(this);
	}
};
