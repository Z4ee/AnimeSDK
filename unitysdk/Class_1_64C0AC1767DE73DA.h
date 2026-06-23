#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitBGSpineSequence; }
namespace Spine::Unity { class SkeletonGraphic; }

#define CLASS_1_64C0AC1767DE73DA_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x16067540)
#define CLASS_1_64C0AC1767DE73DA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16067760)
#define CLASS_1_64C0AC1767DE73DA_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x160677B0)
#define CLASS_1_64C0AC1767DE73DA__CTOR_OFFSET UNITYSDK_OFFSET(0x160673F0)

inline static constexpr unsigned int Class_1_64C0AC1767DE73DA_TypeDefinitionIndex = 43677;

class Class_1_64C0AC1767DE73DA : public ::System::Object
{
public:
	::MoleMole::ActivitBGSpineSequence* Field_1_0; // 0x10
	::Spine::Unity::SkeletonGraphic* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::ActivitBGSpineSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivitBGSpineSequence*))((::PBYTE)hIl2Cpp + CLASS_1_64C0AC1767DE73DA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C0AC1767DE73DA_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C0AC1767DE73DA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C0AC1767DE73DA_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}
};
