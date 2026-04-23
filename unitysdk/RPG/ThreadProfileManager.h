#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { class ThreadStatProfiler; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define RPG_THREADPROFILEMANAGER_ADDPROFILER_OFFSET UNITYSDK_OFFSET(0x19D374D0)
#define RPG_THREADPROFILEMANAGER_COLLECTINFOS_OFFSET UNITYSDK_OFFSET(0x19D37560)
#define RPG_THREADPROFILEMANAGER_DISPATCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x19D33A40)
#define RPG_THREADPROFILEMANAGER_EXPORTTHREADTIMESAMPLES_OFFSET UNITYSDK_OFFSET(0x19D37950)
#define RPG_THREADPROFILEMANAGER_GETMARKERNAMESSTR_OFFSET UNITYSDK_OFFSET(0x19D37720)
#define RPG_THREADPROFILEMANAGER_GETPROFILELIST_OFFSET UNITYSDK_OFFSET(0x19D37330)
#define RPG_THREADPROFILEMANAGER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19D37570)
#define RPG_THREADPROFILEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D388B0)

namespace RPG
{
	inline static constexpr unsigned int ThreadProfileManager_TypeDefinitionIndex = 33246;

	class ThreadProfileManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::ThreadStatProfiler*>** StaticGet_ProfileListTemp()
		{
			return (::Il2CppArray<::RPG::ThreadStatProfiler*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0xD60);
		}
		static ::System::Collections::Concurrent::ConcurrentBag_1<::RPG::ThreadStatProfiler*>** StaticGet_AllProfilers()
		{
			return (::System::Collections::Concurrent::ConcurrentBag_1<::RPG::ThreadStatProfiler*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0xD68);
		}
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>** StaticGet_MainThreadCmdQueue()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0xD70);
		}
		static ::System::Boolean* StaticGet_bEnableProfile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileManager_TypeDefinitionIndex)->GetStaticField(0x800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::RPG::ThreadStatProfiler*>* GetProfileList()
		{
			return ((::Il2CppArray<::RPG::ThreadStatProfiler*>*(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_GETPROFILELIST_OFFSET))();
		}

		static ::System::Void AddProfiler(::RPG::ThreadStatProfiler* threadStatProfiler)
		{
			return ((::System::Void(*)(::RPG::ThreadStatProfiler*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_ADDPROFILER_OFFSET))(threadStatProfiler);
		}

		static ::System::Void CollectInfos()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_COLLECTINFOS_OFFSET))();
		}

		static ::System::Void DispatchToMainThread(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_DISPATCHTOMAINTHREAD_OFFSET))(action);
		}

		static ::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_ONLATEUPDATE_OFFSET))();
		}

		static ::System::String* GetMarkerNamesStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_GETMARKERNAMESSTR_OFFSET))();
		}

		static ::System::Void ExportThreadTimeSamples(::System::String* dirPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMANAGER_EXPORTTHREADTIMESAMPLES_OFFSET))(dirPath);
		}
	};
}
