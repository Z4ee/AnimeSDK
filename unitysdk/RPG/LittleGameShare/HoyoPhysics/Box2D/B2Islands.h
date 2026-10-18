#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Island; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2ADDCONTACTTOISLAND_OFFSET UNITYSDK_OFFSET(0x1C80EF40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2ADDJOINTTOISLAND_OFFSET UNITYSDK_OFFSET(0x1C80F370)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2CREATEISLAND_OFFSET UNITYSDK_OFFSET(0x1C7D1120)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2DESTROYISLAND_OFFSET UNITYSDK_OFFSET(0x1C7D14D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2LINKCONTACT_OFFSET UNITYSDK_OFFSET(0x1C80EFF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2LINKJOINT_OFFSET UNITYSDK_OFFSET(0x1C7D8B60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2MERGEAWAKEISLANDS_OFFSET UNITYSDK_OFFSET(0x1C7D8F90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2MERGEISLAND_OFFSET UNITYSDK_OFFSET(0x1C80F420)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2SPLITISLANDTASK_OFFSET UNITYSDK_OFFSET(0x1C80F6B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2SPLITISLAND_OFFSET UNITYSDK_OFFSET(0x1C7DA170)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2UNLINKCONTACT_OFFSET UNITYSDK_OFFSET(0x1C7F5440)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2UNLINKJOINT_OFFSET UNITYSDK_OFFSET(0x1C7D8A10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDS_B2VALIDATEISLAND_OFFSET UNITYSDK_OFFSET(0x1C80F760)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Islands_TypeDefinitionIndex = 36692;

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
