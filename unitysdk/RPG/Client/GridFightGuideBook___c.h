#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGuideChapter; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19501950)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19501990)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_ALLCHAPTERQUESTIDS_B__23_0_OFFSET UNITYSDK_OFFSET(0x19501CB0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_COMPLETEDCHAPTERCNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x195019A0)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_CURCHAPTER_B__19_0_OFFSET UNITYSDK_OFFSET(0x19501C30)
#define RPG_CLIENT_GRIDFIGHTGUIDEBOOK___C__GET_ISALLCHAPTERGOT_B__15_0_OFFSET UNITYSDK_OFFSET(0x19501A90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideBook___c_TypeDefinitionIndex = 61967;

	class GridFightGuideBook___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x282D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x282D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x282E0);
		}
		static ::RPG::Client::GridFightGuideBook___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGuideBook___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x282E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGuideChapter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideBook___c_TypeDefinitionIndex)->GetStaticField(0x282F0);
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
