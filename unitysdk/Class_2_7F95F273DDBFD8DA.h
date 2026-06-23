#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Struct_2_6B3FEF18753DFC51.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_34A1FF6428AA4A6F_OFFSET UNITYSDK_OFFSET(0x13261E60)
#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x13261E50)
#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x13261F10)
#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x13261F20)
#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_97D56E8B195E8E78_OFFSET UNITYSDK_OFFSET(0x13261890)
#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x13261C70)
#define CLASS_2_7F95F273DDBFD8DA_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x13261CC0)
#define CLASS_2_7F95F273DDBFD8DA_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x132619F0)
#define CLASS_2_7F95F273DDBFD8DA__CTOR_OFFSET UNITYSDK_OFFSET(0x13261D30)

inline static constexpr unsigned int Class_2_7F95F273DDBFD8DA_TypeDefinitionIndex = 76247;

class Class_2_7F95F273DDBFD8DA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Struct_2_ACD0EF80A5330786 Field_2_4; // 0x10
	::Foundation::NativeVariable_1<::System::Int32> Field_2_2; // 0xA0
	::Foundation::NativeVariable_1<::System::Double> Field_2_1; // 0xB0
	::Struct_2_6B3FEF18753DFC51 Field_2_3; // 0xC0
	::Foundation::NativeVariable_1<::System::Double> Field_2_0; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::ScriptPlayable_1<::Class_2_7F95F273DDBFD8DA*> Method_2_97D56E8B195E8E78(::UnityEngine::Playables::PlayableGraph a1)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_7F95F273DDBFD8DA*>(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_97D56E8B195E8E78_OFFSET))(this, a1);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_B078C58C2CD24B5E_OFFSET))(this);
	}

	::Struct_2_ACD0EF80A5330786 Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_ACD0EF80A5330786(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930(::Struct_2_6B3FEF18753DFC51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6B3FEF18753DFC51))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}

	::System::Void Method_2_34A1FF6428AA4A6F(::Foundation::NativeVariable_1<::System::Double> a1, ::Foundation::NativeVariable_1<::System::Double> a2, ::Foundation::NativeVariable_1<::System::Int32> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::System::Double>, ::Foundation::NativeVariable_1<::System::Double>, ::Foundation::NativeVariable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_34A1FF6428AA4A6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_ACD0EF80A5330786 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_ACD0EF80A5330786))((::PBYTE)hIl2Cpp + CLASS_2_7F95F273DDBFD8DA_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}
};
