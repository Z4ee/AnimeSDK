#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_79B67DEB667ABBCA_Class_2_9A621164AF3B9F42;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIMusicalBattleLevelItemWidgetController_Data; }
namespace System { class String; }

#define CLASS_2_79B67DEB667ABBCA_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xEA6CF50)
#define CLASS_2_79B67DEB667ABBCA_METHOD_2_54D71BD2BDDCB217_OFFSET UNITYSDK_OFFSET(0xEA6CFB0)
#define CLASS_2_79B67DEB667ABBCA_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0xEA6CEB0)
#define CLASS_2_79B67DEB667ABBCA__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6CF00)

inline static constexpr unsigned int Class_2_79B67DEB667ABBCA_TypeDefinitionIndex = 69843;

class Class_2_79B67DEB667ABBCA : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* Field_2_0; // 0x50
	::Struct_2_24A53FACD918DAF7 Field_2_4; // 0x58
	::Class_2_79B67DEB667ABBCA_Class_2_9A621164AF3B9F42* Field_2_2; // 0x68
	::System::Int32 Field_2_1; // 0x70
	::System::Boolean Field_2_3; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79B67DEB667ABBCA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_79B67DEB667ABBCA_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79B67DEB667ABBCA_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_54D71BD2BDDCB217(::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicalBattleLevelItemWidgetController_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_79B67DEB667ABBCA_METHOD_2_54D71BD2BDDCB217_OFFSET))(this, a1, a2);
	}
};
