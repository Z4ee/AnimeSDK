#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayCastInput.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2TreeRayCastCallbackFcn_1_TypeDefinitionIndex = 35106;

	template <typename T>
	class b2TreeRayCastCallbackFcn_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
