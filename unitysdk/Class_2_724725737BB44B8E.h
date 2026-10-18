#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"

class Class_1_C3183153408A386B;
namespace RPG::GameCore { class FreeStyleComponent; }

#define CLASS_2_724725737BB44B8E_GET_INFO_OFFSET UNITYSDK_OFFSET(0x162EBA60)
#define CLASS_2_724725737BB44B8E_GET_MODE_OFFSET UNITYSDK_OFFSET(0x162EBA50)
#define CLASS_2_724725737BB44B8E_METHOD_2_6F8D0E1AE17C99D8_OFFSET UNITYSDK_OFFSET(0x162EBC40)
#define CLASS_2_724725737BB44B8E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x162EBC00)
#define CLASS_2_724725737BB44B8E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162EBBC0)
#define CLASS_2_724725737BB44B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x162EBB80)

inline static constexpr unsigned int Class_2_724725737BB44B8E_TypeDefinitionIndex = 57275;

class Class_2_724725737BB44B8E : public ::RPG::GameCore::FreeStyleController
{
public:
	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_724725737BB44B8E__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724725737BB44B8E_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724725737BB44B8E_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724725737BB44B8E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724725737BB44B8E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6F8D0E1AE17C99D8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_724725737BB44B8E_METHOD_2_6F8D0E1AE17C99D8_OFFSET))(this, a1);
	}
};
