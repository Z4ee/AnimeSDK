#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ChangeSource.h"
#include "unitysdk/System/Object.h"

class Class_1_463786FEF28056CE;
class Class_1_5138A02229B03469;
class Class_1_7EEA5E93C4D09894;
class Class_1_80ED5C578A50E90A;
class Class_1_902E15B16155CC1C;
class Class_1_9525838A9E2C7378;
class Class_1_B13340E145F0BF93;
class Class_2_465A9E6CC2B0EF21;
class Class_2_FEC6BB1C109A969B_5;
class Class_3_E7D29F43FB80184D;
class FiveDimRenderingPanelRuntime;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::TeamTowers { class TeamTowersGamePlayerDamageChangedMessage; }
namespace RPG::Client::TeamTowers { class TeamTowersGameViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersPVPService; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DEBCF596D13A3389_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16614A00)
#define CLASS_1_DEBCF596D13A3389_GET_BOSSROOT_OFFSET UNITYSDK_OFFSET(0x16617D90)
#define CLASS_1_DEBCF596D13A3389_GET_EDGEROOT_OFFSET UNITYSDK_OFFSET(0x16617E30)
#define CLASS_1_DEBCF596D13A3389_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x16617DF0)
#define CLASS_1_DEBCF596D13A3389_GET_GUIDEEFFECTROOT_OFFSET UNITYSDK_OFFSET(0x16617DD0)
#define CLASS_1_DEBCF596D13A3389_GET_LEFTEDGEROOT_OFFSET UNITYSDK_OFFSET(0x16617E50)
#define CLASS_1_DEBCF596D13A3389_GET_LEFTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x16617E90)
#define CLASS_1_DEBCF596D13A3389_GET_LEFTTOWERROOT_OFFSET UNITYSDK_OFFSET(0x16617D70)
#define CLASS_1_DEBCF596D13A3389_GET_PREVIEWLINEROOT_OFFSET UNITYSDK_OFFSET(0x16617DB0)
#define CLASS_1_DEBCF596D13A3389_GET_RIGHTEDGEROOT_OFFSET UNITYSDK_OFFSET(0x16617E70)
#define CLASS_1_DEBCF596D13A3389_GET_RIGHTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x16617EB0)
#define CLASS_1_DEBCF596D13A3389_GET_RIGHTTOWERROOT_OFFSET UNITYSDK_OFFSET(0x16617D50)
#define CLASS_1_DEBCF596D13A3389_GET_ROBOT3DROOT_OFFSET UNITYSDK_OFFSET(0x16617E10)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_07CF886D7D44418E_OFFSET UNITYSDK_OFFSET(0x16614E30)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x16617F70)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x16618050)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16617ED0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_19F7C11EE8172879_OFFSET UNITYSDK_OFFSET(0x16616940)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_1A81F893CE468BD5_OFFSET UNITYSDK_OFFSET(0x166153D0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x16616B60)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_25E34EB2601C4BE2_OFFSET UNITYSDK_OFFSET(0x16617510)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_295EDDB7CDF3B3DC_OFFSET UNITYSDK_OFFSET(0x16617D00)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_3F09B037FEDFC1C3_OFFSET UNITYSDK_OFFSET(0x16615540)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_4AF35CCF7882E598_OFFSET UNITYSDK_OFFSET(0x16614EB0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x166176C0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_4F548348F29E93D9_1_OFFSET UNITYSDK_OFFSET(0x16617950)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_4F548348F29E93D9_OFFSET UNITYSDK_OFFSET(0x166164A0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_4F65747BD73CCFB3_OFFSET UNITYSDK_OFFSET(0x166174B0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_6E85ACE22F91BA12_OFFSET UNITYSDK_OFFSET(0x16617160)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_73800AB4E326F24E_OFFSET UNITYSDK_OFFSET(0x16615060)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0x166154F0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_7646FFE662147970_2_OFFSET UNITYSDK_OFFSET(0x16616BC0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x166152C0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_8AB67EADA91947EF_OFFSET UNITYSDK_OFFSET(0x16615100)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_9C5413B852AFF2CC_OFFSET UNITYSDK_OFFSET(0x166172A0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_A2732134BDAF98B9_OFFSET UNITYSDK_OFFSET(0x16617210)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_A29971596E1E4F55_OFFSET UNITYSDK_OFFSET(0x16616E80)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0x16615250)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16617FE0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_AF624F652095B50D_OFFSET UNITYSDK_OFFSET(0x16615310)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_AF7286335DA1FDA1_OFFSET UNITYSDK_OFFSET(0x16614B90)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16614B10)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_C1E9FA7A33D8D520_OFFSET UNITYSDK_OFFSET(0x16616C80)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_C3EF24837F309BB8_OFFSET UNITYSDK_OFFSET(0x16616850)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x16614DB0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_D65976E74F5D44D7_OFFSET UNITYSDK_OFFSET(0x16616C10)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_E6D10C319383FEBA_OFFSET UNITYSDK_OFFSET(0x166168D0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x166180B0)
#define CLASS_1_DEBCF596D13A3389_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x16617750)
#define CLASS_1_DEBCF596D13A3389_SET_BOSSROOT_OFFSET UNITYSDK_OFFSET(0x16617DA0)
#define CLASS_1_DEBCF596D13A3389_SET_EDGEROOT_OFFSET UNITYSDK_OFFSET(0x16617E40)
#define CLASS_1_DEBCF596D13A3389_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0x16617E00)
#define CLASS_1_DEBCF596D13A3389_SET_GUIDEEFFECTROOT_OFFSET UNITYSDK_OFFSET(0x16617DE0)
#define CLASS_1_DEBCF596D13A3389_SET_LEFTEDGEROOT_OFFSET UNITYSDK_OFFSET(0x16617E60)
#define CLASS_1_DEBCF596D13A3389_SET_LEFTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x16617EA0)
#define CLASS_1_DEBCF596D13A3389_SET_LEFTTOWERROOT_OFFSET UNITYSDK_OFFSET(0x16617D80)
#define CLASS_1_DEBCF596D13A3389_SET_PREVIEWLINEROOT_OFFSET UNITYSDK_OFFSET(0x16617DC0)
#define CLASS_1_DEBCF596D13A3389_SET_RIGHTEDGEROOT_OFFSET UNITYSDK_OFFSET(0x16617E80)
#define CLASS_1_DEBCF596D13A3389_SET_RIGHTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x16617EC0)
#define CLASS_1_DEBCF596D13A3389_SET_RIGHTTOWERROOT_OFFSET UNITYSDK_OFFSET(0x16617D60)
#define CLASS_1_DEBCF596D13A3389_SET_ROBOT3DROOT_OFFSET UNITYSDK_OFFSET(0x16617E20)
#define CLASS_1_DEBCF596D13A3389__CTOR_OFFSET UNITYSDK_OFFSET(0x166148F0)
#define CLASS_1_DEBCF596D13A3389__OPENGAMEWINDOW_B__2_0_OFFSET UNITYSDK_OFFSET(0x166180F0)

