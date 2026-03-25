#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_495BD7C43746BF8B;
class Class_2_2464564425143749;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B7F2227F5894FFC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11574160)
#define CLASS_2_B7F2227F5894FFC0_GET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0x11578AF0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x11577410)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x115773C0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x11575B40)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x11578AD0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_12D0F45BB408A2E6_OFFSET UNITYSDK_OFFSET(0x11577590)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x11575650)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_2_OFFSET UNITYSDK_OFFSET(0x115745E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11576450)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x11574760)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x11576590)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x115743C0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x11575720)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x11578A60)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11575F30)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_453AA36A51F9AA77_OFFSET UNITYSDK_OFFSET(0x11576290)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_4994E127E1414136_OFFSET UNITYSDK_OFFSET(0x11575F80)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x11578520)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x11575140)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x11574700)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x115764F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_7CA8CEC368BDAF2F_OFFSET UNITYSDK_OFFSET(0x11576410)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x11574BC0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0x11574C10)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x11576BA0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x115789E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96F429055CEF6085_OFFSET UNITYSDK_OFFSET(0x11577460)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x11578850)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A168E12C6BB2E0E2_OFFSET UNITYSDK_OFFSET(0x11578570)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A479FAB2BDAFE4D6_OFFSET UNITYSDK_OFFSET(0x11578AC0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A98D3E0263C925ED_OFFSET UNITYSDK_OFFSET(0x11574930)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0x11574F10)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_B158205E55E833D6_OFFSET UNITYSDK_OFFSET(0x11578AE0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_B6BF8BDAB8EF1357_OFFSET UNITYSDK_OFFSET(0x11575DF0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_1_OFFSET UNITYSDK_OFFSET(0x115779F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_OFFSET UNITYSDK_OFFSET(0x11578220)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x11574CC0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x11575000)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11576B50)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x115746B0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115766F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11575950)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_D4F6A905B06D72AB_OFFSET UNITYSDK_OFFSET(0x11577CB0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x11577300)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x11574D90)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_F1BF3BD2E76FE63F_OFFSET UNITYSDK_OFFSET(0x11576730)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x11578760)
#define CLASS_2_B7F2227F5894FFC0_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x115750E0)
#define CLASS_2_B7F2227F5894FFC0_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x115758F0)
#define CLASS_2_B7F2227F5894FFC0_SET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0x11578B00)
#define CLASS_2_B7F2227F5894FFC0_TICK_OFFSET UNITYSDK_OFFSET(0x11575A10)
#define CLASS_2_B7F2227F5894FFC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x11578B10)
#define CLASS_2_B7F2227F5894FFC0__CTOR_OFFSET UNITYSDK_OFFSET(0x115740E0)
#define CLASS_2_B7F2227F5894FFC0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11578B40)

inline static constexpr unsigned int Class_2_B7F2227F5894FFC0_TypeDefinitionIndex = 45938;

class Class_2_B7F2227F5894FFC0 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_33()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x418B0);
	}
	static ::System::String** StaticGet_Field_2_32()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x418B8);
	}
	static ::RPG::Client::MonoEffect** StaticGet_Field_2_30()
	{
		return (::RPG::Client::MonoEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x418C0);
	}
	// static const ::System::Int32 Field_2_2 = 0x3; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	::UnityEngine::Transform* Field_2_25; // 0x18
	::RPG::Client::GameObjectAudio* Field_2_28; // 0x20
	::System::String* Field_2_10; // 0x28
	::System::Collections::Generic::List_1<::Class_1_495BD7C43746BF8B*>* Field_2_19; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_2_27; // 0x38
	::RPG::GameCore::NPCMonsterHintSoundConfig* Field_2_20; // 0x40
	::RPG::GameCore::NPCSoundConfig* Field_2_18; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* Field_2_26; // 0x50
	::System::Action* Field_2_21; // 0x58
	::System::String* Field_2_36; // 0x60
	::UnityEngine::Collider* Field_2_12; // 0x68
	::Class_2_2464564425143749* Field_2_37; // 0x70
	::RPG::Client::AdventurePhase* Field_2_1; // 0x78
	::UnityEngine::Transform* Field_2_24; // 0x80
	::System::String* Field_2_34; // 0x88
	::System::String* Field_2_35; // 0x90
	::UnityEngine::Transform* Field_2_7; // 0x98
	::System::Single Field_2_16; // 0xA0
	::System::Boolean Field_2_15; // 0xA4
	::System::Boolean Field_2_9; // 0xA5
	::System::Int32 Field_2_3; // 0xA8
	::System::Int32 Field_2_14; // 0xAC
	::UnityEngine::Vector3 Field_2_13; // 0xB0
	::System::Int32 Field_2_11; // 0xBC
	::UnityEngine::Color _waterColor_k__BackingField; // 0xC0
	::System::Boolean Field_2_31; // 0xD0
	::System::Boolean Field_2_4; // 0xD1
	::System::Boolean Field_2_23; // 0xD2
	::System::Boolean Field_2_29; // 0xD3
	::System::Boolean Field_2_6; // 0xD4
	::System::Boolean Field_2_22; // 0xD5
	::System::Boolean Field_2_5; // 0xD6
	::RPG::GameCore::SurfaceType Field_2_8; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_2_A98D3E0263C925ED(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_A98D3E0263C925ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_94F7C31F3BFBD430(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_94F7C31F3BFBD430_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB0D5AE688458ECB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_AB0D5AE688458ECB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4994E127E1414136(::RPG::GameCore::NPCSoundConfig* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_4994E127E1414136_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_453AA36A51F9AA77(::RPG::GameCore::NPCMonsterHintSoundConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_453AA36A51F9AA77_OFFSET))(this, a1);
	}

	::RPG::GameCore::NPCSoundConfig* Method_2_7CA8CEC368BDAF2F()
	{
		return ((::RPG::GameCore::NPCSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_7CA8CEC368BDAF2F_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F1BF3BD2E76FE63F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_F1BF3BD2E76FE63F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_96F429055CEF6085(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_96F429055CEF6085_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Int32 Method_2_D4F6A905B06D72AB(::RPG::GameCore::SurfaceType& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_D4F6A905B06D72AB_OFFSET))(this, a1);
	}

	::RPG::GameCore::SurfaceType Method_2_12D0F45BB408A2E6()
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_12D0F45BB408A2E6_OFFSET))(this);
	}

	::System::Void Method_2_C1238CC3B5758A25(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1238CC3B5758A25_1(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_495BD7C43746BF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_495BD7C43746BF8B*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A168E12C6BB2E0E2(::Class_1_495BD7C43746BF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_495BD7C43746BF8B*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_A168E12C6BB2E0E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6BF8BDAB8EF1357(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_B6BF8BDAB8EF1357_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_2_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::RPG::GameCore::SurfaceType Method_2_A479FAB2BDAFE4D6()
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_A479FAB2BDAFE4D6_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::RPG::GameCore::NPCMonsterHintSoundConfig* Method_2_B158205E55E833D6()
	{
		return ((::RPG::GameCore::NPCMonsterHintSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_B158205E55E833D6_OFFSET))(this);
	}

	::UnityEngine::Color get_waterColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_GET_WATERCOLOR_OFFSET))(this);
	}

	::System::Void set_waterColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_SET_WATERCOLOR_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
