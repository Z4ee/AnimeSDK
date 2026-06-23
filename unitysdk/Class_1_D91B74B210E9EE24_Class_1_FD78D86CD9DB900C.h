#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { class Action; }

#define CLASS_1_D91B74B210E9EE24_CLASS_1_FD78D86CD9DB900C_METHOD_1_512C225720DBD109_OFFSET UNITYSDK_OFFSET(0xFBD44E0)
#define CLASS_1_D91B74B210E9EE24_CLASS_1_FD78D86CD9DB900C__CTOR_OFFSET UNITYSDK_OFFSET(0xFBD44D0)

inline static constexpr unsigned int Class_1_D91B74B210E9EE24_Class_1_FD78D86CD9DB900C_TypeDefinitionIndex = 73591;

class Class_1_D91B74B210E9EE24_Class_1_FD78D86CD9DB900C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_CLASS_1_FD78D86CD9DB900C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_512C225720DBD109(::DynamicBoneConfigMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DynamicBoneConfigMap*))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_CLASS_1_FD78D86CD9DB900C_METHOD_1_512C225720DBD109_OFFSET))(this, a1);
	}
};
