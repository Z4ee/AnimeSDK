#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_E52927B74E48DBEB_Class_1_511D36723E750451;
namespace System::Collections { class Hashtable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_E52927B74E48DBEB_METHOD_1_0A3B24A3C9F27C92_OFFSET UNITYSDK_OFFSET(0x9393470)
#define CLASS_1_E52927B74E48DBEB_METHOD_1_C0DBF719D15AB9AA_OFFSET UNITYSDK_OFFSET(0x93932E0)
#define CLASS_1_E52927B74E48DBEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x9393CD0)

inline static constexpr unsigned int Class_1_E52927B74E48DBEB_TypeDefinitionIndex = 45610;

class Class_1_E52927B74E48DBEB : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E52927B74E48DBEB_TypeDefinitionIndex)->GetStaticField(0x6A30);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E52927B74E48DBEB_TypeDefinitionIndex)->GetStaticField(0x6A38);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_0()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E52927B74E48DBEB_TypeDefinitionIndex)->GetStaticField(0x6A40);
	}
	static ::System::Collections::Hashtable** StaticGet_Field_1_5()
	{
		return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E52927B74E48DBEB_TypeDefinitionIndex)->GetStaticField(0x6A48);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E52927B74E48DBEB_TypeDefinitionIndex)->GetStaticField(0x6A50);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E52927B74E48DBEB_TypeDefinitionIndex)->GetStaticField(0x3240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E52927B74E48DBEB__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_C0DBF719D15AB9AA(::System::Boolean a1)
	{
		return ((::UnityEngine::Material*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E52927B74E48DBEB_METHOD_1_C0DBF719D15AB9AA_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_0A3B24A3C9F27C92(::System::UInt32 a1, ::Class_1_E52927B74E48DBEB_Class_1_511D36723E750451* a2)
	{
		return ((::UnityEngine::Material*(*)(::System::UInt32, ::Class_1_E52927B74E48DBEB_Class_1_511D36723E750451*))((::PBYTE)hIl2Cpp + CLASS_1_E52927B74E48DBEB_METHOD_1_0A3B24A3C9F27C92_OFFSET))(a1, a2);
	}
};
