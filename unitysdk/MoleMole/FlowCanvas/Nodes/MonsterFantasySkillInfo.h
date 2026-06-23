#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_FROMPROTO_OFFSET UNITYSDK_OFFSET(0x17E79FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x17E79FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x17E79F90)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x17E79FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x17E79FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_TOPROTO_OFFSET UNITYSDK_OFFSET(0x17E7A090)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E79FD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterFantasySkillInfo_TypeDefinitionIndex = 82975;

	class MonsterFantasySkillInfo : public ::System::Object
	{
	public:
		::System::UInt32 _SkillId_k__BackingField; // 0x10
		::System::Boolean _IsNew_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SkillId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_SET_SKILLID_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_SET_ISNEW_OFFSET))(this, value);
		}

		static ::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo* FromProto(::System::Object* obj)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*(*)(::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_FROMPROTO_OFFSET))(obj);
		}

		::System::Object* ToProto()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_TOPROTO_OFFSET))(this);
		}
	};
}
