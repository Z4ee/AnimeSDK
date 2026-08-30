#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueInTeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_200046EFE29838D2_METHOD_1_0278687AEE745F1B_OFFSET UNITYSDK_OFFSET(0xE2C0310)
#define CLASS_1_200046EFE29838D2_METHOD_1_0D23FE0D22974390_1_OFFSET UNITYSDK_OFFSET(0xE2C01C0)
#define CLASS_1_200046EFE29838D2_METHOD_1_0D23FE0D22974390_OFFSET UNITYSDK_OFFSET(0xE2C0070)
#define CLASS_1_200046EFE29838D2_METHOD_1_181184E05DDBA29A_OFFSET UNITYSDK_OFFSET(0xE2BF5F0)
#define CLASS_1_200046EFE29838D2_METHOD_1_6AB07C3F9C64147A_OFFSET UNITYSDK_OFFSET(0xE2BFF20)
#define CLASS_1_200046EFE29838D2_METHOD_1_826E376DDF7F8371_OFFSET UNITYSDK_OFFSET(0xE2BFFD0)
#define CLASS_1_200046EFE29838D2_METHOD_1_B74BCCBB45F5914F_OFFSET UNITYSDK_OFFSET(0xE2BF500)
#define CLASS_1_200046EFE29838D2_METHOD_1_B77F12D8F4C54329_OFFSET UNITYSDK_OFFSET(0xE2BF990)
#define CLASS_1_200046EFE29838D2_METHOD_1_BAF68CC52BF65F33_OFFSET UNITYSDK_OFFSET(0xE2C04E0)
#define CLASS_1_200046EFE29838D2_METHOD_1_F78B9D6498CAC92C_OFFSET UNITYSDK_OFFSET(0xE2C0390)
#define CLASS_1_200046EFE29838D2__CTOR_OFFSET UNITYSDK_OFFSET(0xE2C0720)

inline static constexpr unsigned int Class_1_200046EFE29838D2_TypeDefinitionIndex = 54562;

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

	static ::RPG::GameCore::FixPoint Method_1_B77F12D8F4C54329(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ComplexSkillAIValueInTeamType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComplexSkillAIValueInTeamType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_B77F12D8F4C54329_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_6AB07C3F9C64147A(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_6AB07C3F9C64147A_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_826E376DDF7F8371(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_826E376DDF7F8371_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_0D23FE0D22974390(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_0D23FE0D22974390_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_0D23FE0D22974390_1(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_0D23FE0D22974390_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_0278687AEE745F1B(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_0278687AEE745F1B_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_F78B9D6498CAC92C(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::ComplexSkillAIListCombineType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::ComplexSkillAIListCombineType))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_F78B9D6498CAC92C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_BAF68CC52BF65F33(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_200046EFE29838D2_METHOD_1_BAF68CC52BF65F33_OFFSET))(a1, a2, a3);
	}
};
