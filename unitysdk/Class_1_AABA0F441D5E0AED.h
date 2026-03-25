#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"

class Class_1_ECBCF86CDE61CBCA;
namespace System { class String; }

#define CLASS_1_AABA0F441D5E0AED__CTOR_OFFSET UNITYSDK_OFFSET(0xF367990)

inline static constexpr unsigned int Class_1_AABA0F441D5E0AED_TypeDefinitionIndex = 50490;

class Class_1_AABA0F441D5E0AED : public ::System::Object
{
public:
	::Class_1_ECBCF86CDE61CBCA* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::RPG::GameCore::StageRegionVisualState Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABA0F441D5E0AED__CTOR_OFFSET))(this);
	}
};
