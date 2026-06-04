#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_B7039134DC553D20_Class_1_411CE7DBE5F749E8;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_11CACFD5BFA626A2_OFFSET UNITYSDK_OFFSET(0x135219A0)
#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13521250)
#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x135211C0)
#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_5C0F92F807DE3F58_OFFSET UNITYSDK_OFFSET(0x13521400)
#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_B6B6DFCC21EB9868_OFFSET UNITYSDK_OFFSET(0x135212F0)
#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x135212A0)
#define CLASS_1_CFF7FC5CD9C1D292_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13521170)
#define CLASS_1_CFF7FC5CD9C1D292__CTOR_OFFSET UNITYSDK_OFFSET(0x13520EE0)

inline static constexpr unsigned int Class_1_CFF7FC5CD9C1D292_TypeDefinitionIndex = 70344;

class Class_1_CFF7FC5CD9C1D292 : public ::System::Object
{
public:
	::Class_1_B7039134DC553D20_Class_1_411CE7DBE5F749E8* Field_1_0; // 0x10
	::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B6B6DFCC21EB9868(::System::Boolean a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_B6B6DFCC21EB9868_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_11CACFD5BFA626A2(::System::Boolean a1, ::RPG::GameCore::HipplenMiniGameType a2, ::RPG::GameCore::HipplenGameGradeType a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::HipplenMiniGameType, ::RPG::GameCore::HipplenGameGradeType, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_11CACFD5BFA626A2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_B7039134DC553D20_Class_1_411CE7DBE5F749E8* Method_1_5C0F92F807DE3F58()
	{
		return ((::Class_1_B7039134DC553D20_Class_1_411CE7DBE5F749E8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_5C0F92F807DE3F58_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFF7FC5CD9C1D292_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
