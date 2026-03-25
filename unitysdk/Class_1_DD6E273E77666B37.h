#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define CLASS_1_DD6E273E77666B37_GET_FINISH_OFFSET UNITYSDK_OFFSET(0x10AA5DB0)
#define CLASS_1_DD6E273E77666B37_METHOD_1_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0x10AA5B70)
#define CLASS_1_DD6E273E77666B37_SET_FINISH_OFFSET UNITYSDK_OFFSET(0x10AA5DC0)
#define CLASS_1_DD6E273E77666B37__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AA5DD0)
#define CLASS_1_DD6E273E77666B37__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA59E0)

inline static constexpr unsigned int Class_1_DD6E273E77666B37_TypeDefinitionIndex = 63977;

class Class_1_DD6E273E77666B37 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD6E273E77666B37_TypeDefinitionIndex)->GetStaticField(0x12510);
	}
	::Il2CppArray<::UnityEngine::Material*>* Field_1_1; // 0x10
	::UnityEngine::LineRenderer* Field_1_6; // 0x18
	::Il2CppArray<::UnityEngine::Color>* Field_1_0; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::Boolean _Finish_k__BackingField; // 0x2C
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_2; // 0x34

	::System::Void _ctor(::UnityEngine::LineRenderer* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37_METHOD_1_CDFCB4F1AB271783_OFFSET))(this, a1);
	}

	::System::Boolean get_Finish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37_GET_FINISH_OFFSET))(this);
	}

	::System::Void set_Finish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37_SET_FINISH_OFFSET))(this, value);
	}
};
