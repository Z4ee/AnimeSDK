#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
class Class_2_6644F9F28684FC1B;
class Class_2_6CE592807426216E;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilitySkillPropertyChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_D36C5AC24693DA07_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16F70FC0)
#define CLASS_2_D36C5AC24693DA07_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16F71580)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x16F6FB30)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16F6F880)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x16F6F020)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x16F6DF70)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_21DC49125B4D40E6_OFFSET UNITYSDK_OFFSET(0x16F6F940)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_2386C7BBF94ECF92_OFFSET UNITYSDK_OFFSET(0x16F6E170)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_24BC8E5BE3FEDB09_OFFSET UNITYSDK_OFFSET(0x16F6F5D0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x16F6E300)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x16F6E020)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16F70520)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16F6D610)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_37B9CAEB4EAE67B7_OFFSET UNITYSDK_OFFSET(0x16F6F130)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x16F6FC60)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_69702A36D562D863_OFFSET UNITYSDK_OFFSET(0x16F6F210)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_6C282C312B6A0234_OFFSET UNITYSDK_OFFSET(0x16F6E3B0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x16F6DBF0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_77515BAD6284E46E_OFFSET UNITYSDK_OFFSET(0x16F6F730)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x16F6E780)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x16F70330)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16F6FCD0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x16F6DCB0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_980463DB0364456F_OFFSET UNITYSDK_OFFSET(0x16F6FBF0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_9A01ED4E89FC1B6D_OFFSET UNITYSDK_OFFSET(0x16F6FDC0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x16F6FFC0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x16F6EC80)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x16F6F6B0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16F6D8F0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x16F6D520)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_BB5C9CCAFB5E8402_OFFSET UNITYSDK_OFFSET(0x16F6EB40)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_BE20866642E2D6E8_OFFSET UNITYSDK_OFFSET(0x16F6DE10)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x16F70E40)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16F70D50)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F6DB90)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0x16F6D840)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16F6D570)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0x16F6E560)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16F6DFD0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0x16F6DA40)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x16F6FD40)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x16F6F550)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_10_OFFSET UNITYSDK_OFFSET(0x16F70F30)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16F70650)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16F70750)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x16F70810)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x16F708D0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x16F70990)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x16F70A50)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x16F70B10)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x16F70BD0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_9_OFFSET UNITYSDK_OFFSET(0x16F70C90)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16F705C0)
#define CLASS_2_D36C5AC24693DA07_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16F6D9A0)
#define CLASS_2_D36C5AC24693DA07_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16F6DB10)
#define CLASS_2_D36C5AC24693DA07__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F71B30)
#define CLASS_2_D36C5AC24693DA07__CTOR_OFFSET UNITYSDK_OFFSET(0x16F71B00)
#define CLASS_2_D36C5AC24693DA07__ONBIND_OFFSET UNITYSDK_OFFSET(0x16F6D310)
#define CLASS_2_D36C5AC24693DA07__ONTICK_OFFSET UNITYSDK_OFFSET(0x16F6DC40)

inline static constexpr unsigned int Class_2_D36C5AC24693DA07_TypeDefinitionIndex = 68168;

class Class_2_D36C5AC24693DA07 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::String*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D36C5AC24693DA07_TypeDefinitionIndex)->GetStaticField(0x67900);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::UnityEngine::UI::Image* Field_2_10; // 0x60
	::UnityEngine::Transform* Field_2_11; // 0x68
	::Class_2_6CE592807426216E* Field_2_12; // 0x70
	::UnityEngine::Transform* Field_2_13; // 0x78
	::UnityEngine::Animation* Field_2_14; // 0x80
	::UnityEngine::ParticleSystem* Field_2_15; // 0x88
	::Class_2_6644F9F28684FC1B* Field_2_16; // 0x90
	::UnityEngine::UI::Image* Field_2_17; // 0x98
	::RPG::GameCore::CharacterDataComponent* Field_2_18; // 0xA0
	::UnityEngine::Transform* Field_2_19; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_20; // 0xB0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_21; // 0xB8
	::RPG::GameCore::SkillCharacterComponent* Field_2_22; // 0xC0
	::RPG::GameCore::FixPoint Field_2_23; // 0xC8
	::System::Boolean Field_2_24; // 0xD0
	::System::Boolean Field_2_25; // 0xD1
	::System::Boolean Field_2_26; // 0xD2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BE20866642E2D6E8(::RPG::GameCore::AbilityBeingLimbo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_BE20866642E2D6E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_2386C7BBF94ECF92(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_2386C7BBF94ECF92_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C282C312B6A0234(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_6C282C312B6A0234_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB5C9CCAFB5E8402(::RPG::GameCore::AbilitySkillPropertyChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilitySkillPropertyChange*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_BB5C9CCAFB5E8402_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_37B9CAEB4EAE67B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_37B9CAEB4EAE67B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_69702A36D562D863(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_69702A36D562D863_OFFSET))(this, a1);
	}

	::System::Void Method_2_77515BAD6284E46E(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_77515BAD6284E46E_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_980463DB0364456F(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_980463DB0364456F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_EB1549E9C6E3B4E9_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_21DC49125B4D40E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_21DC49125B4D40E6_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_9A01ED4E89FC1B6D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_9A01ED4E89FC1B6D_OFFSET))(this);
	}

	::System::Boolean Method_2_24BC8E5BE3FEDB09(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_24BC8E5BE3FEDB09_OFFSET))(this, a1);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_10(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_10_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
