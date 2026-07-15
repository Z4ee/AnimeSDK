#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_87D77BF48E779FA0_METHOD_1_10349596E0FAB12F_OFFSET UNITYSDK_OFFSET(0x156434B0)
#define CLASS_1_87D77BF48E779FA0_METHOD_1_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x156432E0)
#define CLASS_1_87D77BF48E779FA0_METHOD_1_44F9910045CC7F00_1_OFFSET UNITYSDK_OFFSET(0x15643F20)
#define CLASS_1_87D77BF48E779FA0_METHOD_1_44F9910045CC7F00_OFFSET UNITYSDK_OFFSET(0x15643DC0)
#define CLASS_1_87D77BF48E779FA0_METHOD_1_6E8E77E17A6ED590_OFFSET UNITYSDK_OFFSET(0x156432D0)
#define CLASS_1_87D77BF48E779FA0_METHOD_1_83C5A5D5A1A602D3_OFFSET UNITYSDK_OFFSET(0x156432F0)
#define CLASS_1_87D77BF48E779FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x15644090)

inline static constexpr unsigned int Class_1_87D77BF48E779FA0_TypeDefinitionIndex = 70816;

class Class_1_87D77BF48E779FA0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Renderer* Method_1_6E8E77E17A6ED590()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0_METHOD_1_6E8E77E17A6ED590_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_1_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0_METHOD_1_3CAC93BF77250DAD_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_83C5A5D5A1A602D3(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0_METHOD_1_83C5A5D5A1A602D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10349596E0FAB12F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0_METHOD_1_10349596E0FAB12F_OFFSET))(this);
	}

	static ::System::Single Method_1_44F9910045CC7F00()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0_METHOD_1_44F9910045CC7F00_OFFSET))();
	}

	static ::System::Single Method_1_44F9910045CC7F00_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_87D77BF48E779FA0_METHOD_1_44F9910045CC7F00_1_OFFSET))();
	}
};
