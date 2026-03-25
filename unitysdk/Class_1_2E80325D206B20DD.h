#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_1A781135C1474CFC;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_2E80325D206B20DD_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x99DC9D0)
#define CLASS_1_2E80325D206B20DD_METHOD_1_4FC4A701F8CB8BD3_OFFSET UNITYSDK_OFFSET(0x99DCA10)
#define CLASS_1_2E80325D206B20DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x99DCE80)
#define CLASS_1_2E80325D206B20DD__CTOR_OFFSET UNITYSDK_OFFSET(0x99DCE70)

inline static constexpr unsigned int Class_1_2E80325D206B20DD_TypeDefinitionIndex = 60123;

class Class_1_2E80325D206B20DD : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E80325D206B20DD_TypeDefinitionIndex)->GetStaticField(0x46590);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E80325D206B20DD_TypeDefinitionIndex)->GetStaticField(0x46598);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E80325D206B20DD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E80325D206B20DD__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E80325D206B20DD_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_4FC4A701F8CB8BD3(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_2E80325D206B20DD_METHOD_1_4FC4A701F8CB8BD3_OFFSET))(this, a1, a2, a3, a4);
	}
};
