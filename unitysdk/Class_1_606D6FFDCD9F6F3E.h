#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_606D6FFDCD9F6F3E_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x17863E10)
#define CLASS_1_606D6FFDCD9F6F3E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17863D50)
#define CLASS_1_606D6FFDCD9F6F3E_METHOD_1_3E2ADB487A34BD2D_OFFSET UNITYSDK_OFFSET(0x17863CA0)
#define CLASS_1_606D6FFDCD9F6F3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17863BE0)
#define CLASS_1_606D6FFDCD9F6F3E__CTOR_OFFSET UNITYSDK_OFFSET(0x17863BD0)

inline static constexpr unsigned int Class_1_606D6FFDCD9F6F3E_TypeDefinitionIndex = 42208;

class Class_1_606D6FFDCD9F6F3E : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_606D6FFDCD9F6F3E_TypeDefinitionIndex)->GetStaticField(0x38940);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_606D6FFDCD9F6F3E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_606D6FFDCD9F6F3E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_3E2ADB487A34BD2D(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_606D6FFDCD9F6F3E_METHOD_1_3E2ADB487A34BD2D_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_606D6FFDCD9F6F3E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_606D6FFDCD9F6F3E_METHOD_1_09A39B89545FE101_OFFSET))();
	}
};
