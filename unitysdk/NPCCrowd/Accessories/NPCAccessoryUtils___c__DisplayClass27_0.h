#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1127D590)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS27_0__GETACCESSORYINFOBYAVATARNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1127D5A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS27_0__GETACCESSORYINFOBYAVATARNAME_B__1_OFFSET UNITYSDK_OFFSET(0x1127D620)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c__DisplayClass27_0_TypeDefinitionIndex = 72019;

	class NPCAccessoryUtils___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* subStrings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAccessoryInfoByAvatarName_b__0(::System::String* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS27_0__GETACCESSORYINFOBYAVATARNAME_B__0_OFFSET))(this, n);
		}

		::System::Boolean _GetAccessoryInfoByAvatarName_b__1(::System::String* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS27_0__GETACCESSORYINFOBYAVATARNAME_B__1_OFFSET))(this, n);
		}
	};
}
