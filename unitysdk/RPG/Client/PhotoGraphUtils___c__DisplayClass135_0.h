#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS135_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDB185C0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS135_0___SAVETOGALLERY_B__0_OFFSET UNITYSDK_OFFSET(0xDB199E0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS135_0___SAVETOGALLERY_B__1_OFFSET UNITYSDK_OFFSET(0xDB19A00)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass135_0_TypeDefinitionIndex = 69469;

	class PhotoGraphUtils___c__DisplayClass135_0 : public ::System::Object
	{
	public:
		::System::String* fileName; // 0x10
		::System::String* desc; // 0x18
		::System::Action_1<::System::Boolean>* saveCallback; // 0x20
		::Il2CppArray<::System::Byte>* mediaBytes; // 0x28
		::System::String* title; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS135_0__CTOR_OFFSET))(this);
		}

		::System::Void __SaveToGallery_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS135_0___SAVETOGALLERY_B__0_OFFSET))(this, a1);
		}

		::System::Void __SaveToGallery_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS135_0___SAVETOGALLERY_B__1_OFFSET))(this, a1);
		}
	};
}
