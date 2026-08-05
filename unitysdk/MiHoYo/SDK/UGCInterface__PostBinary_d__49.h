#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D2849F0)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D284A70)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D284AD0)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D284A80)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2849E0)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2849D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface__PostBinary_d__49_TypeDefinitionIndex = 37496;

	class UGCInterface__PostBinary_d__49 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback; // 0x18
		::System::String* strUrl; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x28
		::System::String* strContentType; // 0x30
		::System::Action* timeoutCallback; // 0x38
		::Il2CppArray<::System::Byte>* body; // 0x40
		::System::Int32 nRetryCount; // 0x48
		::System::Single nTimeoutSeconds; // 0x4C
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
