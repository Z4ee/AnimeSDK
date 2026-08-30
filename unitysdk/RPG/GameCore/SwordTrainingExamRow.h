#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E156D80)
#define RPG_GAMECORE_SWORDTRAININGEXAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1571F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamRow_TypeDefinitionIndex = 12363;

	class SwordTrainingExamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NormalCommentList; // 0x10
		::System::String* EnemyImage; // 0x18
		::Il2CppArray<::System::UInt32>* ExcellentCommentList; // 0x20
		::Il2CppArray<::System::UInt32>* SuccessPerformID; // 0x28
		::RPG::Client::TextID EnemyName; // 0x30
		::System::UInt32 StageID; // 0x40
		::System::UInt32 FailPerformID; // 0x44
		::System::UInt32 BattleAreaID; // 0x48
		::System::UInt32 ExamID; // 0x4C
		::System::UInt32 EnemyPower; // 0x50
		::System::Boolean IsLastExam; // 0x54
		::System::UInt32 PrePerformID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingExamRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingExamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
