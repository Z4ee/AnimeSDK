#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

class Class_2_D6CF9650D658FB10;
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_D6CF9650D658FB10_CLASS_1_5EF05A970C09E710_METHOD_1_57DD93CAA180892C_OFFSET UNITYSDK_OFFSET(0x1704DF80)
#define CLASS_2_D6CF9650D658FB10_CLASS_1_5EF05A970C09E710_METHOD_1_788EFD7077986588_OFFSET UNITYSDK_OFFSET(0x1704E3C0)
#define CLASS_2_D6CF9650D658FB10_CLASS_1_5EF05A970C09E710__CTOR_OFFSET UNITYSDK_OFFSET(0x1704DF70)

inline static constexpr unsigned int Class_2_D6CF9650D658FB10_Class_1_5EF05A970C09E710_TypeDefinitionIndex = 61222;

class Class_2_D6CF9650D658FB10_Class_1_5EF05A970C09E710 : public ::System::Object
{
public:
	::UnityEngine::MonoBehaviour* Field_1_1; // 0x10
	::Class_2_D6CF9650D658FB10* Field_1_7; // 0x18
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_1_0; // 0x20
	::System::String* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6CF9650D658FB10_CLASS_1_5EF05A970C09E710__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_57DD93CAA180892C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6CF9650D658FB10_CLASS_1_5EF05A970C09E710_METHOD_1_57DD93CAA180892C_OFFSET))(this);
	}

	::System::Void Method_1_788EFD7077986588(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_D6CF9650D658FB10_CLASS_1_5EF05A970C09E710_METHOD_1_788EFD7077986588_OFFSET))(this, a1);
	}
};
