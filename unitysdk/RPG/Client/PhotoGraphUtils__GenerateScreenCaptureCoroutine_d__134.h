#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphUtils_StorageFormatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::Client { class PhotoGraphFilterImage; }
namespace RPG::Client { class PhotoGraphUtils___c__DisplayClass134_0; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9F6B100)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F6B630)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F6B690)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9F6B640)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F6B0F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134__CTOR_OFFSET UNITYSDK_OFFSET(0x9F68F80)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils__GenerateScreenCaptureCoroutine_d__134_TypeDefinitionIndex = 56778;

	class PhotoGraphUtils__GenerateScreenCaptureCoroutine_d__134 : public ::System::Object
	{
	public:
		::RPG::Client::PhotoGraphFilterImage* image; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::PhotoGraphUtils___c__DisplayClass134_0* __8__1; // 0x20
		::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>* promise; // 0x28
		::System::Int32 __1__state; // 0x30
		::RPG::Client::PhotoGraphUtils_StorageFormatType formatType; // 0x34
		::System::Int32 _i_5__2; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENERATESCREENCAPTURECOROUTINE_D__134_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
