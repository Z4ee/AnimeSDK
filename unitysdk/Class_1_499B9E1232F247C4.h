#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_499B9E1232F247C4_METHOD_1_2354C90BD60BB59C_OFFSET UNITYSDK_OFFSET(0xB4872E0)
#define CLASS_1_499B9E1232F247C4_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB487270)
#define CLASS_1_499B9E1232F247C4__CCTOR_OFFSET UNITYSDK_OFFSET(0xB487950)
#define CLASS_1_499B9E1232F247C4__CTOR_OFFSET UNITYSDK_OFFSET(0xB487940)

inline static constexpr unsigned int Class_1_499B9E1232F247C4_TypeDefinitionIndex = 73263;

class Class_1_499B9E1232F247C4 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_LDJAFDPCODG()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_499B9E1232F247C4_TypeDefinitionIndex)->GetStaticField(0x6A70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_499B9E1232F247C4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_499B9E1232F247C4__CCTOR_OFFSET))();
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_499B9E1232F247C4_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_2354C90BD60BB59C(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_955* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_955*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_499B9E1232F247C4_METHOD_1_2354C90BD60BB59C_OFFSET))(this, a1, a2, a3, a4);
	}
};
