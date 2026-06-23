#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_3_D73616F4857686E0_CLASS_1_732699D732CE623C_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x1B59A640)
#define CLASS_3_D73616F4857686E0_CLASS_1_732699D732CE623C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59A630)

inline static constexpr unsigned int Class_3_D73616F4857686E0_Class_1_732699D732CE623C_TypeDefinitionIndex = 71618;

class Class_3_D73616F4857686E0_Class_1_732699D732CE623C : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x10
	::System::String* Field_1_5; // 0x40
	::System::String* Field_1_1; // 0x48
	::MoleMole::Config::ShaderCustomType Field_1_6; // 0x50
	::System::Boolean Field_1_2; // 0x54
	::System::Boolean Field_1_3; // 0x55
	::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType Field_1_0; // 0x58
	::MoleMole::Config::ScreenEffectType Field_1_4; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D73616F4857686E0_CLASS_1_732699D732CE623C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D73616F4857686E0_CLASS_1_732699D732CE623C_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}
};
