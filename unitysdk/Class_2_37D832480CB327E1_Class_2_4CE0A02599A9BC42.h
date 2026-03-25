#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_37D832480CB327E1_CLASS_2_4CE0A02599A9BC42_CLEAR_OFFSET UNITYSDK_OFFSET(0x11550E50)
#define CLASS_2_37D832480CB327E1_CLASS_2_4CE0A02599A9BC42__CTOR_OFFSET UNITYSDK_OFFSET(0x11550EA0)
#define CLASS_2_37D832480CB327E1_CLASS_2_4CE0A02599A9BC42___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11550EC0)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42_TypeDefinitionIndex = 46248;

class Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42 : public ::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80
	::UnityEngine::Transform* Field_2_1; // 0x88
	::System::Single Field_2_0; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_2_4CE0A02599A9BC42__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_2_4CE0A02599A9BC42_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_2_4CE0A02599A9BC42___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
