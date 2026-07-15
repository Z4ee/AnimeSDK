#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B73CDB0)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B73D030)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B73D090)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B73D040)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B73CDA0)
#define MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0x1B739F00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface__PostBinary_d__49_TypeDefinitionIndex = 44723;

	class UGCInterface__PostBinary_d__49 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::Il2CppArray<::System::Byte>* body; // 0x18
		::System::String* strContentType; // 0x20
		::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* completeCallback; // 0x28
		::System::Action* timeoutCallback; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x38
		::System::String* strUrl; // 0x40
		::System::Int32 nRetryCount; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Single nTimeoutSeconds; // 0x50

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__POSTBINARY_D__49__CTOR_OFFSET))(this, a1);
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
