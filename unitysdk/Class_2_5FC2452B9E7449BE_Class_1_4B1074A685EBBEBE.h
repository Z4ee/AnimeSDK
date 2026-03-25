#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class DamageTextStyle;
namespace System { class String; }

#define CLASS_2_5FC2452B9E7449BE_CLASS_1_4B1074A685EBBEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x10A35D50)

inline static constexpr unsigned int Class_2_5FC2452B9E7449BE_Class_1_4B1074A685EBBEBE_TypeDefinitionIndex = 59283;

class Class_2_5FC2452B9E7449BE_Class_1_4B1074A685EBBEBE : public ::System::Object
{
public:
	::DamageTextStyle* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::RPG::Client::TextID Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FC2452B9E7449BE_CLASS_1_4B1074A685EBBEBE__CTOR_OFFSET))(this);
	}
};
