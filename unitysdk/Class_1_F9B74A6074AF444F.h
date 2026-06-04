#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F9B74A6074AF444F_METHOD_1_11904E469DD5EFFA_OFFSET UNITYSDK_OFFSET(0x188CE1B0)
#define CLASS_1_F9B74A6074AF444F_METHOD_1_AE97B9F5EDDC96EC_OFFSET UNITYSDK_OFFSET(0x188CDF60)
#define CLASS_1_F9B74A6074AF444F__CCTOR_OFFSET UNITYSDK_OFFSET(0x188CDB60)

inline static constexpr unsigned int Class_1_F9B74A6074AF444F_TypeDefinitionIndex = 38595;

class Class_1_F9B74A6074AF444F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9B74A6074AF444F_TypeDefinitionIndex)->GetStaticField(0x1A170);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9B74A6074AF444F_TypeDefinitionIndex)->GetStaticField(0x1A178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9B74A6074AF444F__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AE97B9F5EDDC96EC(::System::Type* a1)
	{
		return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_F9B74A6074AF444F_METHOD_1_AE97B9F5EDDC96EC_OFFSET))(a1);
	}

	static ::System::Type* Method_1_11904E469DD5EFFA(::System::Int32 a1)
	{
		return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F9B74A6074AF444F_METHOD_1_11904E469DD5EFFA_OFFSET))(a1);
	}
};
