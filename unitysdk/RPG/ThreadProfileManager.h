#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { class ThreadStatProfiler; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define RPG_THREADPROFILEMANAGER_ADDPROFILER_OFFSET UNITYSDK_OFFSET(0x1EF969C0)
#define RPG_THREADPROFILEMANAGER_COLLECTINFOS_OFFSET UNITYSDK_OFFSET(0x1EF96A50)
#define RPG_THREADPROFILEMANAGER_DISPATCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1EF930B0)
#define RPG_THREADPROFILEMANAGER_EXPORTTHREADTIMESAMPLES_OFFSET UNITYSDK_OFFSET(0x1EF96E40)
#define RPG_THREADPROFILEMANAGER_GETMARKERNAMESSTR_OFFSET UNITYSDK_OFFSET(0x1EF96C10)
#define RPG_THREADPROFILEMANAGER_GETPROFILELIST_OFFSET UNITYSDK_OFFSET(0x1EF96820)
#define RPG_THREADPROFILEMANAGER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF96A60)
#define RPG_THREADPROFILEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF97E00)

namespace RPG
{
	inline static constexpr unsigned int ThreadProfileManager_TypeDefinitionIndex = 34491;

	class ThreadProfileManager : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentBag_1<::RPG::ThreadStatProfiler*>** StaticGet_AllProfilers()
		{
			return (::System::Collections::Concurrent::ConcurrentBag_1<::RPG::ThreadStatProfiler*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0xAE0);
		}
		static ::Il2CppArray<::RPG::ThreadStatProfiler*>** StaticGet_ProfileListTemp()
		{
			return (::Il2CppArray<::RPG::ThreadStatProfiler*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0xAE8);
		}
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>** StaticGet_MainThreadCmdQueue()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0xAF0);
		}
		static ::System::Boolean* StaticGet_bEnableProfile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0x560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::RPG::ThreadStatProfiler*>* GetProfileList()
		{
			return ((::Il2CppArray<::RPG::ThreadStatProfiler*>*(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_GETPROFILELIST_OFFSET))();
		}

		static ::System::Void AddProfiler(::RPG::ThreadStatProfiler* a1)
		{
			return ((::System::Void(*)(::RPG::ThreadStatProfiler*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_ADDPROFILER_OFFSET))(a1);
		}

		static ::System::Void CollectInfos()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_COLLECTINFOS_OFFSET))();
		}

		static ::System::Void DispatchToMainThread(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_DISPATCHTOMAINTHREAD_OFFSET))(a1);
		}

		static ::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_ONLATEUPDATE_OFFSET))();
		}

		static ::System::String* GetMarkerNamesStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_GETMARKERNAMESSTR_OFFSET))();
		}

		static ::System::Void ExportThreadTimeSamples(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_EXPORTTHREADTIMESAMPLES_OFFSET))(a1);
		}
	};
}
