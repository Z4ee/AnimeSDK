#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_84B48FEF5A984E41_Settings;

#define CLASS_1_84B48FEF5A984E41_METHOD_1_0196F1CEB7DA405C_OFFSET UNITYSDK_OFFSET(0x1F62E840)
#define CLASS_1_84B48FEF5A984E41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1F62E820)
#define CLASS_1_84B48FEF5A984E41__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62E870)

inline static constexpr unsigned int Class_1_84B48FEF5A984E41_TypeDefinitionIndex = 8282;

class Class_1_84B48FEF5A984E41 : public ::System::Object
{
public:
	::Class_1_84B48FEF5A984E41_Settings* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84B48FEF5A984E41__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84B48FEF5A984E41_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0196F1CEB7DA405C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84B48FEF5A984E41_METHOD_1_0196F1CEB7DA405C_OFFSET))(this);
	}
};
