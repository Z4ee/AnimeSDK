#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_625068BFCA65C354;
class Class_2_81A5344B7B5B2DAF;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_764C2D7D755EF63E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11951740)
#define CLASS_2_764C2D7D755EF63E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11951880)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_2FF79950A677C64B_OFFSET UNITYSDK_OFFSET(0x1194F240)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_3D813D05865A080E_OFFSET UNITYSDK_OFFSET(0x11950840)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1194FE50)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1194F450)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x11950110)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x1194FA90)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1194EBB0)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11951680)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x119516E0)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11951620)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x11950280)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x119512A0)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_BDAC3726B2B73008_OFFSET UNITYSDK_OFFSET(0x11950910)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1194FA00)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_D737CD2779D51A4E_1_OFFSET UNITYSDK_OFFSET(0x11950C80)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_D737CD2779D51A4E_2_OFFSET UNITYSDK_OFFSET(0x11950E60)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x11950AA0)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_DC10435BBECEAA26_OFFSET UNITYSDK_OFFSET(0x1194F560)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_E4F1C8A9FE0B98DF_1_OFFSET UNITYSDK_OFFSET(0x119514E0)
#define CLASS_2_764C2D7D755EF63E_METHOD_2_E4F1C8A9FE0B98DF_OFFSET UNITYSDK_OFFSET(0x11951040)
#define CLASS_2_764C2D7D755EF63E__CTOR_OFFSET UNITYSDK_OFFSET(0x119519A0)
#define CLASS_2_764C2D7D755EF63E__ONBIND_OFFSET UNITYSDK_OFFSET(0x1194ED10)
#define CLASS_2_764C2D7D755EF63E__ONTICK_OFFSET UNITYSDK_OFFSET(0x1194EB00)
#define CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11951C00)
#define CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11951C60)
#define CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11951BA0)
#define CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x11951B30)

inline static constexpr unsigned int Class_2_764C2D7D755EF63E_TypeDefinitionIndex = 59192;

class Class_2_764C2D7D755EF63E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Button* Field_2_4; // 0x60
	::System::Collections::Generic::List_1<::Class_2_625068BFCA65C354*>* Field_2_8; // 0x68
	::UnityEngine::UI::Button* Field_2_6; // 0x70
	::UnityEngine::UI::Button* Field_2_5; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80
	::System::Collections::Generic::List_1<::Class_2_81A5344B7B5B2DAF*>* Field_2_9; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* Field_2_10; // 0x90
	::UnityEngine::Transform* Field_2_0; // 0x98
	::UnityEngine::Transform* Field_2_1; // 0xA0
	::UnityEngine::Transform* Field_2_3; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_11; // 0xB0
	::System::Boolean Field_2_7; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E__CTOR_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_2FF79950A677C64B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_2FF79950A677C64B_OFFSET))(this);
	}

	::System::Void Method_2_DC10435BBECEAA26()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_DC10435BBECEAA26_OFFSET))(this);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Int32 Method_2_3D813D05865A080E(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_3D813D05865A080E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_BDAC3726B2B73008(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_BDAC3726B2B73008_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_D737CD2779D51A4E_1_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_D737CD2779D51A4E_2_OFFSET))(this);
	}

	::System::Void Method_2_E4F1C8A9FE0B98DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_E4F1C8A9FE0B98DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4F1C8A9FE0B98DF_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_E4F1C8A9FE0B98DF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_764C2D7D755EF63E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
