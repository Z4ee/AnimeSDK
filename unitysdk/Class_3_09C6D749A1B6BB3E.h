#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_09C6D749A1B6BB3E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFAB2D50)
#define CLASS_3_09C6D749A1B6BB3E_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xFAB2D30)
#define CLASS_3_09C6D749A1B6BB3E_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xFAB28C0)
#define CLASS_3_09C6D749A1B6BB3E_METHOD_3_043C7D36DE4B7257_OFFSET UNITYSDK_OFFSET(0xFAB2F70)
#define CLASS_3_09C6D749A1B6BB3E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xFAB3000)
#define CLASS_3_09C6D749A1B6BB3E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xFAB3090)
#define CLASS_3_09C6D749A1B6BB3E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFAB24E0)
#define CLASS_3_09C6D749A1B6BB3E__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAB2DA0)
#define CLASS_3_09C6D749A1B6BB3E__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB2E20)

inline static constexpr unsigned int Class_3_09C6D749A1B6BB3E_TypeDefinitionIndex = 79361;

class Class_3_09C6D749A1B6BB3E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x8; // 0x0
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_3_5; // 0x48
	::UnityEngine::GameObject* Field_3_0; // 0x50
	::System::String* Field_3_3; // 0x58
	::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* Field_3_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* Field_3_2; // 0x68
	::System::Boolean Field_3_1; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_ONCLEAN_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_3_043C7D36DE4B7257()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_METHOD_3_043C7D36DE4B7257_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_09C6D749A1B6BB3E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_09C6D749A1B6BB3E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_09C6D749A1B6BB3E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
