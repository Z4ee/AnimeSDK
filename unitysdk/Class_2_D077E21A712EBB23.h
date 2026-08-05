#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class Class_3_99D7454A62EA9BE6;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System { class String; }

#define CLASS_2_D077E21A712EBB23_METHOD_2_02ED39BD6A01FD69_OFFSET UNITYSDK_OFFSET(0x155647B0)
#define CLASS_2_D077E21A712EBB23_METHOD_2_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x15564470)
#define CLASS_2_D077E21A712EBB23_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x155643D0)
#define CLASS_2_D077E21A712EBB23_METHOD_2_DBBEB514B9CCAA6D_OFFSET UNITYSDK_OFFSET(0x15564AE0)
#define CLASS_2_D077E21A712EBB23_METHOD_2_EC8A3FBE028E52AF_OFFSET UNITYSDK_OFFSET(0x155644E0)
#define CLASS_2_D077E21A712EBB23__CTOR_OFFSET UNITYSDK_OFFSET(0x15564420)

inline static constexpr unsigned int Class_2_D077E21A712EBB23_TypeDefinitionIndex = 82232;

class Class_2_D077E21A712EBB23 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::Int32 Field_2_0 = 0x0; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::MoleMole::UIGeneralToggleWidgetController* Field_2_1; // 0x50
	::MoleMole::UIGeneralFilterPopWindowController* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D077E21A712EBB23__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_D077E21A712EBB23_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::Class_3_99D7454A62EA9BE6* Method_2_4AA7827CFB505DDD()
	{
		return ((::Class_3_99D7454A62EA9BE6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D077E21A712EBB23_METHOD_2_4AA7827CFB505DDD_OFFSET))(this);
	}

	::System::Void Method_2_EC8A3FBE028E52AF(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D077E21A712EBB23_METHOD_2_EC8A3FBE028E52AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_02ED39BD6A01FD69(::MoleMole::UIBaseController* a1, ::MoleMole::UIGeneralFilterPopWindowController* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIGeneralFilterPopWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D077E21A712EBB23_METHOD_2_02ED39BD6A01FD69_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DBBEB514B9CCAA6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D077E21A712EBB23_METHOD_2_DBBEB514B9CCAA6D_OFFSET))(this, a1);
	}
};
