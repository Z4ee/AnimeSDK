#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CARTOONTRANSFER_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x925DC10)

namespace RPG::Client
{
	inline static constexpr unsigned int CartoonTransfer_Config_TypeDefinitionIndex = 59422;

	class CartoonTransfer_Config : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x10
		::System::Action* OnPlayEnd; // 0x18
		::UnityEngine::Vector2 Center; // 0x20
		::System::Single Duration; // 0x28
		::System::Boolean Close; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
