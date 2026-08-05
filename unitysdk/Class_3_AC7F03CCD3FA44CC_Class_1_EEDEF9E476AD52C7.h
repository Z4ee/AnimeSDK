#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AC7F03CCD3FA44CC;
namespace MoleMole { class MultipleVideoPlayerManager; }

#define CLASS_3_AC7F03CCD3FA44CC_CLASS_1_EEDEF9E476AD52C7_METHOD_1_1B46241F8697B90A_OFFSET UNITYSDK_OFFSET(0x1BC3A830)
#define CLASS_3_AC7F03CCD3FA44CC_CLASS_1_EEDEF9E476AD52C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3A820)

inline static constexpr unsigned int Class_3_AC7F03CCD3FA44CC_Class_1_EEDEF9E476AD52C7_TypeDefinitionIndex = 82450;

class Class_3_AC7F03CCD3FA44CC_Class_1_EEDEF9E476AD52C7 : public ::System::Object
{
public:
	::Class_3_AC7F03CCD3FA44CC* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7F03CCD3FA44CC_CLASS_1_EEDEF9E476AD52C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B46241F8697B90A(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_3_AC7F03CCD3FA44CC_CLASS_1_EEDEF9E476AD52C7_METHOD_1_1B46241F8697B90A_OFFSET))(this, a1);
	}
};
