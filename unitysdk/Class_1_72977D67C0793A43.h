#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_72977D67C0793A43__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C1B80)

inline static constexpr unsigned int Class_1_72977D67C0793A43_TypeDefinitionIndex = 80672;

class Class_1_72977D67C0793A43 : public ::System::Object
{
public:
	::System::String* OMPFNKJCGLK; // 0x10
	::System::Action_1<::RPG::GameCore::B51RacingPartType>* ONPCPLEECCG; // 0x18
	::RPG::Client::TextID GHCEBCDOBKK; // 0x20
	::System::Boolean PAKGBHILIGA; // 0x30
	::System::Boolean JNOCABEMEEM; // 0x31
	::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72977D67C0793A43__CTOR_OFFSET))(this);
	}
};
