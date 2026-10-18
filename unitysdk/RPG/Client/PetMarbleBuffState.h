#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PETMARBLEBUFFSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE2F30)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleBuffState_TypeDefinitionIndex = 65814;

	class PetMarbleBuffState : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID HintTitle; // 0x18
		::RPG::Client::TextID HintText; // 0x28
		::System::UInt32 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEBUFFSTATE__CTOR_OFFSET))(this);
		}
	};
}
