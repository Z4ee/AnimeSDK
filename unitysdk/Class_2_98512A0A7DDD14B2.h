#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_10.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_E21F6DE9B7FA4D05;
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

#define CLASS_2_98512A0A7DDD14B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123CE680)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x123CF3A0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_211942F2A3D74CCB_OFFSET UNITYSDK_OFFSET(0x123D09C0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x123CEDA0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_5CC3C7A9D6CEEBD6_OFFSET UNITYSDK_OFFSET(0x123D05F0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_72EA1B0273BFC6AD_OFFSET UNITYSDK_OFFSET(0x123CFF60)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_79D3E3D754041A2D_1_OFFSET UNITYSDK_OFFSET(0x123CFE00)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_79D3E3D754041A2D_OFFSET UNITYSDK_OFFSET(0x123CFCA0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x123D0330)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_8179A0C40C085CB0_OFFSET UNITYSDK_OFFSET(0x123D0260)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_AD275FD30C54DE4F_OFFSET UNITYSDK_OFFSET(0x123D1300)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_AD52E5051C13C465_1_OFFSET UNITYSDK_OFFSET(0x123D0BC0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_AD52E5051C13C465_OFFSET UNITYSDK_OFFSET(0x123D0880)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x123CEFE0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x123CEC50)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x123D0380)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x123D11D0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x123D0CF0)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_FACE9210088E0BD3_OFFSET UNITYSDK_OFFSET(0x123CF100)
#define CLASS_2_98512A0A7DDD14B2_METHOD_2_FD73D54AB8609D8E_OFFSET UNITYSDK_OFFSET(0x123CF5D0)
#define CLASS_2_98512A0A7DDD14B2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123CEF40)
#define CLASS_2_98512A0A7DDD14B2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123CEF90)
#define CLASS_2_98512A0A7DDD14B2_TICK_OFFSET UNITYSDK_OFFSET(0x123CED30)
#define CLASS_2_98512A0A7DDD14B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x123D1560)
#define CLASS_2_98512A0A7DDD14B2__CTOR_OFFSET UNITYSDK_OFFSET(0x123CE5A0)
#define CLASS_2_98512A0A7DDD14B2___DICEAPPEAR_B__10_0_OFFSET UNITYSDK_OFFSET(0x123D15A0)

inline static constexpr unsigned int Class_2_98512A0A7DDD14B2_TypeDefinitionIndex = 53887;

class Class_2_98512A0A7DDD14B2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::String** StaticGet_Field_2_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98512A0A7DDD14B2_TypeDefinitionIndex)->GetStaticField(0x5210);
	}
	::RPG::GameCore::RogueDLC1Dot3DiceInteract* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_10; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_2_12; // 0x28
	::System::String* Field_2_7; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Sprite*>* Field_2_11; // 0x48
	::System::UInt32 Field_2_4; // 0x50
	::System::Boolean Field_2_8; // 0x54
	::System::UInt32 Field_2_6; // 0x58
	::System::UInt32 Field_2_5; // 0x5C
	::System::UInt32 Field_2_13; // 0x60
	::System::UInt32 Field_2_9; // 0x64
	::Enum_3_ED790DAC948A65A9_10 Field_2_3; // 0x68

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

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79D3E3D754041A2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_79D3E3D754041A2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79D3E3D754041A2D_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_79D3E3D754041A2D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_72EA1B0273BFC6AD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_72EA1B0273BFC6AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD73D54AB8609D8E(::Enum_3_ED790DAC948A65A9_10 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_10))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_FD73D54AB8609D8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CC3C7A9D6CEEBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_5CC3C7A9D6CEEBD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD52E5051C13C465(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_AD52E5051C13C465_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD52E5051C13C465_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_AD52E5051C13C465_1_OFFSET))(this, a1);
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

	::System::Void Method_2_211942F2A3D74CCB(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_211942F2A3D74CCB_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_AD275FD30C54DE4F()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_AD275FD30C54DE4F_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::RPG::Client::Prop::RogueDLC1Dot3Dice* Method_2_8179A0C40C085CB0()
	{
		return ((::RPG::Client::Prop::RogueDLC1Dot3Dice*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2_METHOD_2_8179A0C40C085CB0_OFFSET))(this);
	}

	::System::Void __DiceAppear_b__10_0(::RPG::Client::MonoEffect* effectObject, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2___DICEAPPEAR_B__10_0_OFFSET))(this, effectObject, extraParams);
	}
};
