#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_CCA3DEFC2BE2E7E9_METHOD_1_742C5F75B6A79647_OFFSET UNITYSDK_OFFSET(0x17DD27E0)
#define CLASS_1_CCA3DEFC2BE2E7E9__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD27D0)

inline static constexpr unsigned int Class_1_CCA3DEFC2BE2E7E9_TypeDefinitionIndex = 62612;

class Class_1_CCA3DEFC2BE2E7E9 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GAJHLFGLCCK; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_CCA3DEFC2BE2E7E9__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_742C5F75B6A79647(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCA3DEFC2BE2E7E9_METHOD_1_742C5F75B6A79647_OFFSET))(this, a1);
	}
};
