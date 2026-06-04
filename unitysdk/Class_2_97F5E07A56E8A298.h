#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_97F5E07A56E8A298_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143096B0)
#define CLASS_2_97F5E07A56E8A298_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x143097D0)
#define CLASS_2_97F5E07A56E8A298__CTOR_OFFSET UNITYSDK_OFFSET(0x14309820)

inline static constexpr unsigned int Class_2_97F5E07A56E8A298_TypeDefinitionIndex = 68022;

class Class_2_97F5E07A56E8A298 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Button* Field_2_0; // 0x18
	::UnityEngine::UI::Button* Field_2_1; // 0x20
	::UnityEngine::UI::Button* Field_2_2; // 0x28
	::UnityEngine::UI::Text* Field_2_3; // 0x30
	::UnityEngine::UI::Text* Field_2_4; // 0x38
	::UnityEngine::UI::Text* Field_2_5; // 0x40
	::UnityEngine::UI::Text* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97F5E07A56E8A298__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97F5E07A56E8A298_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97F5E07A56E8A298_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
