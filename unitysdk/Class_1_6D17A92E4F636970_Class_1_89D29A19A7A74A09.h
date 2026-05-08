#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIFriendDetailContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_89D29A19A7A74A09_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x11318500)
#define CLASS_1_6D17A92E4F636970_CLASS_1_89D29A19A7A74A09_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x113186B0)
#define CLASS_1_6D17A92E4F636970_CLASS_1_89D29A19A7A74A09__CTOR_OFFSET UNITYSDK_OFFSET(0x113184F0)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_89D29A19A7A74A09_TypeDefinitionIndex = 82586;

class Class_1_6D17A92E4F636970_Class_1_89D29A19A7A74A09 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* Field_1_3; // 0x10
	::MoleMole::UIFriendDetailContext* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* Field_1_4; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::Enum_3_F3B35B60B7BAFCAF Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_89D29A19A7A74A09__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C490FF1F071E8D4(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_89D29A19A7A74A09_METHOD_1_0C490FF1F071E8D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_89D29A19A7A74A09_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}
};
