#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::UINavigation { class UINavigation; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8453D0)
#define CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS2_0__ISFOCUSED_B__1_OFFSET UNITYSDK_OFFSET(0x1A845440)
#define CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS2_0__ISFOCUSED_B__2_OFFSET UNITYSDK_OFFSET(0x1A8454E0)

inline static constexpr unsigned int Class_1_8F908CF6FE611C55___c__DisplayClass2_0_TypeDefinitionIndex = 50204;

class Class_1_8F908CF6FE611C55___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::UINavigation::UINavigation* navigation; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _IsFocused_b__1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS2_0__ISFOCUSED_B__1_OFFSET))(this, a1);
	}

	::System::Void _IsFocused_b__2(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__DISPLAYCLASS2_0__ISFOCUSED_B__2_OFFSET))(this, a1);
	}
};
