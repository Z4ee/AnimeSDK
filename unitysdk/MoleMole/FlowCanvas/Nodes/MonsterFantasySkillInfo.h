#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_FROMPROTO_OFFSET UNITYSDK_OFFSET(0x19BEA640)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x19BEA610)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x19BEA5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x19BEA620)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x19BEA600)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO_TOPROTO_OFFSET UNITYSDK_OFFSET(0x19BEA6F0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEA630)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterFantasySkillInfo_TypeDefinitionIndex = 69948;

	class MonsterFantasySkillInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsNew_k__BackingField; // 0x10
		::System::UInt32 _SkillId_k__BackingField; // 0x14

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
