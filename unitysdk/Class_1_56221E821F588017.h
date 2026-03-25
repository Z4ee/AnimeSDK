#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_56221E821F588017__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6DAF0)

inline static constexpr unsigned int Class_1_56221E821F588017_TypeDefinitionIndex = 46232;

class Class_1_56221E821F588017 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56221E821F588017__CTOR_OFFSET))(this);
	}
};
