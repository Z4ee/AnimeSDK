#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_73507DF29F8561CD;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_C6785D7664BB857B_METHOD_1_115B825EB826389C_OFFSET UNITYSDK_OFFSET(0x118527E0)
#define CLASS_1_C6785D7664BB857B__CCTOR_OFFSET UNITYSDK_OFFSET(0x11852D60)

inline static constexpr unsigned int Class_1_C6785D7664BB857B_TypeDefinitionIndex = 54758;

class Class_1_C6785D7664BB857B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6785D7664BB857B_TypeDefinitionIndex)->GetStaticField(0x469B0);
	}
	// static const ::System::Char Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6785D7664BB857B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>* Method_1_115B825EB826389C(::System::Type* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C6785D7664BB857B_METHOD_1_115B825EB826389C_OFFSET))(a1);
	}
};
