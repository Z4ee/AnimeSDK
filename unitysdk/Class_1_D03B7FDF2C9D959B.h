#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }

#define CLASS_1_D03B7FDF2C9D959B_METHOD_1_195F27B2213874AC_1_OFFSET UNITYSDK_OFFSET(0xA543C30)
#define CLASS_1_D03B7FDF2C9D959B_METHOD_1_195F27B2213874AC_2_OFFSET UNITYSDK_OFFSET(0xA543CE0)
#define CLASS_1_D03B7FDF2C9D959B_METHOD_1_195F27B2213874AC_OFFSET UNITYSDK_OFFSET(0xA543B80)
#define CLASS_1_D03B7FDF2C9D959B__CTOR_OFFSET UNITYSDK_OFFSET(0xA543D90)

inline static constexpr unsigned int Class_1_D03B7FDF2C9D959B_TypeDefinitionIndex = 58552;

class Class_1_D03B7FDF2C9D959B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D03B7FDF2C9D959B__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarProxy* Method_1_195F27B2213874AC(::Struct_2_019938BC9C50B169_2& a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_D03B7FDF2C9D959B_METHOD_1_195F27B2213874AC_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarProxy* Method_1_195F27B2213874AC_1(::Struct_2_019938BC9C50B169_1& a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_D03B7FDF2C9D959B_METHOD_1_195F27B2213874AC_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarProxy* Method_1_195F27B2213874AC_2(::Struct_2_019938BC9C50B169_2& a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_D03B7FDF2C9D959B_METHOD_1_195F27B2213874AC_2_OFFSET))(this, a1, a2);
	}
};
