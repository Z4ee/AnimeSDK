#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_97F5E07A56E8A298_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16649490)
#define CLASS_2_97F5E07A56E8A298_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x166495B0)
#define CLASS_2_97F5E07A56E8A298__CTOR_OFFSET UNITYSDK_OFFSET(0x16649600)

inline static constexpr unsigned int Class_2_97F5E07A56E8A298_TypeDefinitionIndex = 72819;

class Class_2_97F5E07A56E8A298 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Text* EFDOLJLHGNG; // 0x18
	::UnityEngine::UI::Button* ODBHKKIJNEK; // 0x20
	::UnityEngine::UI::Button* FPNIIGOJKGG; // 0x28
	::UnityEngine::UI::Text* CEPGGFOJNCC; // 0x30
	::UnityEngine::UI::Text* APBADKAOJPH; // 0x38
	::UnityEngine::UI::Text* MIKHNILLLCK; // 0x40
	::UnityEngine::UI::Button* GJINCGEJDAG; // 0x48

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
