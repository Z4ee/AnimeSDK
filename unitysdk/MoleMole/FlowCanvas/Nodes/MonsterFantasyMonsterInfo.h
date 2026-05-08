#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_FROMPROTO_OFFSET UNITYSDK_OFFSET(0x10BB9810)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x10BB97A0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x10BB97C0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_GET_UNLOCKSKILLLIST_OFFSET UNITYSDK_OFFSET(0x10BB97E0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x10BB97B0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x10BB97D0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_SET_UNLOCKSKILLLIST_OFFSET UNITYSDK_OFFSET(0x10BB97F0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_TOPROTO_OFFSET UNITYSDK_OFFSET(0x10BB9950)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB9800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterFantasyMonsterInfo_TypeDefinitionIndex = 55671;

	class MonsterFantasyMonsterInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>* _UnlockSkillList_k__BackingField; // 0x10
		::System::UInt32 _EntityId_k__BackingField; // 0x18
		::System::Boolean _IsNew_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>* get_UnlockSkillList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_GET_UNLOCKSKILLLIST_OFFSET))(this);
		}

		::System::Void set_UnlockSkillList(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_SET_UNLOCKSKILLLIST_OFFSET))(this, value);
		}

		static ::MoleMole::FlowCanvas::Nodes::MonsterFantasyMonsterInfo* FromProto(::System::Object* obj)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterFantasyMonsterInfo*(*)(::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_FROMPROTO_OFFSET))(obj);
		}

		::System::Object* ToProto()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO_TOPROTO_OFFSET))(this);
		}
	};
}
