#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2A9144AA173D64D2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }

#define CLASS_1_4F3D403A38BF2189_METHOD_1_0C113CC8A31BC95C_OFFSET UNITYSDK_OFFSET(0x11B96B80)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x11B95C60)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x11B95800)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x11B964B0)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11B968C0)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_53E85B5693BAE592_OFFSET UNITYSDK_OFFSET(0x11B95860)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_7B7BD71833BFC44B_OFFSET UNITYSDK_OFFSET(0x11B97230)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_7CDDA94AFEEE206B_OFFSET UNITYSDK_OFFSET(0x11B97350)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x11B95E90)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11B957A0)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x11B96AA0)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11B95720)
#define CLASS_1_4F3D403A38BF2189_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x11B96DD0)
#define CLASS_1_4F3D403A38BF2189__CTOR_OFFSET UNITYSDK_OFFSET(0x11B956D0)

inline static constexpr unsigned int Class_1_4F3D403A38BF2189_TypeDefinitionIndex = 65560;

class Class_1_4F3D403A38BF2189 : public ::System::Object
{
public:
	::RPG::Client::MonoEmoPlayableGraph* Field_1_4; // 0x10
	::RPGTools::Timeline::Emotion::EmoBakedPoseData* Field_1_0; // 0x18
	::Struct_2_2A9144AA173D64D2 Field_1_5; // 0x20
	::System::Single Field_1_2; // 0x38
	::UnityEngine::Playables::PlayableGraph Field_1_8; // 0x40
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_6; // 0x50
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_7; // 0x60
	::System::UInt32 Field_1_3; // 0x70
	::System::Single Field_1_1; // 0x74

	::System::Void _ctor(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_53E85B5693BAE592(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_53E85B5693BAE592_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_1_0C113CC8A31BC95C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_0C113CC8A31BC95C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_7B7BD71833BFC44B(::System::Double a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_7B7BD71833BFC44B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7CDDA94AFEEE206B(::UnityEngine::Animations::AnimationLayerMixerPlayable a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::UnityEngine::Playables::PlayableGraph a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable, ::UnityEngine::Animations::AnimationMixerPlayable, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_7CDDA94AFEEE206B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3D403A38BF2189_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}
};
