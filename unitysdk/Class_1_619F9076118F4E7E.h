#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_619F9076118F4E7E_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x15925B70)
#define CLASS_1_619F9076118F4E7E_SET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x15925B80)
#define CLASS_1_619F9076118F4E7E__CTOR_OFFSET UNITYSDK_OFFSET(0x15925B90)

inline static constexpr unsigned int Class_1_619F9076118F4E7E_TypeDefinitionIndex = 52208;

class Class_1_619F9076118F4E7E : public ::System::Object
{
public:
	::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_619F9076118F4E7E__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfit* get_Outfit()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_619F9076118F4E7E_GET_OUTFIT_OFFSET))(this);
	}

	::System::Void set_Outfit(::RPG::Client::AvatarOutfit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + CLASS_1_619F9076118F4E7E_SET_OUTFIT_OFFSET))(this, a1);
	}
};
