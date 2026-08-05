#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_B7243C9C64DCB5EF_Class_0_16E7307DCC43CB2C_60;
namespace System { class Object; }

#define CLASS_2_B7243C9C64DCB5EF_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x18B7AC50)
#define CLASS_2_B7243C9C64DCB5EF_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18B7AC40)
#define CLASS_2_B7243C9C64DCB5EF_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18B7AC60)
#define CLASS_2_B7243C9C64DCB5EF_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x18B7AB40)
#define CLASS_2_B7243C9C64DCB5EF_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x18B7ABD0)
#define CLASS_2_B7243C9C64DCB5EF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18B7A5E0)
#define CLASS_2_B7243C9C64DCB5EF__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7AC30)

inline static constexpr unsigned int Class_2_B7243C9C64DCB5EF_TypeDefinitionIndex = 71798;

class Class_2_B7243C9C64DCB5EF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_B7243C9C64DCB5EF_Class_0_16E7307DCC43CB2C_60* Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
