#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3A216973E1BA9106.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Enum_3_D2697D54FFFB1527.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2834146C630674A0_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15FFAAE0)
#define CLASS_2_2834146C630674A0_METHOD_2_F747C90557DD4D99_OFFSET UNITYSDK_OFFSET(0x15FF8570)
#define CLASS_2_2834146C630674A0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF8420)

inline static constexpr unsigned int Class_2_2834146C630674A0_TypeDefinitionIndex = 51015;

class Class_2_2834146C630674A0 : public ::Class_1_3A216973E1BA9106
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_7; // 0x18
	::MoleMole::UIHollowCardOptionsDialogContext* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_6; // 0x30
	::Enum_3_15A8EF2824547B27 Field_2_11; // 0x38
	::Enum_3_D2697D54FFFB1527 Field_2_5; // 0x3C
	::System::Boolean Field_2_4; // 0x40
	::System::Boolean Field_2_10; // 0x41

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::Enum_3_D2697D54FFFB1527 a2, ::System::Boolean a3, ::Enum_3_15A8EF2824547B27 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Enum_3_D2697D54FFFB1527, ::System::Boolean, ::Enum_3_15A8EF2824547B27))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F747C90557DD4D99(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0_METHOD_2_F747C90557DD4D99_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
