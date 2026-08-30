#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_10.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class RogueDLC1Dot3Dice; }
namespace RPG::GameCore { class RogueDLC1Dot3DiceInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define CLASS_2_98512A0A7DDD14B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A23070)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x17A23FF0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_344DB1721ADD2658_1_OFFSET UNITYSDK_OFFSET(0x17A24C20)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_344DB1721ADD2658_OFFSET UNITYSDK_OFFSET(0x17A24A20)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_56B2C7D70540D840_1_OFFSET UNITYSDK_OFFSET(0x17A25680)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_56B2C7D70540D840_OFFSET UNITYSDK_OFFSET(0x17A25330)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_69394C8E424F4241_OFFSET UNITYSDK_OFFSET(0x17A26420)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_77E403C38BABBDD8_OFFSET UNITYSDK_OFFSET(0x17A25190)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_7C435BFEFAB36520_1_OFFSET UNITYSDK_OFFSET(0x17A25D30)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_7C435BFEFAB36520_OFFSET UNITYSDK_OFFSET(0x17A259F0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17A252E0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17A23960)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_BB850356AA7DECA2_OFFSET UNITYSDK_OFFSET(0x17A24220)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_C71330C5E4DD6A8C_OFFSET UNITYSDK_OFFSET(0x17A25B30)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_C78AE789C8D46624_OFFSET UNITYSDK_OFFSET(0x17A24E20)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x17A23C10)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17A23810)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x17A262F0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x17A25E60)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_FACE9210088E0BD3_OFFSET UNITYSDK_OFFSET(0x17A23D50)
#define CLASS_2_98512A0A7DDD14B2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A23B70)
#define CLASS_2_98512A0A7DDD14B2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A23BC0)
#define CLASS_2_98512A0A7DDD14B2_TICK_OFFSET UNITYSDK_OFFSET(0x17A238F0)
#define CLASS_2_98512A0A7DDD14B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A266F0)
#define CLASS_2_98512A0A7DDD14B2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A22F90)
#define CLASS_2_98512A0A7DDD14B2___DICEAPPEAR_B__10_0_OFFSET UNITYSDK_OFFSET(0x17A26730)

inline static constexpr unsigned int Class_2_98512A0A7DDD14B2_TypeDefinitionIndex = 58603;

class Class_2_98512A0A7DDD14B2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_DKNEIAONKPB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98512A0A7DDD14B2_TypeDefinitionIndex)->GetStaticField(0x71A0);
	}
	::RPG::GameCore::RogueDLC1Dot3DiceInteract* OFKGLJOAMLD; // 0x18
	::System::String* PJCKPBIPEDM; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Sprite*>* IHIDCIDLKKM; // 0x30
	::UnityEngine::GameObject* IBAFEMKMDKL; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NGKOAMMKPIC; // 0x40
	::Class_3_07C3C4D2990C49EE* LPGMOLOFLOP; // 0x48
	::Enum_3_ED790DAC948A65A9_10 NNLFFOCINPG; // 0x50
	::System::UInt32 PFMIPOPPCCL; // 0x54
	::System::UInt32 EILMPFEEIJH; // 0x58
	::System::UInt32 FMGKEGFGDNA; // 0x5C
	::System::UInt32 FLNGBDLPFAC; // 0x60
	::System::Boolean HDJOGGDMCIO; // 0x64
	::System::UInt32 MEPMDNDKGBP; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3DiceInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_344DB1721ADD2658(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_344DB1721ADD2658_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_344DB1721ADD2658_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_344DB1721ADD2658_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C78AE789C8D46624(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_C78AE789C8D46624_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB850356AA7DECA2(::Enum_3_ED790DAC948A65A9_10 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_10))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_BB850356AA7DECA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_56B2C7D70540D840(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_56B2C7D70540D840_OFFSET))(this, a1);
	}

	::System::Void Method_2_56B2C7D70540D840_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_56B2C7D70540D840_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C435BFEFAB36520(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_7C435BFEFAB36520_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C435BFEFAB36520_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_7C435BFEFAB36520_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Void Method_2_FACE9210088E0BD3(::Enum_3_ED790DAC948A65A9_10 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_10, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_FACE9210088E0BD3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::Void Method_2_C71330C5E4DD6A8C(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_C71330C5E4DD6A8C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_69394C8E424F4241()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_69394C8E424F4241_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::RPG::Client::Prop::RogueDLC1Dot3Dice* Method_2_77E403C38BABBDD8()
	{
		return ((::RPG::Client::Prop::RogueDLC1Dot3Dice*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_77E403C38BABBDD8_OFFSET))(this);
	}

	::System::Void __DiceAppear_b__10_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2___DICEAPPEAR_B__10_0_OFFSET))(this, a1, a2);
	}
};
