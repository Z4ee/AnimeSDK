#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }

#define CLASS_1_152440782683448A_METHOD_1_9F79887AA40EED35_OFFSET UNITYSDK_OFFSET(0x950A6E0)
#define CLASS_1_152440782683448A__CTOR_OFFSET UNITYSDK_OFFSET(0x950A780)

inline static constexpr unsigned int Class_1_152440782683448A_TypeDefinitionIndex = 57742;

class Class_1_152440782683448A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_152440782683448A__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarProxy* Method_1_9F79887AA40EED35(::RPG::AvatarSystem::IAvatar*& a1)
	{
		return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*&))((::PBYTE)hIl2Cpp + CLASS_1_152440782683448A_METHOD_1_9F79887AA40EED35_OFFSET))(this, a1);
	}
};
