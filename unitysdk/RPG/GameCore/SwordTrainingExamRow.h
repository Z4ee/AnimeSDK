#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC3820)
#define RPG_GAMECORE_SWORDTRAININGEXAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC3CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamRow_TypeDefinitionIndex = 11777;

	class SwordTrainingExamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SuccessPerformID; // 0x10
		::Il2CppArray<::System::UInt32>* ExcellentCommentList; // 0x18
		::Il2CppArray<::System::UInt32>* NormalCommentList; // 0x20
		::System::String* EnemyImage; // 0x28
		::System::UInt32 ExamID; // 0x30
		::System::UInt32 PrePerformID; // 0x34
		::System::UInt32 EnemyPower; // 0x38
		::System::Boolean IsLastExam; // 0x3C
		::System::UInt32 BattleAreaID; // 0x40
		::RPG::Client::TextID EnemyName; // 0x48
		::System::UInt32 StageID; // 0x58
		::System::UInt32 FailPerformID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingExamRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingExamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
