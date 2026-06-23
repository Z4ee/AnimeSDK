#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_386D67002D4E0FE5_Struct_2_FFFE9480B3B5BA7A_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Timeline { class FilmGrainBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define CLASS_4_386D67002D4E0FE5_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD464520)
#define CLASS_4_386D67002D4E0FE5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xD464500)
#define CLASS_4_386D67002D4E0FE5_METHOD_4_AEE2E9B5D7D5C55B_OFFSET UNITYSDK_OFFSET(0xD463660)
#define CLASS_4_386D67002D4E0FE5_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD4634B0)
#define CLASS_4_386D67002D4E0FE5_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xD464510)
#define CLASS_4_386D67002D4E0FE5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD463590)
#define CLASS_4_386D67002D4E0FE5_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD463D50)
#define CLASS_4_386D67002D4E0FE5__CTOR_OFFSET UNITYSDK_OFFSET(0xD4644E0)

inline static constexpr unsigned int Class_4_386D67002D4E0FE5_TypeDefinitionIndex = 71684;

class Class_4_386D67002D4E0FE5 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::FilmGrain*, ::MoleMole::Timeline::FilmGrainBehaviour*>
{
public:
	::Class_4_386D67002D4E0FE5_Struct_2_FFFE9480B3B5BA7A_1 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_8; // 0x68
	::System::Single Field_4_6; // 0x70
	::System::Single Field_4_4; // 0x74
	::System::Boolean Field_4_7; // 0x78
	::System::Boolean Field_4_1; // 0x79
	::UnityEngine::Rendering::Universal::FilmGrainLookup Field_4_2; // 0x7C
	::System::Boolean Field_4_10; // 0x80
	::System::Boolean Field_4_5; // 0x81
	::System::Boolean Field_4_9; // 0x82
	::System::Boolean Field_4_3; // 0x83

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_AEE2E9B5D7D5C55B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_386D67002D4E0FE5_METHOD_4_AEE2E9B5D7D5C55B_OFFSET))(this, a1);
	}
};
