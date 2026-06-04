#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_768;
class Class_1_D1E0AD3915BCCF29_40;
namespace RPG::Client { class GridFightPresentConfig; }

#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET UNITYSDK_OFFSET(0xBBBFE50)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBD0580)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBD0500)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_REMAINROUND_OFFSET UNITYSDK_OFFSET(0xBBD0530)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_UID_OFFSET UNITYSDK_OFFSET(0xBBB9300)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBBBFF10)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBBD0590)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET UNITYSDK_OFFSET(0xBBBFD80)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD05A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentEntity_TypeDefinitionIndex = 60237;

	class GridFightPresentEntity : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightPresentConfig* _Config_k__BackingField; // 0x18
		::Class_1_D1E0AD3915BCCF29_40* _presentInfo; // 0x20

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

		::System::Void set_Config(::RPG::Client::GridFightPresentConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightPresentEntity* Create(::Class_1_D1E0AD3915BCCF29_40* a1)
		{
			return ((::RPG::Client::GridFightPresentEntity*(*)(::Class_1_D1E0AD3915BCCF29_40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET))(a1);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_D1E0AD3915BCCF29_40* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET))(this, a1);
		}
	};
}
