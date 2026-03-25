#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyGameResourceRow; }
namespace System { class String; }

#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D5E010)
#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_ICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x9D618F0)
#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9D61830)
#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D61810)
#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_RULEICONPATH_OFFSET UNITYSDK_OFFSET(0x9D61890)
#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9D61820)
#define RPG_CLIENT_MONOPOLYGAMERESOURCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D61800)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameResourceData_TypeDefinitionIndex = 53883;

	class MonopolyGameResourceData : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyGameResourceRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyGameResourceData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MonopolyGameResourceData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_RuleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_RULEICONPATH_OFFSET))(this);
		}

		::System::String* get_IconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMERESOURCEDATA_GET_ICONOUTLINEPATH_OFFSET))(this);
		}
	};
}
