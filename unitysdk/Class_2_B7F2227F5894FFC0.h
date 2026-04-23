#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
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

#define CLASS_2_B7F2227F5894FFC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12404660)
#define CLASS_2_B7F2227F5894FFC0_GET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0x12409000)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x12407900)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x124078B0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x12406010)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x12408FE0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_12D0F45BB408A2E6_OFFSET UNITYSDK_OFFSET(0x12407A80)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x12405B50)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_2_OFFSET UNITYSDK_OFFSET(0x12404AE0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12406920)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x12404C60)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x12406A60)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x124048C0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x12405C20)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x12408F70)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12406400)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_453AA36A51F9AA77_OFFSET UNITYSDK_OFFSET(0x12406760)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_4994E127E1414136_OFFSET UNITYSDK_OFFSET(0x12406450)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x12408A30)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x12405660)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x12404C00)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x124069C0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_7CA8CEC368BDAF2F_OFFSET UNITYSDK_OFFSET(0x124068E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x124050E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0x12405130)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x12407090)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x12408EF0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_96F429055CEF6085_OFFSET UNITYSDK_OFFSET(0x12407950)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x12408D60)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A168E12C6BB2E0E2_OFFSET UNITYSDK_OFFSET(0x12408A80)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_A479FAB2BDAFE4D6_OFFSET UNITYSDK_OFFSET(0x12408FD0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0x12405440)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_B158205E55E833D6_OFFSET UNITYSDK_OFFSET(0x12408FF0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_B6BF8BDAB8EF1357_OFFSET UNITYSDK_OFFSET(0x124062C0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_1_OFFSET UNITYSDK_OFFSET(0x12407F00)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C1238CC3B5758A25_OFFSET UNITYSDK_OFFSET(0x12408740)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x124051E0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x12405520)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12407040)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x12404BB0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12406BC0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_CC61F5A692F0C75B_OFFSET UNITYSDK_OFFSET(0x12404E30)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12405E30)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_D4F6A905B06D72AB_OFFSET UNITYSDK_OFFSET(0x124081B0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x124077F0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_DF4C68F31B1E687C_OFFSET UNITYSDK_OFFSET(0x12406C00)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x124052B0)
#define CLASS_2_B7F2227F5894FFC0_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x12408C70)
#define CLASS_2_B7F2227F5894FFC0_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x12405600)
#define CLASS_2_B7F2227F5894FFC0_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x12405DD0)
#define CLASS_2_B7F2227F5894FFC0_SET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0x12409010)
#define CLASS_2_B7F2227F5894FFC0_TICK_OFFSET UNITYSDK_OFFSET(0x12405EE0)
#define CLASS_2_B7F2227F5894FFC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x12409020)
#define CLASS_2_B7F2227F5894FFC0__CTOR_OFFSET UNITYSDK_OFFSET(0x124045E0)
#define CLASS_2_B7F2227F5894FFC0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12409050)

inline static constexpr unsigned int Class_2_B7F2227F5894FFC0_TypeDefinitionIndex = 52599;

class Class_2_B7F2227F5894FFC0 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_33()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x47A0);
	}
	static ::RPG::Client::MonoEffect** StaticGet_Field_2_30()
	{
		return (::RPG::Client::MonoEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x47A8);
	}
	static ::System::String** StaticGet_Field_2_32()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0_TypeDefinitionIndex)->GetStaticField(0x47B0);
	}
	// static const ::System::Int32 Field_2_2 = 0x3; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	::System::String* Field_2_34; // 0x18
	::System::String* Field_2_36; // 0x20
	::System::Collections::Generic::List_1<::Class_1_495BD7C43746BF8B*>* Field_2_19; // 0x28
	::System::String* Field_2_35; // 0x30
	::System::Action* Field_2_21; // 0x38
	::UnityEngine::Transform* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* Field_2_26; // 0x48
	::RPG::GameCore::AdventureCharacterController* Field_2_27; // 0x50
	::RPG::GameCore::NPCSoundConfig* Field_2_18; // 0x58
	::UnityEngine::Collider* Field_2_12; // 0x60
	::Class_2_2464564425143749* Field_2_37; // 0x68
	::RPG::GameCore::NPCMonsterHintSoundConfig* Field_2_20; // 0x70
	::UnityEngine::Transform* Field_2_24; // 0x78
	::RPG::Client::AdventurePhase* Field_2_1; // 0x80
	::System::String* Field_2_10; // 0x88
	::UnityEngine::Transform* Field_2_25; // 0x90
	::RPG::Client::GameObjectAudio* Field_2_28; // 0x98
	::UnityEngine::Vector3 Field_2_13; // 0xA0
	::System::Int32 Field_2_14; // 0xAC
	::System::Int32 Field_2_3; // 0xB0
	::System::Single Field_2_16; // 0xB4
	::System::Boolean Field_2_4; // 0xB8
	::System::Boolean Field_2_22; // 0xB9
	::System::Boolean Field_2_31; // 0xBA
	::UnityEngine::Color _waterColor_k__BackingField; // 0xBC
	::RPG::GameCore::SurfaceType Field_2_8; // 0xCC
	::System::Boolean Field_2_6; // 0xD0
	::System::Boolean Field_2_15; // 0xD1
	::System::Int32 Field_2_11; // 0xD4
	::System::Boolean Field_2_9; // 0xD8
	::System::Boolean Field_2_5; // 0xD9
	::System::Boolean Field_2_23; // 0xDA
	::System::Boolean Field_2_29; // 0xDB

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

	::System::Void Method_2_CC61F5A692F0C75B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_CC61F5A692F0C75B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_94F7C31F3BFBD430(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_94F7C31F3BFBD430_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
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

	::System::Void Method_2_DF4C68F31B1E687C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0_METHOD_2_DF4C68F31B1E687C_OFFSET))(this, a1);
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
