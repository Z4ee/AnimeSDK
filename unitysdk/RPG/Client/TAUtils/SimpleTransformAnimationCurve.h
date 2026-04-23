#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }

#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_METHOD_1_2D3AA52D931500A2_OFFSET UNITYSDK_OFFSET(0xB276ED0)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_METHOD_1_93097B60EF70000E_OFFSET UNITYSDK_OFFSET(0xB276FB0)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB277110)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int SimpleTransformAnimationCurve_TypeDefinitionIndex = 67780;

	class SimpleTransformAnimationCurve : public ::System::Object
	{
	public:
		::RPG::Client::TAUtils::Vector3AnimationCurve* position; // 0x10
		::RPG::Client::TAUtils::Vector3AnimationCurve* rotation; // 0x18
		::RPG::Client::TAUtils::Vector3AnimationCurve* scale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE__CTOR_OFFSET))(this);
		}

		::RPG::Client::TAUtils::SimpleTransform Method_1_2D3AA52D931500A2(::System::Single a1)
		{
			return ((::RPG::Client::TAUtils::SimpleTransform(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_METHOD_1_2D3AA52D931500A2_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_93097B60EF70000E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_METHOD_1_93097B60EF70000E_OFFSET))(this);
		}
	};
}
