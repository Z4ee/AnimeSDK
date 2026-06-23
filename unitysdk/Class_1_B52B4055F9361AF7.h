#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_B52B4055F9361AF7_METHOD_1_7B2DE2F61107FF17_OFFSET UNITYSDK_OFFSET(0x128445A0)
#define CLASS_1_B52B4055F9361AF7_METHOD_1_A2D312B73D6CC7C7_OFFSET UNITYSDK_OFFSET(0x128443A0)

inline static constexpr unsigned int Class_1_B52B4055F9361AF7_TypeDefinitionIndex = 70538;

class Class_1_B52B4055F9361AF7 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void Method_1_A2D312B73D6CC7C7(::UnityEngine::UI::Extension::UILocalizationText* a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B52B4055F9361AF7_METHOD_1_A2D312B73D6CC7C7_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Color Method_1_7B2DE2F61107FF17(::System::UInt32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B52B4055F9361AF7_METHOD_1_7B2DE2F61107FF17_OFFSET))(a1);
	}
};
