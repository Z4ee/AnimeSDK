#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_9F2658E9780F8D2E;
class Class_3_757A5862D4BBEE41;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }

#define CLASS_1_7624D9FDB0907477_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142AD7E0)
#define CLASS_1_7624D9FDB0907477_METHOD_1_22017E6158B8F5DB_OFFSET UNITYSDK_OFFSET(0x142AD860)
#define CLASS_1_7624D9FDB0907477_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x142AD930)
#define CLASS_1_7624D9FDB0907477__CTOR_OFFSET UNITYSDK_OFFSET(0x142AD6E0)

inline static constexpr unsigned int Class_1_7624D9FDB0907477_TypeDefinitionIndex = 57662;

class Class_1_7624D9FDB0907477 : public ::System::Object
{
public:
	::Class_3_757A5862D4BBEE41* Field_1_2; // 0x10
	::Class_1_9F2658E9780F8D2E* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* a2, ::Foundation::Variable_1<::UnityEngine::Quaternion> a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig*, ::Foundation::Variable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_7624D9FDB0907477__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7624D9FDB0907477_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_22017E6158B8F5DB(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_7624D9FDB0907477_METHOD_1_22017E6158B8F5DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7624D9FDB0907477_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
