#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_A692F0EBC85284D5;

#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_0064E3951194B54D_OFFSET UNITYSDK_OFFSET(0x15B4FE60)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_41A65CD6A0F4418F_OFFSET UNITYSDK_OFFSET(0x15B4F3D0)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_B0C5045750951960_OFFSET UNITYSDK_OFFSET(0x15B4F6F0)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_BA788905E539878F_OFFSET UNITYSDK_OFFSET(0x15B4FFB0)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_CCE3FB3DFB067CBB_OFFSET UNITYSDK_OFFSET(0x15B4FD30)
#define CLASS_2_DBD3DACDC098E4CB_METHOD_2_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x15B4F660)
#define CLASS_2_DBD3DACDC098E4CB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4F380)
#define CLASS_2_DBD3DACDC098E4CB__ONTICK_OFFSET UNITYSDK_OFFSET(0x15B4F980)
#define CLASS_2_DBD3DACDC098E4CB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15B4F770)

inline static constexpr unsigned int Class_2_DBD3DACDC098E4CB_TypeDefinitionIndex = 73010;

class Class_2_DBD3DACDC098E4CB : public ::RPG::Client::UIController
{
public:
	::System::Single CJJADBBPGME; // 0x188
	::RPG::GameCore::ScreenTransferMode GIDCEIHBPAG; // 0x18C
	::System::Single APCLDBABACD; // 0x190
	::System::Boolean IAMCONEKFEG; // 0x194

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
