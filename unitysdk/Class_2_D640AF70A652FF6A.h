#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
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

#define CLASS_2_D640AF70A652FF6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE5B420)
#define CLASS_2_D640AF70A652FF6A_GET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0xDE5FF60)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0xDE5E820)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xDE5E7D0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xDE5CDA0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xDE5FF40)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0xDE5B840)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDE5C8C0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xDE5D8D0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xDE5C9B0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xDE5DF20)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xDE5FED0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xDE5F980)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xDE5D1C0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xDE5D770)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xDE5B6B0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_453AA36A51F9AA77_OFFSET UNITYSDK_OFFSET(0xDE5D5A0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0xDE5B9E0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xDE5C3D0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_6AC0B31DB7C5670D_OFFSET UNITYSDK_OFFSET(0xDE5BF60)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0xDE5B980)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xDE5D830)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_7CA8CEC368BDAF2F_OFFSET UNITYSDK_OFFSET(0xDE5D720)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_7CABA4F189ABCB68_OFFSET UNITYSDK_OFFSET(0xDE5D210)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xDE5BE50)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_81A971B44F36CAF8_OFFSET UNITYSDK_OFFSET(0xDE5DA70)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xDE5FE50)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0xDE5BEA0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_96F429055CEF6085_OFFSET UNITYSDK_OFFSET(0xDE5E870)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xDE5FCC0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_99C80A701DB439BB_OFFSET UNITYSDK_OFFSET(0xDE5E9A0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_A168E12C6BB2E0E2_OFFSET UNITYSDK_OFFSET(0xDE5F9D0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_A479FAB2BDAFE4D6_OFFSET UNITYSDK_OFFSET(0xDE5FF30)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0xDE5C1B0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_B158205E55E833D6_OFFSET UNITYSDK_OFFSET(0xDE5FF50)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_B57CDB7FEEE3DDCE_OFFSET UNITYSDK_OFFSET(0xDE5D050)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_C1238CC3B5758A25_1_OFFSET UNITYSDK_OFFSET(0xDE5EE10)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_C1238CC3B5758A25_OFFSET UNITYSDK_OFFSET(0xDE5F690)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xDE5E710)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xDE5C290)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDE5DED0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xDE5B930)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE5DA30)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xDE5CBC0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_E255E6572360A66E_OFFSET UNITYSDK_OFFSET(0xDE5F0C0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0xDE5C030)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_F02F7737367767B7_OFFSET UNITYSDK_OFFSET(0xDE5BBE0)
#define CLASS_2_D640AF70A652FF6A_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xDE5FBD0)
#define CLASS_2_D640AF70A652FF6A_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xDE5C370)
#define CLASS_2_D640AF70A652FF6A_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xDE5CB60)
#define CLASS_2_D640AF70A652FF6A_SET_WATERCOLOR_OFFSET UNITYSDK_OFFSET(0xDE5FF70)
#define CLASS_2_D640AF70A652FF6A_TICK_OFFSET UNITYSDK_OFFSET(0xDE5CC70)
#define CLASS_2_D640AF70A652FF6A__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE5FF80)
#define CLASS_2_D640AF70A652FF6A__CTOR_OFFSET UNITYSDK_OFFSET(0xDE5B380)
#define CLASS_2_D640AF70A652FF6A___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xDE5FFB0)

inline static constexpr unsigned int Class_2_D640AF70A652FF6A_TypeDefinitionIndex = 53299;

