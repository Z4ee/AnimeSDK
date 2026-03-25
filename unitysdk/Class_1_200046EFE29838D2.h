#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueInTeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_200046EFE29838D2_METHOD_1_181184E05DDBA29A_OFFSET UNITYSDK_OFFSET(0x8839E90)
#define CLASS_1_200046EFE29838D2_METHOD_1_6163B1DECC79C7C0_1_OFFSET UNITYSDK_OFFSET(0x883B2D0)
#define CLASS_1_200046EFE29838D2_METHOD_1_6163B1DECC79C7C0_OFFSET UNITYSDK_OFFSET(0x883B1B0)
#define CLASS_1_200046EFE29838D2_METHOD_1_7870AACAB393A79F_OFFSET UNITYSDK_OFFSET(0x8839F60)
#define CLASS_1_200046EFE29838D2_METHOD_1_9B2458AD2BA916A3_OFFSET UNITYSDK_OFFSET(0x883B3F0)
#define CLASS_1_200046EFE29838D2_METHOD_1_B74BCCBB45F5914F_OFFSET UNITYSDK_OFFSET(0x8839C80)
#define CLASS_1_200046EFE29838D2_METHOD_1_C7B7E4F81302853E_OFFSET UNITYSDK_OFFSET(0x883B570)
#define CLASS_1_200046EFE29838D2_METHOD_1_D3D41AF471611C06_OFFSET UNITYSDK_OFFSET(0x883AEB0)
#define CLASS_1_200046EFE29838D2_METHOD_1_EB01B61F3DBE6242_OFFSET UNITYSDK_OFFSET(0x883A2F0)
#define CLASS_1_200046EFE29838D2_METHOD_1_FF2EDFFDC8A9EF40_OFFSET UNITYSDK_OFFSET(0x883AFD0)
#define CLASS_1_200046EFE29838D2__CTOR_OFFSET UNITYSDK_OFFSET(0x883B950)

inline static constexpr unsigned int Class_1_200046EFE29838D2_TypeDefinitionIndex = 43432;

class Class_1_200046EFE29838D2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_1_B74BCCBB45F5914F(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ComplexSkillAICombineType a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ComplexSkillAICombineType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_B74BCCBB45F5914F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_181184E05DDBA29A(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ComplexSkillAIValueCompareType a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ComplexSkillAIValueCompareType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_181184E05DDBA29A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_7870AACAB393A79F(::RPG::GameCore::BigFixPoint a1, ::RPG::GameCore::BigFixPoint a2, ::RPG::GameCore::ComplexSkillAIValueCompareType a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BigFixPoint, ::RPG::GameCore::BigFixPoint, ::RPG::GameCore::ComplexSkillAIValueCompareType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_7870AACAB393A79F_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_EB01B61F3DBE6242(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ComplexSkillAIValueInTeamType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComplexSkillAIValueInTeamType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_EB01B61F3DBE6242_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_D3D41AF471611C06(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_D3D41AF471611C06_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_FF2EDFFDC8A9EF40(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_FF2EDFFDC8A9EF40_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_6163B1DECC79C7C0(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_6163B1DECC79C7C0_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_6163B1DECC79C7C0_1(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_6163B1DECC79C7C0_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_9B2458AD2BA916A3(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_9B2458AD2BA916A3_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_C7B7E4F81302853E(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::ComplexSkillAIListCombineType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::ComplexSkillAIListCombineType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_C7B7E4F81302853E_OFFSET))(a1, a2);
	}
};
