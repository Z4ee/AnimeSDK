#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC8C6BD0)
#define RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C76A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfImgPath_TypeDefinitionIndex = 63583;

	class SilverWolfImgPath : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
