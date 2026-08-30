#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeStoryType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0B6050F6F316691E;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_D6A07C122FCF6261;
namespace RPG::GameCore { class StageMonsterWave; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1CAEAAF0)
#define RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAEB260)
#define RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1CAEBA30)
#define RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET UNITYSDK_OFFSET(0x1CAEC070)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET UNITYSDK_OFFSET(0x1CAEC0A0)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1CAEC690)
#define RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1CAEC810)
#define RPG_GAMECORE_STAGEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1CAEBA90)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x1CAEBAE0)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET UNITYSDK_OFFSET(0x1CAEBD90)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET UNITYSDK_OFFSET(0x1CAEBBE0)
#define RPG_GAMECORE_STAGEROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAEC9C0)
#define RPG_GAMECORE_STAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEBA20)
#define RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET UNITYSDK_OFFSET(0x1CAEC600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRow_TypeDefinitionIndex = 14975;

	class StageRow : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexFloat()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x21950);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexInteger()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x21958);
		}
		::Il2CppArray<::System::String*>* LevelLoseCondition; // 0x10
		::Il2CppArray<::System::String*>* LevelWinCondition; // 0x18
		::System::String* LevelGraphPath; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x28
		::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* MonsterList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedSubLevelGraphList; // 0x38
		::Il2CppArray<::Class_1_0B6050F6F316691E*>* StageConfigData; // 0x40
		::Il2CppArray<::Class_1_D6A07C122FCF6261*>* SubLevelGraphs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _ProcessedTemplateVariables; // 0x50
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedCustomStringList; // 0x60
		::RPG::GameCore::StageType StageType; // 0x68
		::RPG::Client::TextID StageName; // 0x70
		::System::UInt32 StageID; // 0x80
		::System::UInt32 HardLevelGroup; // 0x84
		::System::UInt32 BattleScoringGroup; // 0x88
		::System::Boolean ForbidViewMode; // 0x8C
		::System::Boolean ResetBattleSpeed; // 0x8D
		::System::UInt32 EliteGroup; // 0x90
		::System::Boolean ForbidExitBattle; // 0x94
		::System::Boolean ForbidAutoBattle; // 0x95
		::System::Boolean Release; // 0x96
		::System::UInt32 Level; // 0x98
		::System::Single MonsterWarningRatio; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__CCTOR_OFFSET))();
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_RESET_OFFSET))(this);
		}

		::System::Boolean TryGetStageConfigString(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetStageConfigUint(::System::String* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetStageConfigUintArray(::System::String* a1, ::Il2CppArray<::System::UInt32>*& a2, ::System::Char a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*&, ::System::Char))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ChallengeStoryType GetChallengeStoryType()
		{
			return ((::RPG::GameCore::ChallengeStoryType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* get_ProcessedSubLevelGraphList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_ProcessedTemplateVariables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET))(this);
		}

		static ::System::Object* ParseTemplateVariable(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET))(a1);
		}

		static ::System::Void _TryAddStr(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET))(a1, a2);
		}
	};
}
