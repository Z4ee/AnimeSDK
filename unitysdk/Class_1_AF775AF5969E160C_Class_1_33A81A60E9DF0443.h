#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_AF775AF5969E160C_CLASS_1_33A81A60E9DF0443_METHOD_1_9745F0E02F606616_OFFSET UNITYSDK_OFFSET(0x198FBFC0)
#define CLASS_1_AF775AF5969E160C_CLASS_1_33A81A60E9DF0443__CTOR_OFFSET UNITYSDK_OFFSET(0x198FBFB0)

inline static constexpr unsigned int Class_1_AF775AF5969E160C_Class_1_33A81A60E9DF0443_TypeDefinitionIndex = 41754;

class Class_1_AF775AF5969E160C_Class_1_33A81A60E9DF0443 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF775AF5969E160C_CLASS_1_33A81A60E9DF0443__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9745F0E02F606616(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AF775AF5969E160C_CLASS_1_33A81A60E9DF0443_METHOD_1_9745F0E02F606616_OFFSET))(this, a1);
	}
};
