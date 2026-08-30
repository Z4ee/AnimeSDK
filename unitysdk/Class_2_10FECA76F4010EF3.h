#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_7FA8A4A2E2A406DF;
class Class_2_E756D2898F8156A5;
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

#define CLASS_2_10FECA76F4010EF3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x185348B0)
#define CLASS_2_10FECA76F4010EF3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18534A30)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0x18532860)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_0868EF727040C390_1_OFFSET UNITYSDK_OFFSET(0x18533F50)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_0868EF727040C390_2_OFFSET UNITYSDK_OFFSET(0x185340D0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x18533DD0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x185330D0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18532BF0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x18532030)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x18533450)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_81D45978B8E3E7F2_OFFSET UNITYSDK_OFFSET(0x18533C70)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_96A39C28104D76E1_OFFSET UNITYSDK_OFFSET(0x18534250)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_96AD5F7BC3D76517_OFFSET UNITYSDK_OFFSET(0x185345F0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x185327B0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_BBE998AEA7D03E94_OFFSET UNITYSDK_OFFSET(0x18532600)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x18532C60)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x185332D0)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x18534790)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x18534820)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18534700)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_F84EDFA9C4C77EA5_OFFSET UNITYSDK_OFFSET(0x18533A80)
#define CLASS_2_10FECA76F4010EF3_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x18534420)
#define CLASS_2_10FECA76F4010EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x18534B90)
#define CLASS_2_10FECA76F4010EF3__ONBIND_OFFSET UNITYSDK_OFFSET(0x185321B0)
#define CLASS_2_10FECA76F4010EF3__ONTICK_OFFSET UNITYSDK_OFFSET(0x18531F80)

inline static constexpr unsigned int Class_2_10FECA76F4010EF3_TypeDefinitionIndex = 72205;

class Class_2_10FECA76F4010EF3 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* JHIPBEPDLKI; // 0x60
	::UnityEngine::UI::Button* HAEBAKCNIAD; // 0x68
	::UnityEngine::Transform* KKPDEDKKPIO; // 0x70
	::UnityEngine::UI::Button* GFCOJPHEAOC; // 0x78
	::System::Collections::Generic::List_1<::Class_2_7FA8A4A2E2A406DF*>* LBMILLAKLKI; // 0x80
	::UnityEngine::Transform* CLAIMGMCBDN; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AIAJPIMPMOF; // 0x90
	::System::Collections::Generic::List_1<::Class_2_E756D2898F8156A5*>* KMLNDLEGKAE; // 0x98
	::UnityEngine::Transform* LECOCIDLOJK; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* HIMNHBLPLME; // 0xA8
	::UnityEngine::UI::Button* AJMKJLBBHJE; // 0xB0
	::System::Boolean GMMCCPKCEKK; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3__CTOR_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_BBE998AEA7D03E94()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_BBE998AEA7D03E94_OFFSET))(this);
	}

	::System::Void Method_2_0094A08E076C3CCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_0094A08E076C3CCD_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Int32 Method_2_F84EDFA9C4C77EA5(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_F84EDFA9C4C77EA5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_81D45978B8E3E7F2(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_81D45978B8E3E7F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_0868EF727040C390_1_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_0868EF727040C390_2_OFFSET))(this);
	}

	::System::Void Method_2_96A39C28104D76E1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_96A39C28104D76E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_2_96AD5F7BC3D76517(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_96AD5F7BC3D76517_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10FECA76F4010EF3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
