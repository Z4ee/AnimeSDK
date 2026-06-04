#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGuideChapter; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB94860)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB948A0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_ALLCHAPTERQUESTIDS_B__23_0_OFFSET UNITYSDK_OFFSET(0xBB94BC0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_COMPLETEDCHAPTERCNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xBB948B0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_CURCHAPTER_B__19_0_OFFSET UNITYSDK_OFFSET(0xBB94B40)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_ISALLCHAPTERGOT_B__15_0_OFFSET UNITYSDK_OFFSET(0xBB949A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideBook___c_TypeDefinitionIndex = 60675;

	class GridFightGuideBook___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightGuideBook___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGuideBook___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x2FE30);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x2FE38);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x2FE40);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x2FE48);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x2FE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_CompletedChapterCnt_b__13_0(::RPG::Client::GridFightGuideChapter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGuideChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_COMPLETEDCHAPTERCNT_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsAllChapterGot_b__15_0(::RPG::Client::GridFightGuideChapter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGuideChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_ISALLCHAPTERGOT_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CurChapter_b__19_0(::RPG::Client::GridFightGuideChapter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGuideChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_CURCHAPTER_B__19_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _get_AllChapterQuestIDs_b__23_0(::RPG::Client::GridFightGuideChapter* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightGuideChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_ALLCHAPTERQUESTIDS_B__23_0_OFFSET))(this, a1);
		}
	};
}
