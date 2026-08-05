#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BAE3ECFA8B76A814_METHOD_1_2F186C294F88C8D0_OFFSET UNITYSDK_OFFSET(0x17525440)
#define CLASS_1_BAE3ECFA8B76A814_METHOD_1_785EE90BDF5B982D_OFFSET UNITYSDK_OFFSET(0x17524BA0)
#define CLASS_1_BAE3ECFA8B76A814_METHOD_1_86E71C9EC92776D0_OFFSET UNITYSDK_OFFSET(0x175248E0)
#define CLASS_1_BAE3ECFA8B76A814_METHOD_1_DF942CDB519BB74D_OFFSET UNITYSDK_OFFSET(0x17524A20)

inline static constexpr unsigned int Class_1_BAE3ECFA8B76A814_TypeDefinitionIndex = 67998;

class Class_1_BAE3ECFA8B76A814 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_86E71C9EC92776D0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BAE3ECFA8B76A814_METHOD_1_86E71C9EC92776D0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DF942CDB519BB74D(::System::Int32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_BAE3ECFA8B76A814_METHOD_1_DF942CDB519BB74D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_785EE90BDF5B982D(::System::Int32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_BAE3ECFA8B76A814_METHOD_1_785EE90BDF5B982D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2F186C294F88C8D0(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_BAE3ECFA8B76A814_METHOD_1_2F186C294F88C8D0_OFFSET))(a1, a2);
	}
};
