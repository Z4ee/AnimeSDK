#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF_1.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIFriendDetailContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_906578F2BC45CE6D_OFFSET UNITYSDK_OFFSET(0x16FDFF90)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_EBBBED89F4A42AC6_OFFSET UNITYSDK_OFFSET(0x16FDFD90)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDFD80)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_D579CC151208BEF6_TypeDefinitionIndex = 82192;

class Class_1_8B550A61FC9DDA82_Class_1_D579CC151208BEF6 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* Field_1_3; // 0x10
	::MoleMole::UIFriendDetailContext* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* Field_1_4; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::Enum_3_F3B35B60B7BAFCAF_1 Field_1_2; // 0x2C
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBBBED89F4A42AC6(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_EBBBED89F4A42AC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_906578F2BC45CE6D(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_D579CC151208BEF6_METHOD_1_906578F2BC45CE6D_OFFSET))(this, a1);
	}
};
