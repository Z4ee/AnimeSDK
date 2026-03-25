#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_626;
class Class_1_120319518E6F6581_37;
namespace RPG::Client { class GridFightPresentConfig; }

#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET UNITYSDK_OFFSET(0x9884970)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9884950)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x98848D0)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_REMAINROUND_OFFSET UNITYSDK_OFFSET(0x9884900)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_UID_OFFSET UNITYSDK_OFFSET(0x9884880)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9884A50)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9884960)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x9884BF0)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x9884A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentEntity_TypeDefinitionIndex = 52349;

	class GridFightPresentEntity : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_120319518E6F6581_37* _presentInfo; // 0x18
		::RPG::Client::GridFightPresentConfig* _Config_k__BackingField; // 0x20

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

		static ::RPG::Client::GridFightPresentEntity* Create(::Class_1_120319518E6F6581_37* protoPresent)
		{
			return ((::RPG::Client::GridFightPresentEntity*(*)(::Class_1_120319518E6F6581_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET))(protoPresent);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Update(::Class_1_120319518E6F6581_37* protoPresent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET))(this, protoPresent);
		}
	};
}
