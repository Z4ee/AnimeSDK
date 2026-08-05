#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8A9D789ECB52A5B9_Class_2_9A621164AF3B9F42;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIMusicalBattleLevelItemWidgetController_Data; }
namespace System { class String; }

#define CLASS_2_8A9D789ECB52A5B9_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x148AA4E0)
#define CLASS_2_8A9D789ECB52A5B9_METHOD_2_49FCE3DCA138C27C_OFFSET UNITYSDK_OFFSET(0x148A9900)
#define CLASS_2_8A9D789ECB52A5B9_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x148A9860)
#define CLASS_2_8A9D789ECB52A5B9__CTOR_OFFSET UNITYSDK_OFFSET(0x148A98B0)

inline static constexpr unsigned int Class_2_8A9D789ECB52A5B9_TypeDefinitionIndex = 49897;

class Class_2_8A9D789ECB52A5B9 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::Struct_2_24A53FACD918DAF7 Field_2_4; // 0x50
	::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* Field_2_0; // 0x60
	::Class_2_8A9D789ECB52A5B9_Class_2_9A621164AF3B9F42* Field_2_6; // 0x68
	::System::Int32 Field_2_7; // 0x70
	::System::Boolean Field_2_5; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A9D789ECB52A5B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8A9D789ECB52A5B9_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49FCE3DCA138C27C(::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicalBattleLevelItemWidgetController_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A9D789ECB52A5B9_METHOD_2_49FCE3DCA138C27C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A9D789ECB52A5B9_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}
};
