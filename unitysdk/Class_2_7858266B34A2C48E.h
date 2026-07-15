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

#define CLASS_2_7858266B34A2C48E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185EBC60)
#define CLASS_2_7858266B34A2C48E_GET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x185EC640)
#define CLASS_2_7858266B34A2C48E_METHOD_2_2A3605480291B7E1_OFFSET UNITYSDK_OFFSET(0x185EC2D0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x185EBEB0)
#define CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x185EC250)
#define CLASS_2_7858266B34A2C48E_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x185EC090)
#define CLASS_2_7858266B34A2C48E_METHOD_2_7BB881FF8A7B80C2_OFFSET UNITYSDK_OFFSET(0x185EC480)
#define CLASS_2_7858266B34A2C48E_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x185EBE60)
#define CLASS_2_7858266B34A2C48E_METHOD_2_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x185EC530)
#define CLASS_2_7858266B34A2C48E_METHOD_2_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x185EC110)
#define CLASS_2_7858266B34A2C48E_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x185EBF50)
#define CLASS_2_7858266B34A2C48E_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x185EBCB0)
#define CLASS_2_7858266B34A2C48E_SET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x185EC650)
#define CLASS_2_7858266B34A2C48E__CTOR_OFFSET UNITYSDK_OFFSET(0x185EC660)
#define CLASS_2_7858266B34A2C48E___DOACTIVE_B__7_0_OFFSET UNITYSDK_OFFSET(0x185EC6A0)

inline static constexpr unsigned int Class_2_7858266B34A2C48E_TypeDefinitionIndex = 54571;

class Class_2_7858266B34A2C48E : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* Field_2_0; // 0x18
	::UnityEngine::Coroutine* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::UnityEngine::Coroutine* Field_2_3; // 0x30
	::UnityEngine::Coroutine* Field_2_4; // 0x38
	::System::String* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0x48
	::System::String* Field_2_7; // 0x50
	::System::String* Field_2_8; // 0x58
	::System::String* Field_2_9; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_2_10; // 0x68
	::RPG::Client::TextID Field_2_11; // 0x70
	::System::Boolean _IsFarmElementActive_k__BackingField; // 0x80
	::System::Boolean Field_2_13; // 0x81
	::RPG::GameCore::FarmElementPropState Field_2_14; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
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

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_F978A1D172468895_OFFSET))(this);
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

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7858266B34A2C48E_METHOD_2_62593EE2FE331D20_OFFSET))(this);
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
