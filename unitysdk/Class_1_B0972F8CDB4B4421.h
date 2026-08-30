#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace System { class String; }

#define CLASS_1_B0972F8CDB4B4421_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4F38F0)
#define CLASS_1_B0972F8CDB4B4421_METHOD_1_118383325EBD72C6_OFFSET UNITYSDK_OFFSET(0xB4F3940)
#define CLASS_1_B0972F8CDB4B4421_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB4F3FA0)
#define CLASS_1_B0972F8CDB4B4421_METHOD_1_62B19F3EB4E3663D_OFFSET UNITYSDK_OFFSET(0xB4F4040)
#define CLASS_1_B0972F8CDB4B4421_METHOD_1_6CE67FCF0FE483F2_OFFSET UNITYSDK_OFFSET(0xB4F4440)
#define CLASS_1_B0972F8CDB4B4421_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xB4F3FF0)
#define CLASS_1_B0972F8CDB4B4421__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F38E0)

inline static constexpr unsigned int Class_1_B0972F8CDB4B4421_TypeDefinitionIndex = 77289;

class Class_1_B0972F8CDB4B4421 : public ::System::Object
{
public:
	// static const ::System::Single CICEFMOJOHF; // 0x0
	// static const ::System::String* BMAFGHBOBJA; // 0x0
	::Class_2_5436AF4270279182* PBEDAHDEDGH; // 0x10
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x18
	::System::Boolean BLHCHELDEHL; // 0x20

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_118383325EBD72C6(::UnityEngine::Vector3 a1, ::Class_2_5436AF4270279182*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_2_5436AF4270279182*&))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421_METHOD_1_118383325EBD72C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_62B19F3EB4E3663D(::UnityEngine::Vector3 a1, ::Class_2_5436AF4270279182*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_2_5436AF4270279182*&))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421_METHOD_1_62B19F3EB4E3663D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6CE67FCF0FE483F2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0972F8CDB4B4421_METHOD_1_6CE67FCF0FE483F2_OFFSET))(this, a1, a2, a3);
	}
};
