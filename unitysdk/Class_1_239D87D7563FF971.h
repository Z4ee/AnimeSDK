#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class AkExternalSourceInfoArray;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_239D87D7563FF971_CLEAR_OFFSET UNITYSDK_OFFSET(0x8A62000)
#define CLASS_1_239D87D7563FF971_METHOD_1_316436ACB0C7F148_OFFSET UNITYSDK_OFFSET(0x8A62180)
#define CLASS_1_239D87D7563FF971_METHOD_1_580A992837DF3548_OFFSET UNITYSDK_OFFSET(0x8A62090)
#define CLASS_1_239D87D7563FF971_METHOD_1_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x8A622D0)
#define CLASS_1_239D87D7563FF971_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x8A622C0)
#define CLASS_1_239D87D7563FF971_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8A62350)
#define CLASS_1_239D87D7563FF971__CTOR_OFFSET UNITYSDK_OFFSET(0x8A62360)

inline static constexpr unsigned int Class_1_239D87D7563FF971_TypeDefinitionIndex = 48369;

class Class_1_239D87D7563FF971 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_8; // 0x10
	::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* Field_1_3; // 0x18
	::System::Action_1<::System::UInt32>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x28
	::AkExternalSourceInfoArray* Field_1_1; // 0x30
	::System::String* Field_1_0; // 0x38
	::System::Single Field_1_5; // 0x40
	::AkCallbackType Field_1_6; // 0x44
	::System::Int32 Field_1_9; // 0x48
	::System::UInt32 Field_1_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971_CLEAR_OFFSET))(this);
	}

	static ::System::UInt32 Method_1_580A992837DF3548(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971_METHOD_1_580A992837DF3548_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_316436ACB0C7F148()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971_METHOD_1_316436ACB0C7F148_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971_METHOD_1_83A2D2FF4410F4BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_239D87D7563FF971_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
