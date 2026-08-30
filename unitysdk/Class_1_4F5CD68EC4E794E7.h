#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_05B2DA0FB841F389;

#define CLASS_1_4F5CD68EC4E794E7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A602DC0)
#define CLASS_1_4F5CD68EC4E794E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A602E40)

inline static constexpr unsigned int Class_1_4F5CD68EC4E794E7_TypeDefinitionIndex = 41887;

class Class_1_4F5CD68EC4E794E7 : public ::System::Object
{
public:
	::Class_1_05B2DA0FB841F389* NOHENFFNEIC; // 0x10
	::System::UInt32 CEIFACBCNKE; // 0x18
	::System::Boolean LNBPNHNJGKG; // 0x1C
	::UnityEngine::Vector3 MJOLHEDKMGO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CD68EC4E794E7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CD68EC4E794E7_CLEAR_OFFSET))(this);
	}
};
