#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_28086ED136EF25DA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAEF1200)
#define CLASS_1_28086ED136EF25DA_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0xAEF1250)
#define CLASS_1_28086ED136EF25DA_METHOD_1_8F0DA7878B0A9979_OFFSET UNITYSDK_OFFSET(0xAEF1140)
#define CLASS_1_28086ED136EF25DA__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF13B0)

inline static constexpr unsigned int Class_1_28086ED136EF25DA_TypeDefinitionIndex = 61312;

class Class_1_28086ED136EF25DA : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28086ED136EF25DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F0DA7878B0A9979(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_28086ED136EF25DA_METHOD_1_8F0DA7878B0A9979_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28086ED136EF25DA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_799* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28086ED136EF25DA_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
