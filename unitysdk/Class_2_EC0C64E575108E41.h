#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"

class Class_1_C3183153408A386B;
namespace RPG::GameCore { class FreeStyleComponent; }

#define CLASS_2_EC0C64E575108E41_GET_INFO_OFFSET UNITYSDK_OFFSET(0x15F14350)
#define CLASS_2_EC0C64E575108E41_GET_MODE_OFFSET UNITYSDK_OFFSET(0x15F14340)
#define CLASS_2_EC0C64E575108E41_METHOD_2_99541E953C543B01_OFFSET UNITYSDK_OFFSET(0x15F14530)
#define CLASS_2_EC0C64E575108E41_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15F144F0)
#define CLASS_2_EC0C64E575108E41_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F144B0)
#define CLASS_2_EC0C64E575108E41__CTOR_OFFSET UNITYSDK_OFFSET(0x15F14470)

inline static constexpr unsigned int Class_2_EC0C64E575108E41_TypeDefinitionIndex = 54710;

class Class_2_EC0C64E575108E41 : public ::RPG::GameCore::FreeStyleController
{
public:
	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EC0C64E575108E41__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC0C64E575108E41_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC0C64E575108E41_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC0C64E575108E41_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC0C64E575108E41_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_99541E953C543B01(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EC0C64E575108E41_METHOD_2_99541E953C543B01_OFFSET))(this, a1);
	}
};
