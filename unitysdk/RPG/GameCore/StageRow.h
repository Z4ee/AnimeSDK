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

#define RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18E8BA60)
#define RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E8C1F0)
#define RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18E92440)
#define RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET UNITYSDK_OFFSET(0x18E92AC0)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET UNITYSDK_OFFSET(0x18E92AF0)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x18E92E60)
#define RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x18E92FE0)
#define RPG_GAMECORE_STAGEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18E924A0)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x18E92500)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET UNITYSDK_OFFSET(0x18E92820)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET UNITYSDK_OFFSET(0x18E92610)
#define RPG_GAMECORE_STAGEROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E93190)
#define RPG_GAMECORE_STAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E924F0)
#define RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET UNITYSDK_OFFSET(0x18E92E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRow_TypeDefinitionIndex = 14361;

	class StageRow : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexInteger()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x53A90);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexFloat()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x53A98);
		}
		::System::String* LevelGraphPath; // 0x10
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedCustomStringList; // 0x20
		::Il2CppArray<::System::String*>* LevelLoseCondition; // 0x28
		::Il2CppArray<::Class_1_0B6050F6F316691E*>* StageConfigData; // 0x30
		::Il2CppArray<::Class_1_D6A07C122FCF6261*>* SubLevelGraphs; // 0x38
		::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* MonsterList; // 0x40
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _ProcessedTemplateVariables; // 0x50
		::Il2CppArray<::System::String*>* LevelWinCondition; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedSubLevelGraphList; // 0x60
		::RPG::Client::TextID StageName; // 0x68
		::System::Single MonsterWarningRatio; // 0x78
		::System::Boolean ForbidExitBattle; // 0x7C
		::System::Boolean ForbidAutoBattle; // 0x7D
		::System::UInt32 StageID; // 0x80
		::System::UInt32 BattleScoringGroup; // 0x84
		::System::UInt32 HardLevelGroup; // 0x88
		::System::UInt32 Level; // 0x8C
		::System::UInt32 EliteGroup; // 0x90
		::System::Boolean Release; // 0x94
		::System::Boolean ResetBattleSpeed; // 0x95
		::System::Boolean ForbidViewMode; // 0x96
		::RPG::GameCore::StageType StageType; // 0x98

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
