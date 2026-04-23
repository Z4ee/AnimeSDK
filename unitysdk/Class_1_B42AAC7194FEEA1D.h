#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_B42AAC7194FEEA1D_APPLY_OFFSET UNITYSDK_OFFSET(0x12A0F900)
#define CLASS_1_B42AAC7194FEEA1D_COMBINE_OFFSET UNITYSDK_OFFSET(0x12A0F980)
#define CLASS_1_B42AAC7194FEEA1D_RESET_OFFSET UNITYSDK_OFFSET(0x12A0FA00)
#define CLASS_1_B42AAC7194FEEA1D__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0F8F0)

inline static constexpr unsigned int Class_1_B42AAC7194FEEA1D_TypeDefinitionIndex = 57813;

class Class_1_B42AAC7194FEEA1D : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B42AAC7194FEEA1D__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Apply(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B42AAC7194FEEA1D_APPLY_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* Combine(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B42AAC7194FEEA1D_COMBINE_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42AAC7194FEEA1D_RESET_OFFSET))(this);
	}
};
