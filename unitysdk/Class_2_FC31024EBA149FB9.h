#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63D18ECF87218619_2.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"

class Class_1_15265A3D7B506C11;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_FC31024EBA149FB9_METHOD_2_65DA0FCD3E81199E_OFFSET UNITYSDK_OFFSET(0xB9A6DC0)
#define CLASS_2_FC31024EBA149FB9_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB9A6F10)
#define CLASS_2_FC31024EBA149FB9_METHOD_2_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0xB9A6E80)
#define CLASS_2_FC31024EBA149FB9_METHOD_2_F20D32506FA3D9B7_OFFSET UNITYSDK_OFFSET(0xB9A6DD0)
#define CLASS_2_FC31024EBA149FB9__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6FA0)

inline static constexpr unsigned int Class_2_FC31024EBA149FB9_TypeDefinitionIndex = 60191;

class Class_2_FC31024EBA149FB9 : public ::Class_1_63D18ECF87218619_2
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_15265A3D7B506C11*>* MFGEADHPLHO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC31024EBA149FB9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::PetDiySlotType Method_2_65DA0FCD3E81199E()
	{
		return ((::RPG::GameCore::PetDiySlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC31024EBA149FB9_METHOD_2_65DA0FCD3E81199E_OFFSET))(this);
	}

	::System::Void Method_2_F20D32506FA3D9B7(::Class_1_15265A3D7B506C11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_2_FC31024EBA149FB9_METHOD_2_F20D32506FA3D9B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0688C2E36BAE128(::Class_1_15265A3D7B506C11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_2_FC31024EBA149FB9_METHOD_2_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC31024EBA149FB9_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
