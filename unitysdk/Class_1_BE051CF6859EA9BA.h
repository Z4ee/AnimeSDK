#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_BE051CF6859EA9BA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C541AD0)
#define CLASS_1_BE051CF6859EA9BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C541B50)

inline static constexpr unsigned int Class_1_BE051CF6859EA9BA_TypeDefinitionIndex = 41305;

class Class_1_BE051CF6859EA9BA : public ::System::Object
{
public:
	::UnityEngine::Transform* CIMHBBGGADG; // 0x10
	::UnityEngine::Vector3 AIBGEDIGEOO; // 0x18
	::System::UInt32 LFIEOIKFGNG; // 0x24
	::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
	::System::Single FNEAALBNDHK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE051CF6859EA9BA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE051CF6859EA9BA_CLEAR_OFFSET))(this);
	}
};
