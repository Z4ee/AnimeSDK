#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A200)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A0C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C799FD0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2ManifoldFcn_TypeDefinitionIndex = 35965;

	class b2ManifoldFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold Invoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold EndInvoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a1, ::System::IAsyncResult* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDFCN_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
