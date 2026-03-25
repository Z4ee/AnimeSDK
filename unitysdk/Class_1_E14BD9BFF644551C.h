#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_5C3804B21DF947F4;
class Class_1_643E8C5145F2D973;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define CLASS_1_E14BD9BFF644551C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AFB370)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_01ADF0AF04F7E1C9_OFFSET UNITYSDK_OFFSET(0x10AFB5D0)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10AFB2D0)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_60DEF8D9EE8F0CF0_OFFSET UNITYSDK_OFFSET(0x10AFB530)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x10AFB9B0)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_B2B45A0FDF809296_OFFSET UNITYSDK_OFFSET(0x10AFBBB0)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_BF966614173113CA_OFFSET UNITYSDK_OFFSET(0x10AFB7D0)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_C1B8E22342A271F3_OFFSET UNITYSDK_OFFSET(0x10AFC070)
#define CLASS_1_E14BD9BFF644551C_METHOD_1_C83D586A49F0396E_OFFSET UNITYSDK_OFFSET(0x10AFB4C0)
#define CLASS_1_E14BD9BFF644551C__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFB250)

inline static constexpr unsigned int Class_1_E14BD9BFF644551C_TypeDefinitionIndex = 55741;

class Class_1_E14BD9BFF644551C : public ::System::Object
{
public:
	::Class_1_5C3804B21DF947F4* Field_1_3; // 0x10
	::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_643E8C5145F2D973*>* Field_1_4; // 0x20
	::System::Boolean Field_1_0; // 0x28
	::System::Boolean Field_1_1; // 0x29
	::System::Single Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C83D586A49F0396E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_C83D586A49F0396E_OFFSET))(this, a1);
	}

	::System::Void Method_1_01ADF0AF04F7E1C9(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_01ADF0AF04F7E1C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF966614173113CA(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_BF966614173113CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_60DEF8D9EE8F0CF0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_60DEF8D9EE8F0CF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2B45A0FDF809296(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_B2B45A0FDF809296_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1B8E22342A271F3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_C1B8E22342A271F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14BD9BFF644551C_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
