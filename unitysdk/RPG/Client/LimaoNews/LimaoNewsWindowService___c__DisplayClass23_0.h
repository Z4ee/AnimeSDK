#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD49A8D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS23_0__SHOWPOSTSUBMITWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0xD49BD10)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWindowService___c__DisplayClass23_0_TypeDefinitionIndex = 79024;

	class LimaoNewsWindowService___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPostData* postData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* _ShowPostSubmitWindow_b__0(::Class_1_5F4D64A4B97E38F9* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS23_0__SHOWPOSTSUBMITWINDOW_B__0_OFFSET))(this, a1);
		}
	};
}
