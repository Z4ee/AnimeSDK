#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_97F5E07A56E8A298_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16724B00)
#define CLASS_2_97F5E07A56E8A298_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16724C20)
#define CLASS_2_97F5E07A56E8A298__CTOR_OFFSET UNITYSDK_OFFSET(0x16724C70)

inline static constexpr unsigned int Class_2_97F5E07A56E8A298_TypeDefinitionIndex = 69508;

class Class_2_97F5E07A56E8A298 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Button* Field_2_0; // 0x18
	::UnityEngine::UI::Button* Field_2_1; // 0x20
	::UnityEngine::UI::Text* Field_2_2; // 0x28
	::UnityEngine::UI::Text* Field_2_3; // 0x30
	::UnityEngine::UI::Text* Field_2_4; // 0x38
	::UnityEngine::UI::Button* Field_2_5; // 0x40
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
