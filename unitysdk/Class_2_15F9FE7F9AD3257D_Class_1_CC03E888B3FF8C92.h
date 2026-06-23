#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_15F9FE7F9AD3257D;
class Class_2_208CC9941471731A_115;
namespace MoleMole::Config { class ConfigCameraStory; }

#define CLASS_2_15F9FE7F9AD3257D_CLASS_1_CC03E888B3FF8C92__CTOR_OFFSET UNITYSDK_OFFSET(0x15965B10)

inline static constexpr unsigned int Class_2_15F9FE7F9AD3257D_Class_1_CC03E888B3FF8C92_TypeDefinitionIndex = 45525;

class Class_2_15F9FE7F9AD3257D_Class_1_CC03E888B3FF8C92 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_115* Field_1_0; // 0x10
	::Class_2_208CC9941471731A_115* Field_1_2; // 0x18
	::Class_2_15F9FE7F9AD3257D* Field_1_4; // 0x20
	::MoleMole::Config::ConfigCameraStory* Field_1_3; // 0x28
	::System::Single Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F9FE7F9AD3257D_CLASS_1_CC03E888B3FF8C92__CTOR_OFFSET))(this);
	}
};
