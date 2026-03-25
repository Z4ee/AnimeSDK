#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_6DE8726ADEF173A7_6;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_933E3CF9EE19B81F_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD7B4530)
#define CLASS_1_933E3CF9EE19B81F_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD7B44F0)
#define CLASS_1_933E3CF9EE19B81F_1_METHOD_1_7AAF4659D71CE76F_OFFSET UNITYSDK_OFFSET(0xD7B4EA0)
#define CLASS_1_933E3CF9EE19B81F_1_METHOD_1_8FAF839E0D712B9B_OFFSET UNITYSDK_OFFSET(0xD7B4830)
#define CLASS_1_933E3CF9EE19B81F_1_METHOD_1_B3AE38C23FC236A8_OFFSET UNITYSDK_OFFSET(0xD7B5900)
#define CLASS_1_933E3CF9EE19B81F_1_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD7B58C0)
#define CLASS_1_933E3CF9EE19B81F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B4450)

inline static constexpr unsigned int Class_1_933E3CF9EE19B81F_1_TypeDefinitionIndex = 62828;

class Class_1_933E3CF9EE19B81F_1 : public ::System::Object
{
public:
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_8FAF839E0D712B9B(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_METHOD_1_8FAF839E0D712B9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AAF4659D71CE76F(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_METHOD_1_7AAF4659D71CE76F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_B3AE38C23FC236A8(::Class_1_6DE8726ADEF173A7_6* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_6*))((::PBYTE)hIl2Cpp + CLASS_1_933E3CF9EE19B81F_1_METHOD_1_B3AE38C23FC236A8_OFFSET))(this, a1);
	}
};
