#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SignalTransformProcessor_SignalDrivenMode.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC8C52B0)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_SHOULDPLAYCURVE_OFFSET UNITYSDK_OFFSET(0xC8C52C0)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_62BBF6FB1430C4E2_OFFSET UNITYSDK_OFFSET(0xC8C4F50)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0xC8C50E0)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_A3CE3797867F0E52_OFFSET UNITYSDK_OFFSET(0xC8C4D50)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC8C51D0)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xC8C5220)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xC8C5260)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC8C5180)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xC8C5060)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C52D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalTransformProcessor_TypeDefinitionIndex = 66361;

	class SignalTransformProcessor : public ::System::Object
	{
	public:
		::RPG::Client::SignalTransformProcessor_SignalDrivenMode DrivenMode; // 0x10
		::System::Single Threshold; // 0x14
		::System::Single Speed; // 0x18
		::UnityEngine::AnimationCurve* SignalCurve; // 0x20
		::System::Int32 PhaseID; // 0x28
		::System::Boolean _shouldPlayCurve; // 0x2C
		::System::Single _progress; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A3CE3797867F0E52(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_A3CE3797867F0E52_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_1_62BBF6FB1430C4E2(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_62BBF6FB1430C4E2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_9E3751A8C9767297(::System::Single a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_9E3751A8C9767297_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ShouldPlayCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_SHOULDPLAYCURVE_OFFSET))(this);
		}
	};
}
