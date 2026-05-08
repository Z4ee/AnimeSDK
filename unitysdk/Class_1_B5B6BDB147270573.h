#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
class UIControllerExtensionData;
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_B5B6BDB147270573_METHOD_1_8534F4ECB73B6B43_OFFSET UNITYSDK_OFFSET(0x127DC6C0)
#define CLASS_1_B5B6BDB147270573_METHOD_1_C49FA0051183BBB0_OFFSET UNITYSDK_OFFSET(0x127DC2C0)
#define CLASS_1_B5B6BDB147270573__CTOR_OFFSET UNITYSDK_OFFSET(0x127DC2B0)

inline static constexpr unsigned int Class_1_B5B6BDB147270573_TypeDefinitionIndex = 76149;

class Class_1_B5B6BDB147270573 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5B6BDB147270573__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C49FA0051183BBB0(::UnityEngine::UI::Extension::UILocalizationText* a1, ::System::Boolean a2, ::UIControllerExtensionData* a3)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UIControllerExtensionData*))((::PBYTE)hIl2Cpp + CLASS_1_B5B6BDB147270573_METHOD_1_C49FA0051183BBB0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8534F4ECB73B6B43(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B5B6BDB147270573_METHOD_1_8534F4ECB73B6B43_OFFSET))(a1, a2);
	}
};
