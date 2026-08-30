#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightOrbData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D17272E82AE804C2_442;
class Class_1_D17272E82AE804C2_470;

#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD223130)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xD2233C0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xD2233A0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD223340)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xD2233E0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xD2233B0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xD2232E0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD223280)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD223260)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbEntityData_TypeDefinitionIndex = 64499;

	class GridFightOrbEntityData : public ::RPG::Client::GridFightOrbData
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x28
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbEntityData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Update(::Class_1_D17272E82AE804C2_470* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_470*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::Class_1_D17272E82AE804C2_442* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_442*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SETPOSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_UID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_POSITION_OFFSET))(this, a1);
		}
	};
}
