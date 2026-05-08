#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_08A4B11959FFF171_CLASS_1_0661529CD88B650B_METHOD_1_8CA200EBF017B8D9_OFFSET UNITYSDK_OFFSET(0x127A81C0)
#define CLASS_1_08A4B11959FFF171_CLASS_1_0661529CD88B650B__CTOR_OFFSET UNITYSDK_OFFSET(0x127A81B0)

inline static constexpr unsigned int Class_1_08A4B11959FFF171_Class_1_0661529CD88B650B_TypeDefinitionIndex = 58630;

class Class_1_08A4B11959FFF171_Class_1_0661529CD88B650B : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_CLASS_1_0661529CD88B650B__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_8CA200EBF017B8D9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_CLASS_1_0661529CD88B650B_METHOD_1_8CA200EBF017B8D9_OFFSET))(this, a1);
	}
};
