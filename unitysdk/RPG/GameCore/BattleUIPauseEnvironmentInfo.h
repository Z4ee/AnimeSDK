#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B634FE0)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B634FA0)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1B635000)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B634FC0)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1B634FF0)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B634FB0)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1B635010)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B634FD0)
#define RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B635020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleUIPauseEnvironmentInfo_TypeDefinitionIndex = 55555;

	class BattleUIPauseEnvironmentInfo : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _Params_k__BackingField; // 0x18
		::RPG::Client::TextID _Title_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_DESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_Params()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEUIPAUSEENVIRONMENTINFO_SET_PARAMS_OFFSET))(this, a1);
		}
	};
}
