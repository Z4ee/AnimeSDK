#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorQueryContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2TaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class b2TreeQueryCallbackFcn_1; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Sensors___O_TypeDefinitionIndex = 36069;

	class B2Sensors___O : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback** StaticGet__1___b2SensorTask()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback**)Il2CppClass::FromTypeDefinitionIndex(B2Sensors___O_TypeDefinitionIndex)->GetStaticField(0x2A610);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorQueryContext>** StaticGet__0___b2SensorQueryCallback()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TreeQueryCallbackFcn_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorQueryContext>**)Il2CppClass::FromTypeDefinitionIndex(B2Sensors___O_TypeDefinitionIndex)->GetStaticField(0x2A618);
		}
	};
}
