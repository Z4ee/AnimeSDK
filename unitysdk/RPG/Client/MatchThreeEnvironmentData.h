#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeEnvironmentRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C26A2E0)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C26A4F0)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C26A400)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C26A3E0)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C26A470)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1C26A570)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C26A3F0)
#define RPG_CLIENT_MATCHTHREEENVIRONMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C26A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnvironmentData_TypeDefinitionIndex = 65893;

	class MatchThreeEnvironmentData : public ::System::Object
	{
	public:
		::RPG::GameCore::MatchThreeEnvironmentRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeEnvironmentData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeEnvironmentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Params()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENVIRONMENTDATA_GET_PARAMS_OFFSET))(this);
		}
	};
}
