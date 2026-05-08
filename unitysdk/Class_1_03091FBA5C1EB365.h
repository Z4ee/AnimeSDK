#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F547720DDC402041;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_03091FBA5C1EB365_METHOD_1_AE56C3FCA9C61067_OFFSET UNITYSDK_OFFSET(0x10423760)
#define CLASS_1_03091FBA5C1EB365_METHOD_1_F72C12FDC5F0DEF8_OFFSET UNITYSDK_OFFSET(0x10423900)
#define CLASS_1_03091FBA5C1EB365__CCTOR_OFFSET UNITYSDK_OFFSET(0x104234E0)

inline static constexpr unsigned int Class_1_03091FBA5C1EB365_TypeDefinitionIndex = 72514;

class Class_1_03091FBA5C1EB365 : public ::System::Object
{
public:
	static ::Class_1_F547720DDC402041** StaticGet_Field_1_4()
	{
		return (::Class_1_F547720DDC402041**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03091FBA5C1EB365_TypeDefinitionIndex)->GetStaticField(0x2BBE0);
	}
	static ::Class_1_F547720DDC402041** StaticGet_Field_1_3()
	{
		return (::Class_1_F547720DDC402041**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03091FBA5C1EB365_TypeDefinitionIndex)->GetStaticField(0x2BBE8);
	}
	static ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>** StaticGet_Field_1_6()
	{
		return (::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03091FBA5C1EB365_TypeDefinitionIndex)->GetStaticField(0x2BBF0);
	}
	static ::Class_1_F547720DDC402041** StaticGet_Field_1_5()
	{
		return (::Class_1_F547720DDC402041**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03091FBA5C1EB365_TypeDefinitionIndex)->GetStaticField(0x2BBF8);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365__CCTOR_OFFSET))();
	}

	static ::Class_1_F547720DDC402041* Method_1_AE56C3FCA9C61067(::System::Int32 a1)
	{
		return ((::Class_1_F547720DDC402041*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365_METHOD_1_AE56C3FCA9C61067_OFFSET))(a1);
	}

	static ::Class_1_F547720DDC402041* Method_1_F72C12FDC5F0DEF8(::System::Int32 a1, ::System::String* a2, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* a3)
	{
		return ((::Class_1_F547720DDC402041*(*)(::System::Int32, ::System::String*, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_03091FBA5C1EB365_METHOD_1_F72C12FDC5F0DEF8_OFFSET))(a1, a2, a3);
	}
};
