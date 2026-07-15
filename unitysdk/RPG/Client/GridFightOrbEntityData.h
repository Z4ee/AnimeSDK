#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightOrbData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D17272E82AE804C2_429;
class Class_1_D17272E82AE804C2_457;

#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE85400)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AE85690)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1AE85670)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AE85610)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AE856B0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x1AE85680)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1AE855B0)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AE85550)
#define RPG_CLIENT_GRIDFIGHTORBENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE85530)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbEntityData_TypeDefinitionIndex = 61515;

	class GridFightOrbEntityData : public ::RPG::Client::GridFightOrbData
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x28
		::System::UInt32 _UID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbEntityData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Update(::Class_1_D17272E82AE804C2_457* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_457*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::Class_1_D17272E82AE804C2_429* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_429*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBENTITYDATA_UPDATE_1_OFFSET))(this, a1);
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
