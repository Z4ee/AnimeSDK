#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbServerData; }
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE8C420)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE8E3F0)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE8E450)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AE8E3D0)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AE8E3E0)
#define RPG_CLIENT_GRIDFIGHTORBTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE8E3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbTypeData_TypeDefinitionIndex = 61524;

	class GridFightOrbTypeData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightOrbServerData* _ServerData; // 0x10
		::RPG::GameCore::GridFightOrbTypeRow* _row; // 0x18
		::RPG::GameCore::GridFightOrbType _Type_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbTypeData* Create(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::RPG::Client::GridFightOrbTypeData*(*)(::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_CREATE_OFFSET))(a1);
		}

		::RPG::GameCore::GridFightOrbType get_Type()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBTYPEDATA_SET_TYPE_OFFSET))(this, a1);
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
