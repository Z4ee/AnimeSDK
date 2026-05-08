#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF8519F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS21_0__GETACCESSORYINFOBYAVATARNAME_B__0_OFFSET UNITYSDK_OFFSET(0xF851A00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS21_0__GETACCESSORYINFOBYAVATARNAME_B__1_OFFSET UNITYSDK_OFFSET(0xF851A80)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c__DisplayClass21_0_TypeDefinitionIndex = 46223;

	class NPCAccessoryUtils___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* subStrings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAccessoryInfoByAvatarName_b__0(::System::String* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS21_0__GETACCESSORYINFOBYAVATARNAME_B__0_OFFSET))(this, n);
		}

		::System::Boolean _GetAccessoryInfoByAvatarName_b__1(::System::String* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__DISPLAYCLASS21_0__GETACCESSORYINFOBYAVATARNAME_B__1_OFFSET))(this, n);
		}
	};
}
