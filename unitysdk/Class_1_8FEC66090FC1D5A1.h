#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_8FEC66090FC1D5A1_APPLY_OFFSET UNITYSDK_OFFSET(0x1935E080)
#define CLASS_1_8FEC66090FC1D5A1_COMBINE_OFFSET UNITYSDK_OFFSET(0x1935E110)
#define CLASS_1_8FEC66090FC1D5A1_RESET_OFFSET UNITYSDK_OFFSET(0x1935E170)
#define CLASS_1_8FEC66090FC1D5A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1935E070)

inline static constexpr unsigned int Class_1_8FEC66090FC1D5A1_TypeDefinitionIndex = 59935;

class Class_1_8FEC66090FC1D5A1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8FEC66090FC1D5A1__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Apply(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8FEC66090FC1D5A1_APPLY_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* Combine(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8FEC66090FC1D5A1_COMBINE_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FEC66090FC1D5A1_RESET_OFFSET))(this);
	}
};
