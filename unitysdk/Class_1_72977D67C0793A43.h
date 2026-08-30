#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_72977D67C0793A43__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC0320)

inline static constexpr unsigned int Class_1_72977D67C0793A43_TypeDefinitionIndex = 80671;

class Class_1_72977D67C0793A43 : public ::System::Object
{
public:
	::System::Action_1<::RPG::GameCore::B51RacingPartType>* ONPCPLEECCG; // 0x10
	::System::String* OMPFNKJCGLK; // 0x18
	::System::Boolean JNOCABEMEEM; // 0x20
	::System::Boolean PAKGBHILIGA; // 0x21
	::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x24
	::RPG::Client::TextID GHCEBCDOBKK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72977D67C0793A43__CTOR_OFFSET))(this);
	}
};
