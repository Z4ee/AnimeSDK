#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_036E8CAA413BFC02_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15865F90)
#define CLASS_1_036E8CAA413BFC02_METHOD_1_B370CA2766300922_OFFSET UNITYSDK_OFFSET(0x15866000)
#define CLASS_1_036E8CAA413BFC02__CCTOR_OFFSET UNITYSDK_OFFSET(0x15866530)
#define CLASS_1_036E8CAA413BFC02__CTOR_OFFSET UNITYSDK_OFFSET(0x15866520)

inline static constexpr unsigned int Class_1_036E8CAA413BFC02_TypeDefinitionIndex = 70004;

class Class_1_036E8CAA413BFC02 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_036E8CAA413BFC02_TypeDefinitionIndex)->GetStaticField(0x29BF0);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_036E8CAA413BFC02_TypeDefinitionIndex)->GetStaticField(0x29BF8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_036E8CAA413BFC02__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_036E8CAA413BFC02__CCTOR_OFFSET))();
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_036E8CAA413BFC02_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_B370CA2766300922(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_036E8CAA413BFC02_METHOD_1_B370CA2766300922_OFFSET))(this, a1, a2, a3, a4);
	}
};
