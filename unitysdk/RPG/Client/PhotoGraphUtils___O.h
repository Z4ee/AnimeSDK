#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___O_TypeDefinitionIndex = 64933;

	class PhotoGraphUtils___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0____OnRequestPermission()
		{
			return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils___O_TypeDefinitionIndex)->GetStaticField(0x5640);
		}
	};
}
