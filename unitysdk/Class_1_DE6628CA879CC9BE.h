#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE6628CA879CC9BE_METHOD_1_9BB09EEEE1B88AF8_OFFSET UNITYSDK_OFFSET(0x8D587B0)
#define CLASS_1_DE6628CA879CC9BE_METHOD_1_A3C3639E6F39DAEF_OFFSET UNITYSDK_OFFSET(0x8D58000)
#define CLASS_1_DE6628CA879CC9BE_METHOD_1_C3E5185F0BD877E7_OFFSET UNITYSDK_OFFSET(0x8D57F10)
#define CLASS_1_DE6628CA879CC9BE_METHOD_1_DA5D9485DDA43D31_OFFSET UNITYSDK_OFFSET(0x8D586C0)
#define CLASS_1_DE6628CA879CC9BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D589C0)
#define CLASS_1_DE6628CA879CC9BE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D58870)

inline static constexpr unsigned int Class_1_DE6628CA879CC9BE_TypeDefinitionIndex = 48852;

class Class_1_DE6628CA879CC9BE : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE6628CA879CC9BE_TypeDefinitionIndex)->GetStaticField(0x371C0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE6628CA879CC9BE_TypeDefinitionIndex)->GetStaticField(0x371C8);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE6628CA879CC9BE_TypeDefinitionIndex)->GetStaticField(0x371D0);
	}
	::Il2CppArray<::System::String*>* Field_1_2; // 0x10
	::RPG::Client::TriggerEffectParamsRef Field_1_0; // 0x18
	::Il2CppArray<::System::String*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE6628CA879CC9BE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE6628CA879CC9BE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_C3E5185F0BD877E7(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE6628CA879CC9BE_METHOD_1_C3E5185F0BD877E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A3C3639E6F39DAEF(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE6628CA879CC9BE_METHOD_1_A3C3639E6F39DAEF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_9BB09EEEE1B88AF8(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE6628CA879CC9BE_METHOD_1_9BB09EEEE1B88AF8_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA5D9485DDA43D31(::System::Collections::Generic::List_1<::System::String*>*& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_DE6628CA879CC9BE_METHOD_1_DA5D9485DDA43D31_OFFSET))(this, a1);
	}
};
