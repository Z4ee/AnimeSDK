#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigation; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDCBFDA0)
#define CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS3_0__ISFOCUSED_B__1_OFFSET UNITYSDK_OFFSET(0xDCBFE10)
#define CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS3_0__ISFOCUSED_B__2_OFFSET UNITYSDK_OFFSET(0xDCBFE80)

inline static constexpr unsigned int Class_1_8F908CF6FE611C55___c__DisplayClass3_0_TypeDefinitionIndex = 49832;

class Class_1_8F908CF6FE611C55___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::UINavigation::UINavigation* navigation; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _IsFocused_b__1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS3_0__ISFOCUSED_B__1_OFFSET))(this, a1);
	}

	::System::Void _IsFocused_b__2(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS3_0__ISFOCUSED_B__2_OFFSET))(this, a1);
	}
};
