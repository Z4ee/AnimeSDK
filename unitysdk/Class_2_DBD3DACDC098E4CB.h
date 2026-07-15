#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_A692F0EBC85284D5;

#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_0064E3951194B54D_OFFSET UNITYSDK_OFFSET(0x14541F50)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_41A65CD6A0F4418F_OFFSET UNITYSDK_OFFSET(0x14541530)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_B0C5045750951960_OFFSET UNITYSDK_OFFSET(0x14541850)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_BA788905E539878F_OFFSET UNITYSDK_OFFSET(0x145420A0)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_CCE3FB3DFB067CBB_OFFSET UNITYSDK_OFFSET(0x14541E20)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x145417C0)
#define CLASS_2_DBD3DACDC098E4CB__CTOR_OFFSET UNITYSDK_OFFSET(0x145414E0)
#define CLASS_2_DBD3DACDC098E4CB__ONTICK_OFFSET UNITYSDK_OFFSET(0x14541A70)
#define CLASS_2_DBD3DACDC098E4CB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x145418D0)

inline static constexpr unsigned int Class_2_DBD3DACDC098E4CB_TypeDefinitionIndex = 69751;

class Class_2_DBD3DACDC098E4CB : public ::RPG::Client::UIController
{
public:
	::System::Boolean Field_2_0; // 0x180
	::System::Single Field_2_1; // 0x184
	::System::Single Field_2_2; // 0x188
	::RPG::GameCore::ScreenTransferMode Field_2_3; // 0x18C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41A65CD6A0F4418F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB_METHOD_2_41A65CD6A0F4418F_OFFSET))(this, a1);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB__ONTICK_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_2_B0C5045750951960()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB_METHOD_2_B0C5045750951960_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_CCE3FB3DFB067CBB()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB_METHOD_2_CCE3FB3DFB067CBB_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_0064E3951194B54D(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB_METHOD_2_0064E3951194B54D_OFFSET))(this, a1);
	}

	::System::Single Method_2_BA788905E539878F(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB_METHOD_2_BA788905E539878F_OFFSET))(this, a1, a2);
	}

	::Class_2_A692F0EBC85284D5* Method_2_DEDD31AF6F4E4818()
	{
		return ((::Class_2_A692F0EBC85284D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBD3DACDC098E4CB_METHOD_2_DEDD31AF6F4E4818_OFFSET))(this);
	}
};
