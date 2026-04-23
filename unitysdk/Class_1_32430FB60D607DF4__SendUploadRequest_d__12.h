#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32430FB60D607DF4;
namespace RPG::Client { class GameReplayModel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB220450)
#define CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB220BF0)
#define CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB220C50)
#define CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB220C00)
#define CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB220440)
#define CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0xB21ED40)

inline static constexpr unsigned int Class_1_32430FB60D607DF4__SendUploadRequest_d__12_TypeDefinitionIndex = 56243;

class Class_1_32430FB60D607DF4__SendUploadRequest_d__12 : public ::System::Object
{
public:
	::System::Action* finishCallback; // 0x10
	::Class_1_32430FB60D607DF4* __4__this; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* reportingList; // 0x20
	::System::Object* __2__current; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4__SENDUPLOADREQUEST_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
