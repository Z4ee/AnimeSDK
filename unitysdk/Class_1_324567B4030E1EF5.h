#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B6045334FA181376;
namespace UnityEngine { class Transform; }

#define CLASS_1_324567B4030E1EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C505840)

inline static constexpr unsigned int Class_1_324567B4030E1EF5_TypeDefinitionIndex = 41328;

class Class_1_324567B4030E1EF5 : public ::System::Object
{
public:
	::Class_1_B6045334FA181376* NDJINIMPHFH; // 0x10
	::UnityEngine::Transform* DICDJJOJKGF; // 0x18
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x20
	::System::Single HBAMPJPOOLM; // 0x2C
	::System::Single BJOCBPFKJDP; // 0x30
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x34
	::System::Single JFAGECNFHJL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_324567B4030E1EF5__CTOR_OFFSET))(this);
	}
};
