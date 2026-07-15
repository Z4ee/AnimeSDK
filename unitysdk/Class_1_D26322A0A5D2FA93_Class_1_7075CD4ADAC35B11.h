#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F0C440)
#define CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0C4A0)

inline static constexpr unsigned int Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11_TypeDefinitionIndex = 58042;

class Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_6; // 0x21
	::System::Single Field_1_7; // 0x24
	::System::Single Field_1_8; // 0x28
	::System::Single Field_1_9; // 0x2C
	::System::Single Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_CLASS_1_7075CD4ADAC35B11_CLEAR_OFFSET))(this);
	}
};
