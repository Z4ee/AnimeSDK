#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE6628CA879CC9BE_METHOD_1_9BB09EEEE1B88AF8_OFFSET UNITYSDK_OFFSET(0x129B3AC0)
#define CLASS_1_DE6628CA879CC9BE_METHOD_1_A3C3639E6F39DAEF_OFFSET UNITYSDK_OFFSET(0x129B3310)
#define CLASS_1_DE6628CA879CC9BE_METHOD_1_C3E5185F0BD877E7_OFFSET UNITYSDK_OFFSET(0x129B3220)
#define CLASS_1_DE6628CA879CC9BE_METHOD_1_DA5D9485DDA43D31_OFFSET UNITYSDK_OFFSET(0x129B39D0)
#define CLASS_1_DE6628CA879CC9BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x129B3CD0)
#define CLASS_1_DE6628CA879CC9BE__CTOR_OFFSET UNITYSDK_OFFSET(0x129B3B80)

inline static constexpr unsigned int Class_1_DE6628CA879CC9BE_TypeDefinitionIndex = 55616;

class Class_1_DE6628CA879CC9BE : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE6628CA879CC9BE_TypeDefinitionIndex)->GetStaticField(0x33660);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE6628CA879CC9BE_TypeDefinitionIndex)->GetStaticField(0x33668);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE6628CA879CC9BE_TypeDefinitionIndex)->GetStaticField(0x33670);
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
