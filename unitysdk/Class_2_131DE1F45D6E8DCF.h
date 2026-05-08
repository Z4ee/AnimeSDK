#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x143D0540)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x143D0550)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_6349F8BECC5FCFA0_OFFSET UNITYSDK_OFFSET(0x143D0620)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_75F9D2690D14517B_OFFSET UNITYSDK_OFFSET(0x143CFD50)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_8652DE0774915A40_OFFSET UNITYSDK_OFFSET(0x143D0530)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_BBEE8C0801828E89_OFFSET UNITYSDK_OFFSET(0x143D0520)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_DF8A2FBE9F24E6BD_OFFSET UNITYSDK_OFFSET(0x143CF0F0)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x143D0510)
#define CLASS_2_131DE1F45D6E8DCF_METHOD_2_F6C10DB4374245F7_OFFSET UNITYSDK_OFFSET(0x143D0630)
#define CLASS_2_131DE1F45D6E8DCF_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x143CEDB0)
#define CLASS_2_131DE1F45D6E8DCF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x143CF2C0)
#define CLASS_2_131DE1F45D6E8DCF__CTOR_OFFSET UNITYSDK_OFFSET(0x143D0500)

inline static constexpr unsigned int Class_2_131DE1F45D6E8DCF_TypeDefinitionIndex = 59057;

class Class_2_131DE1F45D6E8DCF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animation* Field_2_2; // 0x10
	::UnityEngine::ParticleSystem* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BBEE8C0801828E89(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_BBEE8C0801828E89_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF8A2FBE9F24E6BD(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_DF8A2FBE9F24E6BD_OFFSET))(this, a1);
	}

	::UnityEngine::Animation* Method_2_8652DE0774915A40()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_8652DE0774915A40_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_75F9D2690D14517B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_75F9D2690D14517B_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::ParticleSystem* Method_2_6349F8BECC5FCFA0()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_6349F8BECC5FCFA0_OFFSET))(this);
	}

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6C10DB4374245F7(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_131DE1F45D6E8DCF_METHOD_2_F6C10DB4374245F7_OFFSET))(this, a1);
	}
};
