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

#define RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x17765ED0)
#define RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17766660)
#define RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1776C8B0)
#define RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET UNITYSDK_OFFSET(0x1776CF20)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET UNITYSDK_OFFSET(0x1776CF50)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1776D2C0)
#define RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1776D440)
#define RPG_GAMECORE_STAGEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1776C910)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x1776C960)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET UNITYSDK_OFFSET(0x1776CC80)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET UNITYSDK_OFFSET(0x1776CA70)
#define RPG_GAMECORE_STAGEROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1776D5F0)
#define RPG_GAMECORE_STAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1776C950)
#define RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET UNITYSDK_OFFSET(0x1776D290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRow_TypeDefinitionIndex = 13886;

	class StageRow : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexInteger()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x11E00);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexFloat()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x11E08);
		}
		::Il2CppArray<::Class_1_0B6050F6F316691E*>* StageConfigData; // 0x10
		::Il2CppArray<::Class_1_D6A07C122FCF6261*>* SubLevelGraphs; // 0x18
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x20
		::Il2CppArray<::System::String*>* LevelLoseCondition; // 0x28
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _ProcessedTemplateVariables; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedSubLevelGraphList; // 0x40
		::Il2CppArray<::System::String*>* LevelWinCondition; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedCustomStringList; // 0x50
		::System::String* LevelGraphPath; // 0x58
		::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* MonsterList; // 0x60
		::System::Boolean ForbidExitBattle; // 0x68
		::System::Boolean ResetBattleSpeed; // 0x69
		::System::Boolean ForbidAutoBattle; // 0x6A
		::System::Boolean Release; // 0x6B
		::System::Boolean ForbidViewMode; // 0x6C
		::System::UInt32 StageID; // 0x70
		::System::Single MonsterWarningRatio; // 0x74
		::RPG::GameCore::StageType StageType; // 0x78
		::System::UInt32 BattleScoringGroup; // 0x7C
		::RPG::Client::TextID StageName; // 0x80
		::System::UInt32 Level; // 0x90
		::System::UInt32 HardLevelGroup; // 0x94
		::System::UInt32 EliteGroup; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__CCTOR_OFFSET))();
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Boolean TryGetStageConfigString(::System::String* key, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetStageConfigUint(::System::String* key, ::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetStageConfigUintArray(::System::String* key, ::Il2CppArray<::System::UInt32>*& array, ::System::Char separator)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*&, ::System::Char))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET))(this, key, array, separator);
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

		static ::System::Object* ParseTemplateVariable(::System::String* s)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET))(s);
		}

		static ::System::Void _TryAddStr(::System::Collections::Generic::List_1<::System::String*>* pList, ::System::String* s)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET))(pList, s);
		}
	};
}
