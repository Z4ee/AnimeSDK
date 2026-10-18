#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FarmElementPropState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_7858266B34A2C48E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15566780)
#define CLASS_2_7858266B34A2C48E_GET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x15566F90)
#define CLASS_2_7858266B34A2C48E_METHOD_2_2A3605480291B7E1_OFFSET UNITYSDK_OFFSET(0x15566C20)
#define CLASS_2_7858266B34A2C48E_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x15566850)
#define CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x15566BA0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x15566A60)
#define CLASS_2_7858266B34A2C48E_METHOD_2_7BB881FF8A7B80C2_OFFSET UNITYSDK_OFFSET(0x15566DD0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15566AE0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x155669A0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x155667D0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x15566E80)
#define CLASS_2_7858266B34A2C48E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x155668A0)
#define CLASS_2_7858266B34A2C48E_SET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x15566FA0)
#define CLASS_2_7858266B34A2C48E__CTOR_OFFSET UNITYSDK_OFFSET(0x15566FB0)
#define CLASS_2_7858266B34A2C48E___DOACTIVE_B__7_0_OFFSET UNITYSDK_OFFSET(0x15566FF0)

inline static constexpr unsigned int Class_2_7858266B34A2C48E_TypeDefinitionIndex = 57128;

class Class_2_7858266B34A2C48E : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::Coroutine* PBEEOEKJGIN; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* BJALAOKPDEB; // 0x20
	::System::String* DKHAGHGEFPI; // 0x28
	::System::String* BNAINGMFJFH; // 0x30
	::UnityEngine::Coroutine* KKJKKOOMFDO; // 0x38
	::System::String* PIFEELOCJMM; // 0x40
	::System::String* FBJABBMJHNK; // 0x48
	::System::String* GMLDDGKDJLL; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* PMJBNAFPDKM; // 0x58
	::System::String* DEMDLBLNHBJ; // 0x60
	::UnityEngine::Coroutine* JKKKEHIFEOF; // 0x68
	::RPG::GameCore::FarmElementPropState MEDJGNOFDHP; // 0x70
	::System::Boolean _IsFarmElementActive_k__BackingField; // 0x74
	::System::Boolean FKEOJAPALCP; // 0x75
	::RPG::Client::TextID EOOPEDLOJLJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_2A3605480291B7E1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_2A3605480291B7E1_OFFSET))(this);
	}

	::RPG::Client::MonoEffectManager* Method_2_7BB881FF8A7B80C2()
	{
		return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_7BB881FF8A7B80C2_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5_1()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_1_OFFSET))(this);
	}

	::System::Void Method_2_D89E9B7A3325AE84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_D89E9B7A3325AE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Boolean get_IsFarmElementActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_GET_ISFARMELEMENTACTIVE_OFFSET))(this);
	}

	::System::Void set_IsFarmElementActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_SET_ISFARMELEMENTACTIVE_OFFSET))(this, a1);
	}

	::System::Void __DoActive_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E___DOACTIVE_B__7_0_OFFSET))(this);
	}
};
