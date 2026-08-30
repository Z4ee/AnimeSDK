#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x18568690)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_1_OFFSET UNITYSDK_OFFSET(0x185685B0)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_2_OFFSET UNITYSDK_OFFSET(0x18568620)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_91D04EF6CC31055E_OFFSET UNITYSDK_OFFSET(0x18568540)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_D641EE135D66971B_OFFSET UNITYSDK_OFFSET(0x18568710)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_F1F5CF477C14872A_OFFSET UNITYSDK_OFFSET(0x18568790)
#define CLASS_1_4AAB34DEAFC894B3__CTOR_OFFSET UNITYSDK_OFFSET(0x18568890)

inline static constexpr unsigned int Class_1_4AAB34DEAFC894B3_TypeDefinitionIndex = 56514;

class Class_1_4AAB34DEAFC894B3 : public ::System::Object
{
public:
	::System::UInt32 AAGKEBFHLMC; // 0x10
	::System::UInt32 KPAHFGEFKEB; // 0x14
	::System::UInt32 KEDEOHMDAEL; // 0x18
	::System::UInt32 GBJLLAJJEOL; // 0x1C

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
