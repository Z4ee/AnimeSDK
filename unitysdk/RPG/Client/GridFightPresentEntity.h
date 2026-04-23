#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_717;
class Class_1_D1E0AD3915BCCF29_38;
namespace RPG::Client { class GridFightPresentConfig; }

#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET UNITYSDK_OFFSET(0xA562C10)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA562BF0)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0xA562B70)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_REMAINROUND_OFFSET UNITYSDK_OFFSET(0xA562BA0)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_UID_OFFSET UNITYSDK_OFFSET(0xA562B20)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA562CF0)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA562C00)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET UNITYSDK_OFFSET(0xA562E90)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xA562CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentEntity_TypeDefinitionIndex = 59302;

	class GridFightPresentEntity : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightPresentConfig* _Config_k__BackingField; // 0x18
		::Class_1_D1E0AD3915BCCF29_38* _presentInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_RemainRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_REMAINROUND_OFFSET))(this);
		}

		::RPG::Client::GridFightPresentConfig* get_Config()
		{
			return ((::RPG::Client::GridFightPresentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightPresentConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET))(this, value);
		}

		static ::RPG::Client::GridFightPresentEntity* Create(::Class_1_D1E0AD3915BCCF29_38* protoPresent)
		{
			return ((::RPG::Client::GridFightPresentEntity*(*)(::Class_1_D1E0AD3915BCCF29_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET))(protoPresent);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Update(::Class_1_D1E0AD3915BCCF29_38* protoPresent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET))(this, protoPresent);
		}
	};
}
