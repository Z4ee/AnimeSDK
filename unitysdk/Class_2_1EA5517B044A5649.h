#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92B0B8C84327961B.h"
#include "unitysdk/Class_1_92B0B8C84327961B_CanUseAbilityRet.h"

class Class_1_3E663F02593BDAF0;
class Class_1_43BD383C98B4C0C5_19;
class Class_1_9CED2ED5D733E7A4;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceActionAddBuff; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_1EA5517B044A5649_METHOD_2_065D93093F38AD10_OFFSET UNITYSDK_OFFSET(0x1972B8B0)
#define CLASS_2_1EA5517B044A5649_METHOD_2_5974BC320B2689B4_OFFSET UNITYSDK_OFFSET(0x196FE390)
#define CLASS_2_1EA5517B044A5649_METHOD_2_8C5BDEE64648C7CC_OFFSET UNITYSDK_OFFSET(0x1972B790)
#define CLASS_2_1EA5517B044A5649_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x1972B900)
#define CLASS_2_1EA5517B044A5649__CTOR_OFFSET UNITYSDK_OFFSET(0x1972B620)

inline static constexpr unsigned int Class_2_1EA5517B044A5649_TypeDefinitionIndex = 36676;

class Class_2_1EA5517B044A5649 : public ::Class_1_92B0B8C84327961B
{
public:
	::Class_1_3E663F02593BDAF0* LMDHPABCOAB; // 0x58
	::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>* PDHLGICHLKD; // 0x60
	::RPG::GameCore::CakeRaceActionAddBuff* HJAHGGHDMOA; // 0x68
	::Class_1_43BD383C98B4C0C5_19* EMDEOIKJLMJ; // 0x70

	::System::Void _ctor(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::Class_1_9CED2ED5D733E7A4* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_2_F3C45F1FC7349B6E*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_2_1EA5517B044A5649__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_2_1EA5517B044A5649* Method_2_5974BC320B2689B4(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::Class_1_9CED2ED5D733E7A4* a4)
	{
		return ((::Class_2_1EA5517B044A5649*(*)(::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_2_F3C45F1FC7349B6E*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_2_1EA5517B044A5649_METHOD_2_5974BC320B2689B4_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_92B0B8C84327961B_CanUseAbilityRet Method_2_8C5BDEE64648C7CC(::Class_2_21AD365C113DC484* a1)
	{
		return ((::Class_1_92B0B8C84327961B_CanUseAbilityRet(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_2_1EA5517B044A5649_METHOD_2_8C5BDEE64648C7CC_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_065D93093F38AD10()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EA5517B044A5649_METHOD_2_065D93093F38AD10_OFFSET))(this);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EA5517B044A5649_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}
};