inline static constexpr unsigned int Class_1_DEBCF596D13A3389_TypeDefinitionIndex = 79041;

class Class_1_DEBCF596D13A3389 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5138A02229B03469*>* DNJNDDGPHDB; // 0x10
	::Class_1_B13340E145F0BF93* LDOJLIGBCLC; // 0x18
	::FiveDimRenderingPanelRuntime* _LeftTowerRenderingPanel_k__BackingField; // 0x20
	::Class_1_463786FEF28056CE* IHPMLDMEHFO; // 0x28
	::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x30
	::UnityEngine::Transform* _LeftEdgeRoot_k__BackingField; // 0x38
	::Class_1_80ED5C578A50E90A* JNEHEAEFCMC; // 0x40
	::RPG::Client::LuaUIController* BDFCDIGHLKE; // 0x48
	::UnityEngine::Transform* _BossRoot_k__BackingField; // 0x50
	::UnityEngine::Transform* _EffectRoot_k__BackingField; // 0x58
	::UnityEngine::Transform* _RightTowerRoot_k__BackingField; // 0x60
	::UnityEngine::Transform* _Robot3DRoot_k__BackingField; // 0x68
	::RPG::Client::TeamTowers::TeamTowersPVPService* HBLBHLHLBLL; // 0x70
	::Class_2_FEC6BB1C109A969B_5* MJHHLOPFDNK; // 0x78
	::System::Action_1<::System::Single>* FAHHLODKNBI; // 0x80
	::UnityEngine::Transform* _EdgeRoot_k__BackingField; // 0x88
	::UnityEngine::Transform* _GuideEffectRoot_k__BackingField; // 0x90
	::RPG::Client::TeamTowers::TeamTowersGameViewModel* KCIPJKFLGDG; // 0x98
	::UnityEngine::Transform* _PreviewLineRoot_k__BackingField; // 0xA0
	::UnityEngine::Transform* _LeftTowerRoot_k__BackingField; // 0xA8
	::UnityEngine::Transform* _RightEdgeRoot_k__BackingField; // 0xB0
	::Class_1_7EEA5E93C4D09894* LBNAGLIGKIO; // 0xB8
	::RPG::Client::TeamTowers::TeamTowersGamePlayerDamageChangedMessage* FIBMGKOLDKM; // 0xC0
	::FiveDimRenderingPanelRuntime* _RightTowerRenderingPanel_k__BackingField; // 0xC8
	::System::UInt64 JHCGJBBHMNL; // 0xD0

	::System::Void _ctor(::Class_2_FEC6BB1C109A969B_5* a1, ::Class_1_7EEA5E93C4D09894* a2, ::Class_1_B13340E145F0BF93* a3, ::Class_1_463786FEF28056CE* a4, ::Class_1_80ED5C578A50E90A* a5, ::RPG::Client::TeamTowers::TeamTowersPVPService* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FEC6BB1C109A969B_5*, ::Class_1_7EEA5E93C4D09894*, ::Class_1_B13340E145F0BF93*, ::Class_1_463786FEF28056CE*, ::Class_1_80ED5C578A50E90A*, ::RPG::Client::TeamTowers::TeamTowersPVPService*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AF7286335DA1FDA1(::Class_3_E7D29F43FB80184D* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_AF7286335DA1FDA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_07CF886D7D44418E(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_07CF886D7D44418E_OFFSET))(this, a1);
	}

	::Class_1_5138A02229B03469* Method_1_4AF35CCF7882E598(::System::UInt32 a1)
	{
		return ((::Class_1_5138A02229B03469*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_4AF35CCF7882E598_OFFSET))(this, a1);
	}

	::System::Void Method_1_73800AB4E326F24E(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_73800AB4E326F24E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8AB67EADA91947EF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_8AB67EADA91947EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A37EF40E0E62AE02(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_A37EF40E0E62AE02_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_AF624F652095B50D(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_AF624F652095B50D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A81F893CE468BD5(::Class_3_E7D29F43FB80184D* a1, ::Class_1_902E15B16155CC1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*, ::Class_1_902E15B16155CC1C*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_1A81F893CE468BD5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_7646FFE662147970_1_OFFSET))(this);
	}

	::System::Void Method_1_3F09B037FEDFC1C3(::Class_3_E7D29F43FB80184D* a1, ::Class_1_9525838A9E2C7378* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*, ::Class_1_9525838A9E2C7378*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_3F09B037FEDFC1C3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_C3EF24837F309BB8(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_C3EF24837F309BB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6D10C319383FEBA(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_E6D10C319383FEBA_OFFSET))(this, a1);
	}

	::System::Void Method_1_19F7C11EE8172879(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_19F7C11EE8172879_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_7646FFE662147970_2_OFFSET))(this);
	}

	::System::Void Method_1_D65976E74F5D44D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_D65976E74F5D44D7_OFFSET))(this);
	}

	::System::Void Method_1_C1E9FA7A33D8D520()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_C1E9FA7A33D8D520_OFFSET))(this);
	}

	::System::Void Method_1_A29971596E1E4F55(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_A29971596E1E4F55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E85ACE22F91BA12(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_6E85ACE22F91BA12_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A2732134BDAF98B9(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_A2732134BDAF98B9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9C5413B852AFF2CC(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3, ::Class_2_465A9E6CC2B0EF21* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_9C5413B852AFF2CC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4F65747BD73CCFB3(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_4F65747BD73CCFB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_25E34EB2601C4BE2(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_25E34EB2601C4BE2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_4F548348F29E93D9(::Class_1_9525838A9E2C7378* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9525838A9E2C7378*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_4F548348F29E93D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F548348F29E93D9_1(::Class_1_9525838A9E2C7378* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9525838A9E2C7378*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_4F548348F29E93D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_295EDDB7CDF3B3DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_295EDDB7CDF3B3DC_OFFSET))(this);
	}

	::UnityEngine::Transform* get_RightTowerRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_RIGHTTOWERROOT_OFFSET))(this);
	}

	::System::Void set_RightTowerRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_RIGHTTOWERROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_LeftTowerRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_LEFTTOWERROOT_OFFSET))(this);
	}

	::System::Void set_LeftTowerRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_LEFTTOWERROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_BossRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_BOSSROOT_OFFSET))(this);
	}

	::System::Void set_BossRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_BOSSROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_PreviewLineRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_PREVIEWLINEROOT_OFFSET))(this);
	}

	::System::Void set_PreviewLineRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_PREVIEWLINEROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_GuideEffectRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_GUIDEEFFECTROOT_OFFSET))(this);
	}

	::System::Void set_GuideEffectRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_GUIDEEFFECTROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_EffectRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_EFFECTROOT_OFFSET))(this);
	}

	::System::Void set_EffectRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_EFFECTROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Robot3DRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_ROBOT3DROOT_OFFSET))(this);
	}

	::System::Void set_Robot3DRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_ROBOT3DROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_EdgeRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_EDGEROOT_OFFSET))(this);
	}

	::System::Void set_EdgeRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_EDGEROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_LeftEdgeRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_LEFTEDGEROOT_OFFSET))(this);
	}

	::System::Void set_LeftEdgeRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_LEFTEDGEROOT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_RightEdgeRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_RIGHTEDGEROOT_OFFSET))(this);
	}

	::System::Void set_RightEdgeRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_RIGHTEDGEROOT_OFFSET))(this, a1);
	}

	::FiveDimRenderingPanelRuntime* get_LeftTowerRenderingPanel()
	{
		return ((::FiveDimRenderingPanelRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_LEFTTOWERRENDERINGPANEL_OFFSET))(this);
	}

	::System::Void set_LeftTowerRenderingPanel(::FiveDimRenderingPanelRuntime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_LEFTTOWERRENDERINGPANEL_OFFSET))(this, a1);
	}

	::FiveDimRenderingPanelRuntime* get_RightTowerRenderingPanel()
	{
		return ((::FiveDimRenderingPanelRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_GET_RIGHTTOWERRENDERINGPANEL_OFFSET))(this);
	}

	::System::Void set_RightTowerRenderingPanel(::FiveDimRenderingPanelRuntime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_SET_RIGHTTOWERRENDERINGPANEL_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_1808E1CF7A125519_2_OFFSET))(this);
	}

	::Class_1_B13340E145F0BF93* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_B13340E145F0BF93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void _OpenGameWindow_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBCF596D13A3389__OPENGAMEWINDOW_B__2_0_OFFSET))(this);
	}
};
