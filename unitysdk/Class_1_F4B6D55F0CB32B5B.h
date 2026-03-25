#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_1A781135C1474CFC;
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_F4B6D55F0CB32B5B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11142270)
#define CLASS_1_F4B6D55F0CB32B5B_METHOD_1_43983D78A9EF6486_OFFSET UNITYSDK_OFFSET(0x11142720)
#define CLASS_1_F4B6D55F0CB32B5B_METHOD_1_52E98495F50B0D04_OFFSET UNITYSDK_OFFSET(0x111422B0)
#define CLASS_1_F4B6D55F0CB32B5B_METHOD_1_B5A7BAA06C7E2F4A_OFFSET UNITYSDK_OFFSET(0x11142670)
#define CLASS_1_F4B6D55F0CB32B5B__CCTOR_OFFSET UNITYSDK_OFFSET(0x111427D0)
#define CLASS_1_F4B6D55F0CB32B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x11142750)

inline static constexpr unsigned int Class_1_F4B6D55F0CB32B5B_TypeDefinitionIndex = 60143;

class Class_1_F4B6D55F0CB32B5B : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4B6D55F0CB32B5B_TypeDefinitionIndex)->GetStaticField(0x46660);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	::System::Text::StringBuilder* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B6D55F0CB32B5B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4B6D55F0CB32B5B__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B6D55F0CB32B5B_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_52E98495F50B0D04(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_F4B6D55F0CB32B5B_METHOD_1_52E98495F50B0D04_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_B5A7BAA06C7E2F4A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4B6D55F0CB32B5B_METHOD_1_B5A7BAA06C7E2F4A_OFFSET))(this, a1, a2);
	}

	::System::IFormatProvider* Method_1_43983D78A9EF6486()
	{
		return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B6D55F0CB32B5B_METHOD_1_43983D78A9EF6486_OFFSET))(this);
	}
};
