#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A9965B0)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A996CD0)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A996C60)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A996EB0)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A996CC0)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A996C70)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9961E0)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x1A996110)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A9964D0)
#define MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1A9963F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode__get_DeepChildren_d__43_TypeDefinitionIndex = 19893;

	class JSONNode__get_DeepChildren_d__43 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* _D_5__4; // 0x10
		::MiHoYo::SDK::JSONNode* __4__this; // 0x18
		::MiHoYo::SDK::JSONNode* _C_5__2; // 0x20
		::MiHoYo::SDK::JSONNode* __2__current; // 0x28
		::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>* __s__1; // 0x30
		::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>* __s__3; // 0x38
		::System::Int32 __l__initialThreadId; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY2_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* System_Collections_Generic_IEnumerator_MiHoYo_SDK_JSONNode__get_Current()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYO_SDK_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYo_SDK_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYO_SDK_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
