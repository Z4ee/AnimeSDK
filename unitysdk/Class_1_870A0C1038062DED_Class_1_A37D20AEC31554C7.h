#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_870A0C1038062DED_CLASS_1_A37D20AEC31554C7_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x1491AAA0)
#define CLASS_1_870A0C1038062DED_CLASS_1_A37D20AEC31554C7_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1491AAB0)
#define CLASS_1_870A0C1038062DED_CLASS_1_A37D20AEC31554C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1491AA90)

inline static constexpr unsigned int Class_1_870A0C1038062DED_Class_1_A37D20AEC31554C7_TypeDefinitionIndex = 65115;

class Class_1_870A0C1038062DED_Class_1_A37D20AEC31554C7 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_CLASS_1_A37D20AEC31554C7__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_CLASS_1_A37D20AEC31554C7_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870A0C1038062DED_CLASS_1_A37D20AEC31554C7_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
