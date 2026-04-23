#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightOrbData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D17272E82AE804C2_372;
class Class_1_D17272E82AE804C2_389;

#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA513140)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA5133D0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xA5133B0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA513350)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA5133F0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xA5133C0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xA5132F0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xA513290)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA513270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbEntityData_TypeDefinitionIndex = 59291;

	class GridFightOrbEntityData : public ::RPG::Client::GridFightOrbData
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x28
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbEntityData* Create(::System::UInt32 uid, ::System::UInt32 orbID)
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_CREATE_OFFSET))(uid, orbID);
		}

		::System::Void Update(::Class_1_D17272E82AE804C2_389* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_389*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_OFFSET))(this, update);
		}

		::System::Void Update_1(::Class_1_D17272E82AE804C2_372* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_372*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_1_OFFSET))(this, update);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SETPOSITION_OFFSET))(this, position);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_UID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_POSITION_OFFSET))(this, value);
		}
	};
}
