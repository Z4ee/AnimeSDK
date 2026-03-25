#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS137_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F69A60)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS137_0___SAVETOGALLERY_B__0_OFFSET UNITYSDK_OFFSET(0x9F6AE10)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS137_0___SAVETOGALLERY_B__1_OFFSET UNITYSDK_OFFSET(0x9F6AE30)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass137_0_TypeDefinitionIndex = 56773;

	class PhotoGraphUtils___c__DisplayClass137_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* saveCallback; // 0x10
		::System::String* desc; // 0x18
		::Il2CppArray<::System::Byte>* mediaBytes; // 0x20
		::System::String* title; // 0x28
		::System::String* fileName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS137_0__CTOR_OFFSET))(this);
		}

		::System::Void __SaveToGallery_b__0(::System::Boolean saveSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS137_0___SAVETOGALLERY_B__0_OFFSET))(this, saveSuccess);
		}

		::System::Void __SaveToGallery_b__1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS137_0___SAVETOGALLERY_B__1_OFFSET))(this, isOk);
		}
	};
}
