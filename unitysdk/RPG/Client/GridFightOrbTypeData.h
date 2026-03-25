#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbServerData; }
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9878500)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9878670)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x98786D0)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9878650)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9878660)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9878640)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbTypeData_TypeDefinitionIndex = 52347;

	class GridFightOrbTypeData : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbTypeRow* _row; // 0x10
		::RPG::Client::GridFightOrbServerData* _ServerData; // 0x18
		::RPG::GameCore::GridFightOrbType _Type_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbTypeData* Create(::RPG::GameCore::GridFightOrbType type)
		{
			return ((::RPG::Client::GridFightOrbTypeData*(*)(::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_CREATE_OFFSET))(type);
		}

		::RPG::GameCore::GridFightOrbType get_Type()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::GridFightOrbType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}
	};
}
