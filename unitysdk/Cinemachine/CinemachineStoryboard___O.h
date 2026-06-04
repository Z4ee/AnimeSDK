#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard___O_TypeDefinitionIndex = 36819;

	class CinemachineStoryboard___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::Cinemachine::CinemachineBrain*>** StaticGet__0___StaticBlendingHandler()
		{
			return (::UnityEngine::Events::UnityAction_1<::Cinemachine::CinemachineBrain*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineStoryboard___O_TypeDefinitionIndex)->GetStaticField(0x56D0);
		}
	};
}
