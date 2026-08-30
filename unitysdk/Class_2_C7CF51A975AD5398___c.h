#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C7CF51A975AD5398___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA85B00)
#define CLASS_2_C7CF51A975AD5398___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFA85B40)
#define CLASS_2_C7CF51A975AD5398___C__FINDBOTTOMPOINT_B__3_0_OFFSET UNITYSDK_OFFSET(0xFA85B50)

inline static constexpr unsigned int Class_2_C7CF51A975AD5398___c_TypeDefinitionIndex = 70325;

class Class_2_C7CF51A975AD5398___c : public ::System::Object
{
public:
	static ::Class_2_C7CF51A975AD5398___c** StaticGet___9()
	{
		return (::Class_2_C7CF51A975AD5398___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7CF51A975AD5398___c_TypeDefinitionIndex)->GetStaticField(0x19DF0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3>, ::System::Single>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7CF51A975AD5398___c_TypeDefinitionIndex)->GetStaticField(0x19DF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398___C__CTOR_OFFSET))(this);
	}

	::System::Single _FindBottomPoint_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3> a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_C7CF51A975AD5398___C__FINDBOTTOMPOINT_B__3_0_OFFSET))(this, a1);
	}
};
