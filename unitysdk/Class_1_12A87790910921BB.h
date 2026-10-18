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

#define CLASS_1_12A87790910921BB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15511F40)
#define CLASS_1_12A87790910921BB_METHOD_1_1655B698CBDB2306_OFFSET UNITYSDK_OFFSET(0x15512A40)
#define CLASS_1_12A87790910921BB_METHOD_1_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x155120A0)
#define CLASS_1_12A87790910921BB_METHOD_1_2BBC367F6C8B0002_OFFSET UNITYSDK_OFFSET(0x155136A0)
#define CLASS_1_12A87790910921BB_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x15512560)
#define CLASS_1_12A87790910921BB_METHOD_1_F0E5333B48B6C5FF_OFFSET UNITYSDK_OFFSET(0x15512D20)
#define CLASS_1_12A87790910921BB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15512A00)
#define CLASS_1_12A87790910921BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15514640)
#define CLASS_1_12A87790910921BB__CTOR_OFFSET UNITYSDK_OFFSET(0x15511F00)

inline static constexpr unsigned int Class_1_12A87790910921BB_TypeDefinitionIndex = 77273;

class Class_1_12A87790910921BB : public ::System::Object
{
public:
	static ::System::Single* StaticGet_GAPFHIBIGBD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_12A87790910921BB_TypeDefinitionIndex)->GetStaticField(0x11020);
	}
	::Class_3_F4528A5C0F861AF2* PDENFEFCAGN; // 0x10
	::Class_1_D272AF60A040331E* EEOKAMAGEKP; // 0x18
	::Class_2_80F8710F847F1248* EEFMDEHLLFI; // 0x20
	::UnityEngine::Ray PNGHABAEDBC; // 0x28
	::UnityEngine::Vector2 MNOKAIAOCPH; // 0x40
	::UnityEngine::Vector3 ODJNEAOMGIL; // 0x48
	::System::Single PJJLEJDPNHI; // 0x54

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

	::System::Void Method_1_F0E5333B48B6C5FF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_F0E5333B48B6C5FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Boolean Method_1_2BBC367F6C8B0002(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_12A87790910921BB_METHOD_1_2BBC367F6C8B0002_OFFSET))(this, a1);
	}
};
