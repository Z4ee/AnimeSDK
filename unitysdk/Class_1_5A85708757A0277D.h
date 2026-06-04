#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_5A85708757A0277D_METHOD_1_B0565E7FAA2BFDD9_OFFSET UNITYSDK_OFFSET(0xDE522A0)
#define CLASS_1_5A85708757A0277D_METHOD_1_EB8D328728936924_OFFSET UNITYSDK_OFFSET(0xDE51B40)
#define CLASS_1_5A85708757A0277D_METHOD_1_F71FC25F69791C6A_OFFSET UNITYSDK_OFFSET(0xDE51E20)
#define CLASS_1_5A85708757A0277D__CTOR_OFFSET UNITYSDK_OFFSET(0xDE523C0)

inline static constexpr unsigned int Class_1_5A85708757A0277D_TypeDefinitionIndex = 60950;

class Class_1_5A85708757A0277D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A85708757A0277D__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_EB8D328728936924(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_5A85708757A0277D_METHOD_1_EB8D328728936924_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_F71FC25F69791C6A(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_5A85708757A0277D_METHOD_1_F71FC25F69791C6A_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_B0565E7FAA2BFDD9(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_5A85708757A0277D_METHOD_1_B0565E7FAA2BFDD9_OFFSET))(this, a1);
	}
};
