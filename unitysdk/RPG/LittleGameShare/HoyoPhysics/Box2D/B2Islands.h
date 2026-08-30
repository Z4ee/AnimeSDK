#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Island; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2ADDCONTACTTOISLAND_OFFSET UNITYSDK_OFFSET(0xC30B9F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2ADDJOINTTOISLAND_OFFSET UNITYSDK_OFFSET(0xC30BE20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2CREATEISLAND_OFFSET UNITYSDK_OFFSET(0xC2CDBD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2DESTROYISLAND_OFFSET UNITYSDK_OFFSET(0xC2CDF80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2LINKCONTACT_OFFSET UNITYSDK_OFFSET(0xC30BAA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2LINKJOINT_OFFSET UNITYSDK_OFFSET(0xC2D55D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2MERGEAWAKEISLANDS_OFFSET UNITYSDK_OFFSET(0xC2D5A00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2MERGEISLAND_OFFSET UNITYSDK_OFFSET(0xC30BED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2SPLITISLANDTASK_OFFSET UNITYSDK_OFFSET(0xC30C170)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2SPLITISLAND_OFFSET UNITYSDK_OFFSET(0xC2D6BD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2UNLINKCONTACT_OFFSET UNITYSDK_OFFSET(0xC2F1E60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2UNLINKJOINT_OFFSET UNITYSDK_OFFSET(0xC2D5460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2VALIDATEISLAND_OFFSET UNITYSDK_OFFSET(0xC30C220)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Islands_TypeDefinitionIndex = 36005;

	class B2Islands : public ::System::Object
	{
	public:
		// static const ::System::Int32 B2_CONTACT_REMOVE_THRESHOLD = 0x1; // 0x0

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island* b2CreateIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2CREATEISLAND_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2DESTROYISLAND_OFFSET))(a1, a2);
		}

		static ::System::Void b2AddContactToIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2ADDCONTACTTOISLAND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2LinkContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2LINKCONTACT_OFFSET))(a1, a2);
		}

		static ::System::Void b2UnlinkContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2UNLINKCONTACT_OFFSET))(a1, a2);
		}

		static ::System::Void b2AddJointToIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2ADDJOINTTOISLAND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2LinkJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2LINKJOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2UnlinkJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2UNLINKJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2MergeIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2MERGEISLAND_OFFSET))(a1, a2);
		}

		static ::System::Void b2MergeAwakeIslands(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2MERGEAWAKEISLANDS_OFFSET))(a1);
		}

		static ::System::Void b2SplitIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2SPLITISLAND_OFFSET))(a1, a2);
		}

		static ::System::Void b2SplitIslandTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2SPLITISLANDTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2ValidateIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2VALIDATEISLAND_OFFSET))(a1, a2);
		}
	};
}
