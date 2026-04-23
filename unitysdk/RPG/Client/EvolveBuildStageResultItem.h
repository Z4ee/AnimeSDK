#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA306080)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA306E30)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUMTEXTFORMAT_OFFSET UNITYSDK_OFFSET(0xA306DF0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUM_OFFSET UNITYSDK_OFFSET(0xA306E10)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA306DD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA306E40)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUMTEXTFORMAT_OFFSET UNITYSDK_OFFSET(0xA306E00)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUM_OFFSET UNITYSDK_OFFSET(0xA306E20)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA306DE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA306DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStageResultItem_TypeDefinitionIndex = 58777;

	class EvolveBuildStageResultItem : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Title_k__BackingField; // 0x18
		::RPG::Client::TextID _NumTextFormat_k__BackingField; // 0x28
		::System::UInt32 _Num_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildStageResultItem* Create(::RPG::Client::TextID title, ::RPG::Client::TextID numTextFormat, ::System::UInt32 num, ::System::String* iconPath)
		{
			return ((::RPG::Client::EvolveBuildStageResultItem*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_CREATE_OFFSET))(title, numTextFormat, num, iconPath);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_TITLE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_NumTextFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUMTEXTFORMAT_OFFSET))(this);
		}

		::System::Void set_NumTextFormat(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUMTEXTFORMAT_OFFSET))(this, value);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUM_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
