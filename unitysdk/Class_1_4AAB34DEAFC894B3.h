#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x14312530)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_1_OFFSET UNITYSDK_OFFSET(0x14312450)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_2_OFFSET UNITYSDK_OFFSET(0x143124C0)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_OFFSET UNITYSDK_OFFSET(0x143123E0)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_D641EE135D66971B_OFFSET UNITYSDK_OFFSET(0x143125B0)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_F1F5CF477C14872A_OFFSET UNITYSDK_OFFSET(0x14312630)
#define CLASS_1_4AAB34DEAFC894B3__CTOR_OFFSET UNITYSDK_OFFSET(0x14312720)

inline static constexpr unsigned int Class_1_4AAB34DEAFC894B3_TypeDefinitionIndex = 52590;

class Class_1_4AAB34DEAFC894B3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_91D04EF6CC31055E()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_91D04EF6CC31055E_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_91D04EF6CC31055E_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::RPG::GameCore::AvatarBaseType Method_1_D641EE135D66971B()
	{
		return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_D641EE135D66971B_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* Method_1_F1F5CF477C14872A()
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_F1F5CF477C14872A_OFFSET))(this);
	}
};
