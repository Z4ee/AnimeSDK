#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_38083B062354CE6A;
class Class_3_757A5862D4BBEE41;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFrontCameraControlMotionConfig; }

#define CLASS_1_C7BBB9D25227DB36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B595D80)
#define CLASS_1_C7BBB9D25227DB36_METHOD_1_22017E6158B8F5DB_OFFSET UNITYSDK_OFFSET(0x1B595E40)
#define CLASS_1_C7BBB9D25227DB36_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B595FC0)
#define CLASS_1_C7BBB9D25227DB36_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1B595F10)
#define CLASS_1_C7BBB9D25227DB36_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B595E00)
#define CLASS_1_C7BBB9D25227DB36__CTOR_OFFSET UNITYSDK_OFFSET(0x1B595CC0)

inline static constexpr unsigned int Class_1_C7BBB9D25227DB36_TypeDefinitionIndex = 44786;

class Class_1_C7BBB9D25227DB36 : public ::System::Object
{
public:
	::Class_3_757A5862D4BBEE41* Field_1_2; // 0x10
	::Class_1_38083B062354CE6A* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Photo::ScopedFrontCameraControlMotionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFrontCameraControlMotionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C7BBB9D25227DB36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7BBB9D25227DB36_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7BBB9D25227DB36_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_22017E6158B8F5DB(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C7BBB9D25227DB36_METHOD_1_22017E6158B8F5DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7BBB9D25227DB36_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7BBB9D25227DB36_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
