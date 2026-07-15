#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D272AF60A040331E;
class Class_1_D33B7D6901AE39E9;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace UnityEngine { class Transform; }

#define CLASS_1_12A87790910921BB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16863B00)
#define CLASS_1_12A87790910921BB_METHOD_1_1655B698CBDB2306_OFFSET UNITYSDK_OFFSET(0x16864740)
#define CLASS_1_12A87790910921BB_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x168641C0)
#define CLASS_1_12A87790910921BB_METHOD_1_2BBC367F6C8B0002_OFFSET UNITYSDK_OFFSET(0x168654E0)
#define CLASS_1_12A87790910921BB_METHOD_1_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0x16864A20)
#define CLASS_1_12A87790910921BB_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x16863C60)
#define CLASS_1_12A87790910921BB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16864700)
#define CLASS_1_12A87790910921BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16866480)
#define CLASS_1_12A87790910921BB__CTOR_OFFSET UNITYSDK_OFFSET(0x16863AC0)

inline static constexpr unsigned int Class_1_12A87790910921BB_TypeDefinitionIndex = 73322;

class Class_1_12A87790910921BB : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A87790910921BB_TypeDefinitionIndex)->GetStaticField(0x3550);
	}
	::Class_1_D272AF60A040331E* Field_1_1; // 0x10
	::Class_3_F4528A5C0F861AF2* Field_1_2; // 0x18
	::Class_2_80F8710F847F1248* Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x34
	::UnityEngine::Vector2 Field_1_6; // 0x38
	::UnityEngine::Ray Field_1_7; // 0x40

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_1655B698CBDB2306()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_1655B698CBDB2306_OFFSET))(this);
	}

	::System::Void Method_1_A21BBA85D4EF7B41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_A21BBA85D4EF7B41_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean Method_1_2BBC367F6C8B0002(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_2BBC367F6C8B0002_OFFSET))(this, a1);
	}
};
