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

#define CLASS_2_7858266B34A2C48E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BFD3C0)
#define CLASS_2_7858266B34A2C48E_GET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x19BFDEA0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_2A3605480291B7E1_OFFSET UNITYSDK_OFFSET(0x19BFDB20)
#define CLASS_2_7858266B34A2C48E_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x19BFD650)
#define CLASS_2_7858266B34A2C48E_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x19BFD410)
#define CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x19BFDAA0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x19BFD8E0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_7BB881FF8A7B80C2_OFFSET UNITYSDK_OFFSET(0x19BFDCD0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x19BFDD90)
#define CLASS_2_7858266B34A2C48E_METHOD_2_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x19BFD960)
#define CLASS_2_7858266B34A2C48E_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x19BFD7A0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x19BFD6A0)
#define CLASS_2_7858266B34A2C48E_SET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x19BFDEB0)
#define CLASS_2_7858266B34A2C48E__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFDEC0)
#define CLASS_2_7858266B34A2C48E___DOACTIVE_B__7_0_OFFSET UNITYSDK_OFFSET(0x19BFDF00)

inline static constexpr unsigned int Class_2_7858266B34A2C48E_TypeDefinitionIndex = 57292;

class Class_2_7858266B34A2C48E : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::Coroutine* PBEEOEKJGIN; // 0x18
	::System::String* GMLDDGKDJLL; // 0x20
	::System::String* DEMDLBLNHBJ; // 0x28
	::System::String* PIFEELOCJMM; // 0x30
	::UnityEngine::Coroutine* KKJKKOOMFDO; // 0x38
	::System::String* FBJABBMJHNK; // 0x40
	::System::String* BNAINGMFJFH; // 0x48
	::UnityEngine::Coroutine* JKKKEHIFEOF; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* BJALAOKPDEB; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* PMJBNAFPDKM; // 0x60
	::System::String* DKHAGHGEFPI; // 0x68
	::System::Boolean FKEOJAPALCP; // 0x70
	::System::Boolean _IsFarmElementActive_k__BackingField; // 0x71
	::RPG::GameCore::FarmElementPropState MEDJGNOFDHP; // 0x74
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

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_2A3605480291B7E1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_2A3605480291B7E1_OFFSET))(this);
	}

	::RPG::Client::MonoEffectManager* Method_2_7BB881FF8A7B80C2()
	{
		return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_7BB881FF8A7B80C2_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
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
