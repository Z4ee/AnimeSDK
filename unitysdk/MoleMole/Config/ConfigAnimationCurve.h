#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x86CD20)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x86CC90)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x86CD80)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_METHOD_2_ADFCC0DC85F98B9C_OFFSET UNITYSDK_OFFSET(0x86CDC0)
#define MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x86CD90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimationCurve_TypeDefinitionIndex = 62525;

	struct alignas(8) ConfigAnimationCurve
	{
		::System::String* Key; // 0x10
		::UnityEngine::AnimationCurve* _curve; // 0x18

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* get_Curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_GET_CURVE_OFFSET))(this);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_ADFCC0DC85F98B9C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATIONCURVE_METHOD_2_ADFCC0DC85F98B9C_OFFSET))(this, a1, a2);
		}
	};
}
