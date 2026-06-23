#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BB84AD73499F6B89.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffectPluginTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_01F9C1B9491C656B_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xB7E1F50)
#define CLASS_1_01F9C1B9491C656B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7E1F00)
#define CLASS_1_01F9C1B9491C656B_METHOD_1_F2F08395C02A5CC3_OFFSET UNITYSDK_OFFSET(0xB7E2070)
#define CLASS_1_01F9C1B9491C656B__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E1EF0)

inline static constexpr unsigned int Class_1_01F9C1B9491C656B_TypeDefinitionIndex = 75513;

class Class_1_01F9C1B9491C656B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_BB84AD73499F6B89>* Field_1_0; // 0x10
	::UnityEngine::Animation* Field_1_3; // 0x18
	::MoleMole::MonoEffectPluginTransform* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F9C1B9491C656B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F9C1B9491C656B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_01F9C1B9491C656B* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_01F9C1B9491C656B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_01F9C1B9491C656B_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	static ::System::Void Method_1_F2F08395C02A5CC3(::Class_1_01F9C1B9491C656B* a1)
	{
		return ((::System::Void(*)(::Class_1_01F9C1B9491C656B*))((::PBYTE)hIl2Cpp + CLASS_1_01F9C1B9491C656B_METHOD_1_F2F08395C02A5CC3_OFFSET))(a1);
	}
};
