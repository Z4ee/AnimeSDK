#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_027882ED3C098B1B;
class Class_1_1A781135C1474CFC;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_E2C1688D6233E143_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10926AE0)
#define CLASS_1_E2C1688D6233E143_METHOD_1_227DBAAD8A7BA789_OFFSET UNITYSDK_OFFSET(0x10927040)
#define CLASS_1_E2C1688D6233E143_METHOD_1_8BB8C1DA471B26F6_OFFSET UNITYSDK_OFFSET(0x10926B20)
#define CLASS_1_E2C1688D6233E143__CCTOR_OFFSET UNITYSDK_OFFSET(0x10927140)
#define CLASS_1_E2C1688D6233E143__CTOR_OFFSET UNITYSDK_OFFSET(0x10927120)

inline static constexpr unsigned int Class_1_E2C1688D6233E143_TypeDefinitionIndex = 60155;

class Class_1_E2C1688D6233E143 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2C1688D6233E143_TypeDefinitionIndex)->GetStaticField(0x29BE0);
	}
	// static const ::System::String* Field_1_2; // 0x0
	::Class_1_027882ED3C098B1B* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C1688D6233E143__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2C1688D6233E143__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2C1688D6233E143_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_8BB8C1DA471B26F6(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_E2C1688D6233E143_METHOD_1_8BB8C1DA471B26F6_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::String* Method_1_227DBAAD8A7BA789(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2C1688D6233E143_METHOD_1_227DBAAD8A7BA789_OFFSET))(a1);
	}
};
