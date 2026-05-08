#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E068A47EE62497D2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x154B03A0)
#define CLASS_1_E068A47EE62497D2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x154AFF10)
#define CLASS_1_E068A47EE62497D2_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x154B0400)
#define CLASS_1_E068A47EE62497D2_METHOD_1_BF3B33D6D926CEDE_OFFSET UNITYSDK_OFFSET(0x154AFE60)
#define CLASS_1_E068A47EE62497D2_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x154AFF90)
#define CLASS_1_E068A47EE62497D2__CTOR_OFFSET UNITYSDK_OFFSET(0x154B0610)

inline static constexpr unsigned int Class_1_E068A47EE62497D2_TypeDefinitionIndex = 78115;

class Class_1_E068A47EE62497D2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BF3B33D6D926CEDE(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_METHOD_1_BF3B33D6D926CEDE_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_E068A47EE62497D2_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
