#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB4860)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS44_0___POSTTOMAINTHREAD_B__0_OFFSET UNITYSDK_OFFSET(0x1ACB5ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager___c__DisplayClass44_0_TypeDefinitionIndex = 61344;

	class TextmapDownloadManager___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void __PostToMainThread_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS44_0___POSTTOMAINTHREAD_B__0_OFFSET))(this, a1);
		}
	};
}
