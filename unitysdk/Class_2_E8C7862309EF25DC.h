#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E8C7862309EF25DC_IdleLiveBossHPVisibilitySource.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_18B9B3DE0FF2C630;
class Class_2_19AD1CB994DC4847;
class Class_2_DF912921EB86ACC5_1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E8C7862309EF25DC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x169F62B0)
#define CLASS_2_E8C7862309EF25DC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x169F63F0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_19D0A7EEC2DC49A3_OFFSET UNITYSDK_OFFSET(0x169F4FB0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x169F6070)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x169F4E30)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_614288621F812149_OFFSET UNITYSDK_OFFSET(0x169F4D30)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_6FFF4E44B49A8A7C_OFFSET UNITYSDK_OFFSET(0x169F5390)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x169F61B0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_9F77613D8501BD62_OFFSET UNITYSDK_OFFSET(0x169F5EB0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x169F59A0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x169F52F0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x169F5CA0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_BB4E8EF38FBBC39F_OFFSET UNITYSDK_OFFSET(0x169F5FA0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x169F60C0)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_D7FE70D3F6776065_OFFSET UNITYSDK_OFFSET(0x169F4D80)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0x169F5540)
#define CLASS_2_E8C7862309EF25DC_METHOD_2_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0x169F5190)
#define CLASS_2_E8C7862309EF25DC__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4C60)
#define CLASS_2_E8C7862309EF25DC__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x169F5600)
#define CLASS_2_E8C7862309EF25DC__ONTICK_OFFSET UNITYSDK_OFFSET(0x169F5940)
#define CLASS_2_E8C7862309EF25DC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x169F5C30)

inline static constexpr unsigned int Class_2_E8C7862309EF25DC_TypeDefinitionIndex = 68487;

class Class_2_E8C7862309EF25DC : public ::RPG::Client::UIController
{
public:
	::Class_2_DF912921EB86ACC5_1* Field_2_0; // 0x180
	::RPG::GameCore::GameEntity* Field_2_1; // 0x188
	::Class_2_19AD1CB994DC4847* Field_2_2; // 0x190
	::UnityEngine::UI::Text* Field_2_3; // 0x198
	::System::Collections::Generic::Dictionary_2<::Class_2_E8C7862309EF25DC_IdleLiveBossHPVisibilitySource, ::System::Boolean>* Field_2_4; // 0x1A0
	::Class_2_18B9B3DE0FF2C630* Field_2_5; // 0x1A8
	::UnityEngine::Vector3 Field_2_6; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_614288621F812149_OFFSET))(this);
	}

	::System::Void Method_2_D7FE70D3F6776065(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_D7FE70D3F6776065_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Single Method_2_19D0A7EEC2DC49A3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_19D0A7EEC2DC49A3_OFFSET))(this);
	}

	::System::Void Method_2_E81CEED1B22DE2BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_E81CEED1B22DE2BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_6FFF4E44B49A8A7C()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_6FFF4E44B49A8A7C_OFFSET))(this);
	}

	::System::Void Method_2_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_2_9F77613D8501BD62(::RPG::GameCore::IdleLiveUiVisibleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_9F77613D8501BD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB4E8EF38FBBC39F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_BB4E8EF38FBBC39F_OFFSET))(this, a1);
	}

	::Class_2_19AD1CB994DC4847* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_19AD1CB994DC4847*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C7862309EF25DC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
