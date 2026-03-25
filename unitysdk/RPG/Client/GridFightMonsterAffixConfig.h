#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAffixConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9861060)
#define RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x986AB30)
#define RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x986ABF0)
#define RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x986AAE0)
#define RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x986AB00)
#define RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x986AAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterAffixConfig_TypeDefinitionIndex = 52819;

	class GridFightMonsterAffixConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAffixConfigRow* _row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightMonsterAffixConfig* Create(::System::UInt32 affixID)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_CREATE_OFFSET))(affixID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERAFFIXCONFIG_GET_ICONPATH_OFFSET))(this);
		}
	};
}
