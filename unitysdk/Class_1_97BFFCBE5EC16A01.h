#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_97BFFCBE5EC16A01_METHOD_1_6AE3430FAD344829_OFFSET UNITYSDK_OFFSET(0x1DD5D820)
#define CLASS_1_97BFFCBE5EC16A01_METHOD_1_B9E2732957B93A86_OFFSET UNITYSDK_OFFSET(0x1DD5DA10)
#define CLASS_1_97BFFCBE5EC16A01__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD5DAE0)

inline static constexpr unsigned int Class_1_97BFFCBE5EC16A01_TypeDefinitionIndex = 6395;

class Class_1_97BFFCBE5EC16A01 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_DDPHAPFKNPL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97BFFCBE5EC16A01_TypeDefinitionIndex)->GetStaticField(0x2BB30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97BFFCBE5EC16A01__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_6AE3430FAD344829(::System::Type* a1)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_97BFFCBE5EC16A01_METHOD_1_6AE3430FAD344829_OFFSET))(a1);
	}

	static ::System::String* Method_1_B9E2732957B93A86(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_97BFFCBE5EC16A01_METHOD_1_B9E2732957B93A86_OFFSET))(a1);
	}
};
