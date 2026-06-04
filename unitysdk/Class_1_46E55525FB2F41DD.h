#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46E55525FB2F41DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1458D4A0)

inline static constexpr unsigned int Class_1_46E55525FB2F41DD_TypeDefinitionIndex = 70492;

class Class_1_46E55525FB2F41DD : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46E55525FB2F41DD_TypeDefinitionIndex)->GetStaticField(0x50190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_46E55525FB2F41DD__CCTOR_OFFSET))();
	}
};
