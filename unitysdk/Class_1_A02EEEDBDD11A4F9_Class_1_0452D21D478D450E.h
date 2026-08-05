#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A02EEEDBDD11A4F9;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_1_A02EEEDBDD11A4F9_CLASS_1_0452D21D478D450E_METHOD_1_5A9C738089EDDE9D_OFFSET UNITYSDK_OFFSET(0x12EDCA70)
#define CLASS_1_A02EEEDBDD11A4F9_CLASS_1_0452D21D478D450E__CTOR_OFFSET UNITYSDK_OFFSET(0x12EDCA60)

inline static constexpr unsigned int Class_1_A02EEEDBDD11A4F9_Class_1_0452D21D478D450E_TypeDefinitionIndex = 49554;

class Class_1_A02EEEDBDD11A4F9_Class_1_0452D21D478D450E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_1_A02EEEDBDD11A4F9* Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_CLASS_1_0452D21D478D450E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A9C738089EDDE9D(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_CLASS_1_0452D21D478D450E_METHOD_1_5A9C738089EDDE9D_OFFSET))(this, a1);
	}
};
