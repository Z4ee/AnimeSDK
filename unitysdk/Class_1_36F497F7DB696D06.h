#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_36F497F7DB696D06_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x143BA770)
#define CLASS_1_36F497F7DB696D06_METHOD_1_146B59313522560E_OFFSET UNITYSDK_OFFSET(0x143BA7B0)
#define CLASS_1_36F497F7DB696D06__CCTOR_OFFSET UNITYSDK_OFFSET(0x143BACB0)
#define CLASS_1_36F497F7DB696D06__CTOR_OFFSET UNITYSDK_OFFSET(0x143BACA0)

inline static constexpr unsigned int Class_1_36F497F7DB696D06_TypeDefinitionIndex = 68510;

class Class_1_36F497F7DB696D06 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36F497F7DB696D06_TypeDefinitionIndex)->GetStaticField(0x331A0);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36F497F7DB696D06_TypeDefinitionIndex)->GetStaticField(0x331A8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F497F7DB696D06__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36F497F7DB696D06__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F497F7DB696D06_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_146B59313522560E(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_866* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_866*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_36F497F7DB696D06_METHOD_1_146B59313522560E_OFFSET))(this, a1, a2, a3, a4);
	}
};
