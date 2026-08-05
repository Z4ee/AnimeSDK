#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapSound; }
namespace System { class Action; }

#define CLASS_1_9903E79CA9B49844_CLASS_1_C99C0A979B1215F9_METHOD_1_D857ACD4BF90D874_OFFSET UNITYSDK_OFFSET(0x15486280)
#define CLASS_1_9903E79CA9B49844_CLASS_1_C99C0A979B1215F9__CTOR_OFFSET UNITYSDK_OFFSET(0x15486270)

inline static constexpr unsigned int Class_1_9903E79CA9B49844_Class_1_C99C0A979B1215F9_TypeDefinitionIndex = 60714;

class Class_1_9903E79CA9B49844_Class_1_C99C0A979B1215F9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_C99C0A979B1215F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D857ACD4BF90D874(::MoleMole::ConfigRichtapSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapSound*))((::PBYTE)hIl2Cpp + CLASS_1_9903E79CA9B49844_CLASS_1_C99C0A979B1215F9_METHOD_1_D857ACD4BF90D874_OFFSET))(this, a1);
	}
};
