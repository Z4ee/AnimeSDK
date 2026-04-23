#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_15656D798AFDF6B2_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x96F4050)
#define CLASS_1_15656D798AFDF6B2_SET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x96F4060)
#define CLASS_1_15656D798AFDF6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x96F4070)

inline static constexpr unsigned int Class_1_15656D798AFDF6B2_TypeDefinitionIndex = 47931;

class Class_1_15656D798AFDF6B2 : public ::System::Object
{
public:
	::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15656D798AFDF6B2__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfit* get_Outfit()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15656D798AFDF6B2_GET_OUTFIT_OFFSET))(this);
	}

	::System::Void set_Outfit(::RPG::Client::AvatarOutfit* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + CLASS_1_15656D798AFDF6B2_SET_OUTFIT_OFFSET))(this, value);
	}
};
