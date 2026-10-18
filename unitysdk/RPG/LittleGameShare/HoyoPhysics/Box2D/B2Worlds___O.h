#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ExplosionContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldMoverCastContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldMoverContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldOverlapContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldQueryContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldRayCastContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2EnqueueTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FinishTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2TaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeQueryCallbackFcn_1; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeRayCastCallbackFcn_1; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeShapeCastCallbackFcn_1; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Worlds___O_TypeDefinitionIndex = 36822;

	class B2Worlds___O : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback** StaticGet__3___b2DefaultFinishTaskFcn()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249C0);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback** StaticGet__1___b2DefaultRestitutionCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249C8);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>** StaticGet__8___RayCastCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249D0);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverCastContext>** StaticGet__11___MoverCastCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverCastContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249D8);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverContext>** StaticGet__12___TreeCollideCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249E0);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldQueryContext>** StaticGet__6___TreeQueryCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldQueryContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249E8);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback** StaticGet__2___b2DefaultAddTaskFcn()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249F0);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__4___b2UpdateTreesTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x249F8);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback** StaticGet__0___b2DefaultFrictionCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x24A00);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__5___b2CollideTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x24A08);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionContext>** StaticGet__13___ExplosionCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x24A10);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldOverlapContext>** StaticGet__7___TreeOverlapCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldOverlapContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x24A18);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>** StaticGet__10___ShapeCastCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeShapeCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x24A20);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>** StaticGet__9___RayCastClosestCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeRayCastCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Worlds___O_TypeDefinitionIndex)->GetStaticField(0x24A28);
		}
	};
}
