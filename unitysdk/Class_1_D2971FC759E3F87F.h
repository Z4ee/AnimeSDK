#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define CLASS_1_D2971FC759E3F87F_METHOD_1_F14BD637F2D057CE_OFFSET UNITYSDK_OFFSET(0x97B44A0)
#define CLASS_1_D2971FC759E3F87F__CTOR_OFFSET UNITYSDK_OFFSET(0x97B4520)

inline static constexpr unsigned int Class_1_D2971FC759E3F87F_TypeDefinitionIndex = 67882;

class Class_1_D2971FC759E3F87F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2971FC759E3F87F__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_F14BD637F2D057CE(::UnityEngine::Matrix4x4 a1, ::System::UInt32 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Matrix4x4, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2971FC759E3F87F_METHOD_1_F14BD637F2D057CE_OFFSET))(a1, a2);
	}
};
