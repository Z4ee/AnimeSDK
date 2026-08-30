#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactData.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactRegister.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2ManifoldFcn; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2ADDTYPE_OFFSET UNITYSDK_OFFSET(0xC2F1C90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CAPSULEANDCIRCLEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2E6ED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CAPSULEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2E7560)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CHAINSEGMENTANDCAPSULEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2EE300)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CHAINSEGMENTANDCIRCLEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2EDB50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CHAINSEGMENTANDPOLYGONMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2EE590)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CIRCLEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2E6930)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2COMPUTEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2F2E40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CONTACT_GETDATA_OFFSET UNITYSDK_OFFSET(0xC2F3020)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CREATECONTACT_OFFSET UNITYSDK_OFFSET(0xC2CC3E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2DESTROYCONTACT_OFFSET UNITYSDK_OFFSET(0xC2CE290)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2GETCONTACTFULLID_OFFSET UNITYSDK_OFFSET(0xC2F2FF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2GETCONTACTSIM_OFFSET UNITYSDK_OFFSET(0xC2D0DD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2INITIALIZECONTACTREGISTERS_OFFSET UNITYSDK_OFFSET(0xC2E61D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2POLYGONANDCAPSULEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2EAB60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2POLYGONANDCIRCLEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2E9A30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2POLYGONMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2EADD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2SEGMENTANDCAPSULEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2ED760)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2SEGMENTANDCIRCLEMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2ED5E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2SEGMENTANDPOLYGONMANIFOLD_OFFSET UNITYSDK_OFFSET(0xC2ED8E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2UPDATECONTACT_OFFSET UNITYSDK_OFFSET(0xC2F1F40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2E6170)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Contacts_TypeDefinitionIndex = 35946;

	class B2Contacts : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactRegister>** StaticGet_s_registers()
		{
			return (::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactRegister>**)Il2CppClass::FromTypeDefinitionIndex(B2Contacts_TypeDefinitionIndex)->GetStaticField(0x27310);
		}
		static ::System::Boolean* StaticGet_s_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(B2Contacts_TypeDefinitionIndex)->GetStaticField(0xB9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS__CCTOR_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CircleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CIRCLEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CapsuleAndCircleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CAPSULEANDCIRCLEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CapsuleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CAPSULEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2PolygonAndCircleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2POLYGONANDCIRCLEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2PolygonAndCapsuleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2POLYGONANDCAPSULEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2PolygonManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2POLYGONMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2SegmentAndCircleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2SEGMENTANDCIRCLEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2SegmentAndCapsuleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2SEGMENTANDCAPSULEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2SegmentAndPolygonManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2SEGMENTANDPOLYGONMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2ChainSegmentAndCircleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CHAINSEGMENTANDCIRCLEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2ChainSegmentAndCapsuleManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CHAINSEGMENTANDCAPSULEMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2ChainSegmentAndPolygonManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CHAINSEGMENTANDPOLYGONMANIFOLD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2AddType(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2ManifoldFcn* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2ManifoldFcn*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2ADDTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2InitializeContactRegisters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2INITIALIZECONTACTREGISTERS_OFFSET))();
		}

		static ::System::Void b2CreateContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CREATECONTACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2DestroyContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2DESTROYCONTACT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim* b2GetContactSim(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2GETCONTACTSIM_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2UpdateContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a5, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a6, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a7, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a8)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2UPDATECONTACT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2ComputeManifold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2COMPUTEMANIFOLD_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* b2GetContactFullId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2GETCONTACTFULLID_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactData b2Contact_GetData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTS_B2CONTACT_GETDATA_OFFSET))(a1);
		}
	};
}
