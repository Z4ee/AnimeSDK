#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3C7B0727419C065_METHOD_1_2ABED86F73FF5BC5_OFFSET UNITYSDK_OFFSET(0x186ABAD0)
#define CLASS_1_F3C7B0727419C065_METHOD_1_BE3C6A087FF493A4_OFFSET UNITYSDK_OFFSET(0x186AB9E0)
#define CLASS_1_F3C7B0727419C065__CTOR_OFFSET UNITYSDK_OFFSET(0x186ABB50)

inline static constexpr unsigned int Class_1_F3C7B0727419C065_TypeDefinitionIndex = 63270;

class Class_1_F3C7B0727419C065 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C7B0727419C065__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Method_1_BE3C6A087FF493A4()
	{
		return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C7B0727419C065_METHOD_1_BE3C6A087FF493A4_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_2ABED86F73FF5BC5(::RPG::Client::AvatarRoleType a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + CLASS_1_F3C7B0727419C065_METHOD_1_2ABED86F73FF5BC5_OFFSET))(this, a1);
	}
};
