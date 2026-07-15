#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_837;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_02A7EFBC6E0B5636_METHOD_1_064EAF58C8982CEE_OFFSET UNITYSDK_OFFSET(0x15E71730)
#define CLASS_1_02A7EFBC6E0B5636_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15E71830)
#define CLASS_1_02A7EFBC6E0B5636_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x15E71880)
#define CLASS_1_02A7EFBC6E0B5636__CTOR_OFFSET UNITYSDK_OFFSET(0x15E719E0)

inline static constexpr unsigned int Class_1_02A7EFBC6E0B5636_TypeDefinitionIndex = 62654;

class Class_1_02A7EFBC6E0B5636 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02A7EFBC6E0B5636__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_064EAF58C8982CEE(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_02A7EFBC6E0B5636_METHOD_1_064EAF58C8982CEE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02A7EFBC6E0B5636_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_837* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_837*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02A7EFBC6E0B5636_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
