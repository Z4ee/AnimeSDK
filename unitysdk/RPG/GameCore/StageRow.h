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

#define RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19CA8630)
#define RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CA9040)
#define RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19CAF190)
#define RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET UNITYSDK_OFFSET(0x19CAF7C0)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET UNITYSDK_OFFSET(0x19CAF7F0)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x19CAFDB0)
#define RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x19CAFF30)
#define RPG_GAMECORE_STAGEROW_RESET_OFFSET UNITYSDK_OFFSET(0x19CAF1F0)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x19CAF240)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET UNITYSDK_OFFSET(0x19CAF4F0)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET UNITYSDK_OFFSET(0x19CAF340)
#define RPG_GAMECORE_STAGEROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CB00E0)
#define RPG_GAMECORE_STAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAF180)
#define RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET UNITYSDK_OFFSET(0x19CAFD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRow_TypeDefinitionIndex = 14406;

	class StageRow : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexInteger()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x4EE60);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexFloat()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StageRow_TypeDefinitionIndex)->GetStaticField(0x4EE68);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedCustomStringList; // 0x10
		::System::String* LevelGraphPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _ProcessedTemplateVariables; // 0x20
		::Il2CppArray<::System::String*>* LevelWinCondition; // 0x28
		::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* MonsterList; // 0x30
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x38
		::Il2CppArray<::Class_1_0B6050F6F316691E*>* StageConfigData; // 0x40
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x48
		::Il2CppArray<::System::String*>* LevelLoseCondition; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedSubLevelGraphList; // 0x58
		::Il2CppArray<::Class_1_D6A07C122FCF6261*>* SubLevelGraphs; // 0x60
		::System::UInt32 HardLevelGroup; // 0x68
		::System::Boolean ForbidViewMode; // 0x6C
		::System::UInt32 StageID; // 0x70
		::System::UInt32 BattleScoringGroup; // 0x74
		::System::UInt32 Level; // 0x78
		::RPG::Client::TextID StageName; // 0x80
		::System::Boolean ForbidExitBattle; // 0x90
		::System::Boolean Release; // 0x91
		::System::Boolean ResetBattleSpeed; // 0x92
		::System::Boolean ForbidAutoBattle; // 0x93
		::System::Single MonsterWarningRatio; // 0x94
		::System::UInt32 EliteGroup; // 0x98
		::RPG::GameCore::StageType StageType; // 0x9C

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
