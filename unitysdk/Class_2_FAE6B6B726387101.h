#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1027;
class Class_1_1EDFFB645AFD9A3E;
class Class_1_2A97E60807F449E7;
class Class_1_80AF8BF5A186D7B9;
class Class_1_945ACFB1FEBC7A2C_23;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FAE6B6B726387101_METHOD_2_327B657776861CA3_OFFSET UNITYSDK_OFFSET(0x161526C0)
#define CLASS_2_FAE6B6B726387101_METHOD_2_330762CC819CBCA4_OFFSET UNITYSDK_OFFSET(0x161529D0)
#define CLASS_2_FAE6B6B726387101_METHOD_2_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x16152AD0)
#define CLASS_2_FAE6B6B726387101_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16152820)
#define CLASS_2_FAE6B6B726387101_METHOD_2_7E7A2F143AE85529_OFFSET UNITYSDK_OFFSET(0x16152910)
#define CLASS_2_FAE6B6B726387101_METHOD_2_E31B4948BF7B7146_OFFSET UNITYSDK_OFFSET(0x16152880)
#define CLASS_2_FAE6B6B726387101__CTOR_OFFSET UNITYSDK_OFFSET(0x16152B30)
#define CLASS_2_FAE6B6B726387101__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16152760)

inline static constexpr unsigned int Class_2_FAE6B6B726387101_TypeDefinitionIndex = 68026;

class Class_2_FAE6B6B726387101 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_1_1EDFFB645AFD9A3E* Field_2_0; // 0x60
	::Class_0_16E4307DCC419505_1027* Field_2_1; // 0x68
	::UnityEngine::GameObject* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_327B657776861CA3(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101_METHOD_2_327B657776861CA3_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E31B4948BF7B7146(::Class_1_80AF8BF5A186D7B9* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80AF8BF5A186D7B9*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101_METHOD_2_E31B4948BF7B7146_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_368884BBCA3D2697(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101_METHOD_2_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E7A2F143AE85529(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101_METHOD_2_7E7A2F143AE85529_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_330762CC819CBCA4(::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_23*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_23*>*))((::PBYTE)hIl2Cpp + CLASS_2_FAE6B6B726387101_METHOD_2_330762CC819CBCA4_OFFSET))(this, a1);
	}
};
