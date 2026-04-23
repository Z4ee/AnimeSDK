#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C3183153408A386B.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"

class Class_2_863F3C76158B4EC4;
namespace RPG::GameCore { class FreeStyleController; }
namespace System { class String; }

#define CLASS_2_863F3C76158B4EC4_CLASS_2_ADC085F8D9CE479F_METHOD_2_1CEC194667101EB6_OFFSET UNITYSDK_OFFSET(0x9E41FE0)
#define CLASS_2_863F3C76158B4EC4_CLASS_2_ADC085F8D9CE479F_METHOD_2_28E7D161A90CB0C5_OFFSET UNITYSDK_OFFSET(0x9E42070)
#define CLASS_2_863F3C76158B4EC4_CLASS_2_ADC085F8D9CE479F__CTOR_OFFSET UNITYSDK_OFFSET(0x9E40540)

inline static constexpr unsigned int Class_2_863F3C76158B4EC4_Class_2_ADC085F8D9CE479F_TypeDefinitionIndex = 52796;

class Class_2_863F3C76158B4EC4_Class_2_ADC085F8D9CE479F : public ::Class_1_C3183153408A386B
{
public:
	::System::String* Field_2_0; // 0x10
	::Struct_2_D3B84DD3734B83D6 Field_2_1; // 0x18

	::System::Void _ctor(::Class_2_863F3C76158B4EC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_863F3C76158B4EC4*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_CLASS_2_ADC085F8D9CE479F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CEC194667101EB6(::RPG::GameCore::FreeStyleController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_CLASS_2_ADC085F8D9CE479F_METHOD_2_1CEC194667101EB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_28E7D161A90CB0C5(::RPG::GameCore::FreeStyleController* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_CLASS_2_ADC085F8D9CE479F_METHOD_2_28E7D161A90CB0C5_OFFSET))(this, P0);
	}
};
