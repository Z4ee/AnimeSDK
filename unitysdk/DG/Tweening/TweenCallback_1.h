#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace DG::Tweening
{
	inline static constexpr unsigned int TweenCallback_1_TypeDefinitionIndex = 25342;

	template <typename T>
	class TweenCallback_1 : public ::System::MulticastDelegate
	{
	public:
	};
}
