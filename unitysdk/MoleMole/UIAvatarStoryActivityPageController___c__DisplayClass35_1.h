#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_437B55358CB4F0A3;
class Class_3_AE02BC8285203464_43;

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18016B50)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__ONENTERSPECIALENTRY_B__1_OFFSET UNITYSDK_OFFSET(0x18016B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController___c__DisplayClass35_1_TypeDefinitionIndex = 50991;

	class UIAvatarStoryActivityPageController___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::Class_1_437B55358CB4F0A3* levelData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnterSpecialEntry_b__1(::Class_3_AE02BC8285203464_43* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_43*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__ONENTERSPECIALENTRY_B__1_OFFSET))(this, match);
		}
	};
}
