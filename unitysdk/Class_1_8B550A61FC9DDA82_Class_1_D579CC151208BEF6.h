#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIFriendDetailContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_906578F2BC45CE6D_OFFSET UNITYSDK_OFFSET(0x164215D0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_EBBBED89F4A42AC6_OFFSET UNITYSDK_OFFSET(0x164217E0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6__CTOR_OFFSET UNITYSDK_OFFSET(0x16418AC0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_D579CC151208BEF6_TypeDefinitionIndex = 50152;

class Class_1_8B550A61FC9DDA82_Class_1_D579CC151208BEF6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* Field_1_4; // 0x10
	::UnityEngine::Events::UnityAction* Field_1_5; // 0x18
	::MoleMole::UIFriendDetailContext* Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::Boolean Field_1_11; // 0x2C
	::Enum_3_5F152DBF108B0858 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_906578F2BC45CE6D(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_906578F2BC45CE6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBBBED89F4A42AC6(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_EBBBED89F4A42AC6_OFFSET))(this, a1);
	}
};
