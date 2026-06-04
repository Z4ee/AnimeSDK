#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ADBCDF8C69BBDC56_METHOD_1_117B70991A90B88B_OFFSET UNITYSDK_OFFSET(0xAF52DB0)
#define CLASS_1_ADBCDF8C69BBDC56_METHOD_1_3FEBBD86EF758E69_OFFSET UNITYSDK_OFFSET(0xAF526B0)
#define CLASS_1_ADBCDF8C69BBDC56_METHOD_1_9BB09EEEE1B88AF8_OFFSET UNITYSDK_OFFSET(0xAF52EA0)
#define CLASS_1_ADBCDF8C69BBDC56_METHOD_1_C3E5185F0BD877E7_OFFSET UNITYSDK_OFFSET(0xAF525C0)
#define CLASS_1_ADBCDF8C69BBDC56__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF53050)
#define CLASS_1_ADBCDF8C69BBDC56__CTOR_OFFSET UNITYSDK_OFFSET(0xAF52F60)

inline static constexpr unsigned int Class_1_ADBCDF8C69BBDC56_TypeDefinitionIndex = 56367;

class Class_1_ADBCDF8C69BBDC56 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADBCDF8C69BBDC56_TypeDefinitionIndex)->GetStaticField(0x3EF80);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADBCDF8C69BBDC56_TypeDefinitionIndex)->GetStaticField(0x3EF88);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADBCDF8C69BBDC56_TypeDefinitionIndex)->GetStaticField(0x3EF90);
	}
	::Il2CppArray<::System::String*>* Field_1_3; // 0x10
	::Il2CppArray<::System::String*>* Field_1_4; // 0x18
	::RPG::Client::TriggerEffectParamsRef Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADBCDF8C69BBDC56__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADBCDF8C69BBDC56__CCTOR_OFFSET))();
	}

	::System::Void Method_1_C3E5185F0BD877E7(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBCDF8C69BBDC56_METHOD_1_C3E5185F0BD877E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3FEBBD86EF758E69(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_ADBCDF8C69BBDC56_METHOD_1_3FEBBD86EF758E69_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_9BB09EEEE1B88AF8(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ADBCDF8C69BBDC56_METHOD_1_9BB09EEEE1B88AF8_OFFSET))(this, a1);
	}

	::System::String* Method_1_117B70991A90B88B(::System::Collections::Generic::List_1<::System::String*>*& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_ADBCDF8C69BBDC56_METHOD_1_117B70991A90B88B_OFFSET))(this, a1);
	}
};
