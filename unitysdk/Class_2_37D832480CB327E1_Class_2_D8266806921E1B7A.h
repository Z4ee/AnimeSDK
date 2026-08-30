#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_37D832480CB327E1_CLASS_2_D8266806921E1B7A_CLEAR_OFFSET UNITYSDK_OFFSET(0x18833140)
#define CLASS_2_37D832480CB327E1_CLASS_2_D8266806921E1B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x18833190)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A_TypeDefinitionIndex = 57563;

class Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A : public ::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6
{
public:
	::UnityEngine::Transform* KCAELMDGNNH; // 0x78
	::UnityEngine::Transform* EGKELMHHEPH; // 0x80
	::UnityEngine::Transform* NCJHLGEHGLC; // 0x88
	::System::Single EIBGEGPABFK; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_2_D8266806921E1B7A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_2_D8266806921E1B7A_CLEAR_OFFSET))(this);
	}
};
