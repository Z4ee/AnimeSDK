#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195029F0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19502A30)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_0_OFFSET UNITYSDK_OFFSET(0x19502B90)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_1_OFFSET UNITYSDK_OFFSET(0x19502BA0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_0_OFFSET UNITYSDK_OFFSET(0x19502B00)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_1_OFFSET UNITYSDK_OFFSET(0x19502B70)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_CHAPTERQUESTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x19502A40)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_COMPLETEDQUESTCNT_B__20_0_OFFSET UNITYSDK_OFFSET(0x19502AD0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_HASREWARD_B__24_0_OFFSET UNITYSDK_OFFSET(0x19502AF0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_ISCHAPTERCLEAR_B__18_0_OFFSET UNITYSDK_OFFSET(0x19502AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideChapter___c_TypeDefinitionIndex = 61969;

	class GridFightGuideChapter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28330);
		}
		static ::RPG::Client::GridFightGuideChapter___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGuideChapter___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28338);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28340);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28348);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28350);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28358);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28360);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28368);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x28370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::QuestData* _get_ChapterQuests_b__8_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_CHAPTERQUESTS_B__8_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsChapterClear_b__18_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_ISCHAPTERCLEAR_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CompletedQuestCnt_b__20_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_COMPLETEDQUESTCNT_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasReward_b__24_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_HASREWARD_B__24_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetQuestByIndex_b__26_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetQuestByIndex_b__26_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetChapterQuestListReward_b__27_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetChapterQuestListReward_b__27_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_1_OFFSET))(this, a1);
		}
	};
}
