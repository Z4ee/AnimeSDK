#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2IdPool; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2ALLOCID_OFFSET UNITYSDK_OFFSET(0x1C800B60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2CREATEIDPOOL_OFFSET UNITYSDK_OFFSET(0x1C83CAC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2DESTROYIDPOOL_OFFSET UNITYSDK_OFFSET(0x1C83CE00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2FREEID_OFFSET UNITYSDK_OFFSET(0x1C801D90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2GETIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C83C9C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2GETIDCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C83C9A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2GETIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C83C980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2VALIDATEFREEID_OFFSET UNITYSDK_OFFSET(0x1C83CE90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2VALIDATEUSEDID_OFFSET UNITYSDK_OFFSET(0x1C83CEA0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2IdPools_TypeDefinitionIndex = 36688;

	class B2IdPools : public ::System::Object
	{
	public:
		static ::System::Int32 b2GetIdCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2GETIDCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 b2GetIdCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2GETIDCAPACITY_OFFSET))(a1);
		}

		static ::System::Int32 b2GetIdBytes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2GETIDBYTES_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* b2CreateIdPool()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2CREATEIDPOOL_OFFSET))();
		}

		static ::System::Void b2DestroyIdPool(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2DESTROYIDPOOL_OFFSET))(a1);
		}

		static ::System::Int32 b2AllocId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2ALLOCID_OFFSET))(a1);
		}

		static ::System::Void b2FreeId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2FREEID_OFFSET))(a1, a2);
		}

		static ::System::Void b2ValidateFreeId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2VALIDATEFREEID_OFFSET))(a1, a2);
		}

		static ::System::Void b2ValidateUsedId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOLS_B2VALIDATEUSEDID_OFFSET))(a1, a2);
		}
	};
}