class Class_2_D640AF70A652FF6A : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D640AF70A652FF6A_TypeDefinitionIndex)->GetStaticField(0x68EC0);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D640AF70A652FF6A_TypeDefinitionIndex)->GetStaticField(0x68EC8);
	}
	static ::RPG::Client::MonoEffect** StaticGet_Field_2_2()
	{
		return (::RPG::Client::MonoEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D640AF70A652FF6A_TypeDefinitionIndex)->GetStaticField(0x68ED0);
	}
	// static const ::System::Int32 Field_2_3 = 0x3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	::System::String* Field_2_5; // 0x18
	::System::String* Field_2_6; // 0x20
	::UnityEngine::Collider* Field_2_7; // 0x28
	::RPG::GameCore::NPCMonsterHintSoundConfig* Field_2_8; // 0x30
	::RPG::Client::GameObjectAudio* Field_2_9; // 0x38
	::UnityEngine::Transform* Field_2_10; // 0x40
	::Class_2_2464564425143749* Field_2_11; // 0x48
	::RPG::Client::AdventurePhase* Field_2_12; // 0x50
	::System::String* Field_2_13; // 0x58
	::System::Action* Field_2_14; // 0x60
	::UnityEngine::Transform* Field_2_15; // 0x68
	::UnityEngine::Transform* Field_2_16; // 0x70
	::RPG::GameCore::AdventureCharacterController* Field_2_17; // 0x78
	::RPG::GameCore::NPCSoundConfig* Field_2_18; // 0x80
	::System::Collections::Generic::List_1<::RPG::Client::Effect_DynamicWavesManager_HitData>* Field_2_19; // 0x88
	::System::String* Field_2_20; // 0x90
	::System::Collections::Generic::List_1<::Class_1_495BD7C43746BF8B*>* Field_2_21; // 0x98
	::System::Boolean Field_2_22; // 0xA0
	::System::Boolean Field_2_23; // 0xA1
	::System::Boolean Field_2_24; // 0xA2
	::System::Boolean Field_2_25; // 0xA3
	::System::Boolean Field_2_26; // 0xA4
	::System::Boolean Field_2_27; // 0xA5
	::System::Boolean Field_2_28; // 0xA6
	::System::Boolean Field_2_29; // 0xA7
	::System::Boolean Field_2_30; // 0xA8
	::System::Single Field_2_31; // 0xAC
	::UnityEngine::Vector3 Field_2_32; // 0xB0
	::System::Int32 Field_2_33; // 0xBC
	::RPG::GameCore::SurfaceType Field_2_34; // 0xC0
	::System::Int32 Field_2_35; // 0xC4
	::UnityEngine::Color _waterColor_k__BackingField; // 0xC8
	::System::Int32 Field_2_37; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_2_F02F7737367767B7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_F02F7737367767B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_926A87EF7B2C87F9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_926A87EF7B2C87F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB0D5AE688458ECB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_AB0D5AE688458ECB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CABA4F189ABCB68(::RPG::GameCore::NPCSoundConfig* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_7CABA4F189ABCB68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_453AA36A51F9AA77(::RPG::GameCore::NPCMonsterHintSoundConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_453AA36A51F9AA77_OFFSET))(this, a1);
	}

	::RPG::GameCore::NPCSoundConfig* Method_2_7CA8CEC368BDAF2F()
	{
		return ((::RPG::GameCore::NPCSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_7CA8CEC368BDAF2F_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_81A971B44F36CAF8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_81A971B44F36CAF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_6AC0B31DB7C5670D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_6AC0B31DB7C5670D_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_96F429055CEF6085(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_96F429055CEF6085_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Int32 Method_2_E255E6572360A66E(::RPG::GameCore::SurfaceType& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SurfaceType&))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_E255E6572360A66E_OFFSET))(this, a1);
	}

	::RPG::GameCore::SurfaceType Method_2_99C80A701DB439BB()
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_99C80A701DB439BB_OFFSET))(this);
	}

	::System::Void Method_2_C1238CC3B5758A25(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_C1238CC3B5758A25_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1238CC3B5758A25_1(::RPG::GameCore::SurfaceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_C1238CC3B5758A25_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_495BD7C43746BF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_495BD7C43746BF8B*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A168E12C6BB2E0E2(::Class_1_495BD7C43746BF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_495BD7C43746BF8B*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_A168E12C6BB2E0E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_2_B57CDB7FEEE3DDCE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_B57CDB7FEEE3DDCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::RPG::GameCore::SurfaceType Method_2_A479FAB2BDAFE4D6()
	{
		return ((::RPG::GameCore::SurfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_A479FAB2BDAFE4D6_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::RPG::GameCore::NPCMonsterHintSoundConfig* Method_2_B158205E55E833D6()
	{
		return ((::RPG::GameCore::NPCMonsterHintSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_METHOD_2_B158205E55E833D6_OFFSET))(this);
	}

	::UnityEngine::Color get_waterColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_GET_WATERCOLOR_OFFSET))(this);
	}

	::System::Void set_waterColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A_SET_WATERCOLOR_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
