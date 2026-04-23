#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextFormatFlag.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_FBD3E8AC73450E0D_METHOD_1_5534CCC822EB6D42_OFFSET UNITYSDK_OFFSET(0x8FCB520)
#define CLASS_1_FBD3E8AC73450E0D_METHOD_1_74D959A721F20D0E_OFFSET UNITYSDK_OFFSET(0x8FCB7D0)
#define CLASS_1_FBD3E8AC73450E0D_METHOD_1_8340EF9CF434CC7C_OFFSET UNITYSDK_OFFSET(0x8FCBC10)
#define CLASS_1_FBD3E8AC73450E0D_METHOD_1_C35E6B16983C67FF_OFFSET UNITYSDK_OFFSET(0x8FCB570)
#define CLASS_1_FBD3E8AC73450E0D__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FCBC70)

inline static constexpr unsigned int Class_1_FBD3E8AC73450E0D_TypeDefinitionIndex = 67369;

class Class_1_FBD3E8AC73450E0D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBD3E8AC73450E0D_TypeDefinitionIndex)->GetStaticField(0x645C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBD3E8AC73450E0D__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::UnityEngine::TextFormatFlag>* Method_1_5534CCC822EB6D42(::System::String* a1)
	{
		return ((::Il2CppArray<::UnityEngine::TextFormatFlag>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBD3E8AC73450E0D_METHOD_1_5534CCC822EB6D42_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C35E6B16983C67FF(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBD3E8AC73450E0D_METHOD_1_C35E6B16983C67FF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_74D959A721F20D0E(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextFormatFlag>* a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Boolean& a5)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextFormatFlag>*, ::System::Int32, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FBD3E8AC73450E0D_METHOD_1_74D959A721F20D0E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_8340EF9CF434CC7C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBD3E8AC73450E0D_METHOD_1_8340EF9CF434CC7C_OFFSET))(a1);
	}
};
