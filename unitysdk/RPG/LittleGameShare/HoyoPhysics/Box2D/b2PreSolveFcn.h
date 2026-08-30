#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C326700)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C3267E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C30D510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C326690)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2PreSolveFcn_TypeDefinitionIndex = 35961;

	class b2PreSolveFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4, ::System::Object* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4, ::System::Object* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRESOLVEFCN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
