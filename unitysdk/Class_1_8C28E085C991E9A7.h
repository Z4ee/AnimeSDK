#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/Struct_2_6EBD903476086028.h"
#include "unitysdk/System/Object.h"

class Class_1_01E3578B80D3E1F9;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C28E085C991E9A7_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148FE6A0)
#define CLASS_1_8C28E085C991E9A7_FROMFLX_OFFSET UNITYSDK_OFFSET(0x148FCD30)
#define CLASS_1_8C28E085C991E9A7_METHOD_1_741BC452E7042B67_OFFSET UNITYSDK_OFFSET(0x148FE700)
#define CLASS_1_8C28E085C991E9A7_METHOD_1_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x148FCDB0)
#define CLASS_1_8C28E085C991E9A7__CTOR_OFFSET UNITYSDK_OFFSET(0x148FEF20)

inline static constexpr unsigned int Class_1_8C28E085C991E9A7_TypeDefinitionIndex = 68987;

class Class_1_8C28E085C991E9A7 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* Field_1_14; // 0x20
	::System::String* Field_1_10; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_11; // 0x38
	::System::String* Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::Class_1_01E3578B80D3E1F9*>* Field_1_15; // 0x48
	::System::String* Field_1_13; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_6EBD903476086028>* Field_1_19; // 0x58
	::System::Boolean Field_1_8; // 0x60
	::System::Boolean Field_1_9; // 0x61
	::System::Boolean Field_1_6; // 0x62
	::System::Int32 Field_1_1; // 0x64
	::System::Int32 Field_1_12; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C28E085C991E9A7__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8C28E085C991E9A7_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C28E085C991E9A7_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8C28E085C991E9A7_METHOD_1_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_741BC452E7042B67(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C28E085C991E9A7_METHOD_1_741BC452E7042B67_OFFSET))(this, a1, a2);
	}
};
