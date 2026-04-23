#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_867B6CE75953535A;
class Class_1_D272AF60A040331E;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace UnityEngine { class Transform; }

#define CLASS_1_12A87790910921BB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9929BA0)
#define CLASS_1_12A87790910921BB_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x992A270)
#define CLASS_1_12A87790910921BB_METHOD_1_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0x992AAC0)
#define CLASS_1_12A87790910921BB_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x9929D00)
#define CLASS_1_12A87790910921BB_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x992A860)
#define CLASS_1_12A87790910921BB_METHOD_1_E5EB013FE05D7A57_OFFSET UNITYSDK_OFFSET(0x992B590)
#define CLASS_1_12A87790910921BB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x992A820)
#define CLASS_1_12A87790910921BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x992C680)
#define CLASS_1_12A87790910921BB__CTOR_OFFSET UNITYSDK_OFFSET(0x9929B60)

inline static constexpr unsigned int Class_1_12A87790910921BB_TypeDefinitionIndex = 70975;

class Class_1_12A87790910921BB : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A87790910921BB_TypeDefinitionIndex)->GetStaticField(0x6D20);
	}
	::Class_1_D272AF60A040331E* Field_1_3; // 0x10
	::Class_2_43D1AA62A6D00FFF* Field_1_6; // 0x18
	::Class_3_F4528A5C0F861AF2* Field_1_7; // 0x20
	::System::Single Field_1_5; // 0x28
	::UnityEngine::Ray Field_1_1; // 0x2C
	::UnityEngine::Vector3 Field_1_0; // 0x44
	::UnityEngine::Vector2 Field_1_4; // 0x50

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_A21BBA85D4EF7B41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_A21BBA85D4EF7B41_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_1_E5EB013FE05D7A57(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_E5EB013FE05D7A57_OFFSET))(this, a1);
	}
};
