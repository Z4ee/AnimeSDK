#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }
namespace RPG::Client::TAUtils { class Vector4AnimationCurve; }

#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_METHOD_1_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0xE151AD0)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_METHOD_1_725B7810B3C694DE_OFFSET UNITYSDK_OFFSET(0xE151720)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xE151D10)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int QuaternionTransformAnimationCurve_TypeDefinitionIndex = 73540;

	class QuaternionTransformAnimationCurve : public ::System::Object
	{
	public:
		::RPG::Client::TAUtils::Vector3AnimationCurve* position; // 0x10
		::RPG::Client::TAUtils::Vector4AnimationCurve* rotation; // 0x18
		::RPG::Client::TAUtils::Vector3AnimationCurve* scale; // 0x20
		::System::Boolean rotationUseQuaternion; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE__CTOR_OFFSET))(this);
		}

		::RPG::Client::TAUtils::QuaternionTransform Method_1_725B7810B3C694DE(::System::Single a1)
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_METHOD_1_725B7810B3C694DE_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1ADC5E4C222F6999()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_METHOD_1_1ADC5E4C222F6999_OFFSET))(this);
		}
	};
}
