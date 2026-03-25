#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_A692F0EBC85284D5;

#define CLASS_2_2FE90C7827206D3B_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0x1196C200)
#define CLASS_2_2FE90C7827206D3B_METHOD_2_12B87CD4A16A5E69_OFFSET UNITYSDK_OFFSET(0x1196C9F0)
#define CLASS_2_2FE90C7827206D3B_METHOD_2_39ED74AFE13D5EE1_OFFSET UNITYSDK_OFFSET(0x1196C800)
#define CLASS_2_2FE90C7827206D3B_METHOD_2_B0C5045750951960_OFFSET UNITYSDK_OFFSET(0x1196C440)
#define CLASS_2_2FE90C7827206D3B_METHOD_2_B4A91A4ACDF9D75F_OFFSET UNITYSDK_OFFSET(0x1196C3F0)
#define CLASS_2_2FE90C7827206D3B_METHOD_2_DD902BF0E26D13DF_OFFSET UNITYSDK_OFFSET(0x1196C8E0)
#define CLASS_2_2FE90C7827206D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1196C1B0)
#define CLASS_2_2FE90C7827206D3B__ONTICK_OFFSET UNITYSDK_OFFSET(0x1196C5B0)
#define CLASS_2_2FE90C7827206D3B__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1196C4C0)
#define CLASS_2_2FE90C7827206D3B___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1196CB60)
#define CLASS_2_2FE90C7827206D3B___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1196CB00)

inline static constexpr unsigned int Class_2_2FE90C7827206D3B_TypeDefinitionIndex = 59912;

class Class_2_2FE90C7827206D3B : public ::RPG::Client::UIController
{
public:
	::RPG::GameCore::ScreenTransferMode Field_2_1; // 0x180
	::System::Single Field_2_2; // 0x184
	::System::Single Field_2_3; // 0x188
	::System::Boolean Field_2_0; // 0x18C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0EBCBF3C29D8B33D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B_METHOD_2_0EBCBF3C29D8B33D_OFFSET))(this, a1);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B__ONTICK_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_2_B0C5045750951960()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B_METHOD_2_B0C5045750951960_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_39ED74AFE13D5EE1()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B_METHOD_2_39ED74AFE13D5EE1_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_DD902BF0E26D13DF(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B_METHOD_2_DD902BF0E26D13DF_OFFSET))(this, a1);
	}

	::System::Single Method_2_12B87CD4A16A5E69(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B_METHOD_2_12B87CD4A16A5E69_OFFSET))(this, a1, a2);
	}

	::Class_2_A692F0EBC85284D5* Method_2_B4A91A4ACDF9D75F()
	{
		return ((::Class_2_A692F0EBC85284D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B_METHOD_2_B4A91A4ACDF9D75F_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FE90C7827206D3B___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
