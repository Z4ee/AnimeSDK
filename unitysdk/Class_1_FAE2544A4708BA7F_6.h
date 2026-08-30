#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_FAE2544A4708BA7F_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185CF130)
#define CLASS_1_FAE2544A4708BA7F_6__CTOR_OFFSET UNITYSDK_OFFSET(0x185CF170)

inline static constexpr unsigned int Class_1_FAE2544A4708BA7F_6_TypeDefinitionIndex = 57495;

class Class_1_FAE2544A4708BA7F_6 : public ::System::Object
{
public:
	::UnityEngine::Vector3 HIPMLABCLGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAE2544A4708BA7F_6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAE2544A4708BA7F_6_DISPOSE_OFFSET))(this);
	}
};
