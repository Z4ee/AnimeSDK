#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WindowsHelper_EnumWindowsCallBack; }

namespace RPG::Client
{
	inline static constexpr unsigned int WindowsHelper___O_TypeDefinitionIndex = 60047;

	class WindowsHelper___O : public ::System::Object
	{
	public:
		static ::RPG::Client::WindowsHelper_EnumWindowsCallBack** StaticGet__0____EnumWindCallback()
		{
			return (::RPG::Client::WindowsHelper_EnumWindowsCallBack**)Il2CppClass::FromTypeDefinitionIndex(WindowsHelper___O_TypeDefinitionIndex)->GetStaticField(0x37A90);
		}
	};
}
