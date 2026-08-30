#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContinuousContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2TaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeQueryCallbackFcn_1; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Solvers___O_TypeDefinitionIndex = 36096;

	class B2Solvers___O : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__1___b2SplitIslandTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Solvers___O_TypeDefinitionIndex)->GetStaticField(0x2CB70);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__2___b2SolverTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Solvers___O_TypeDefinitionIndex)->GetStaticField(0x2CB78);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__3___b2FinalizeBodiesTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Solvers___O_TypeDefinitionIndex)->GetStaticField(0x2CB80);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContinuousContext>** StaticGet__0___b2ContinuousQueryCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContinuousContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Solvers___O_TypeDefinitionIndex)->GetStaticField(0x2CB88);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__4___b2BulletBodyTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Solvers___O_TypeDefinitionIndex)->GetStaticField(0x2CB90);
		}
	};
}
