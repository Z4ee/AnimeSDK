#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ParallelFileHash_FileChunk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IFileHashTask; }
namespace Foundation { class ParallelFileHash_Config; }
namespace Foundation { class ParallelFileHash_Task; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::IO { class FileStream; }
namespace System::Threading { class Thread; }

#define FOUNDATION_PARALLELFILEHASH_ABORT_OFFSET UNITYSDK_OFFSET(0x14798150)
#define FOUNDATION_PARALLELFILEHASH_ADDTASKS_OFFSET UNITYSDK_OFFSET(0x147978E0)
#define FOUNDATION_PARALLELFILEHASH_CHECKALLFINISH_OFFSET UNITYSDK_OFFSET(0x14795EA0)
#define FOUNDATION_PARALLELFILEHASH_GET_FILEREADRETRYCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x14796070)
#define FOUNDATION_PARALLELFILEHASH_GET_ISFILEREADRETRY_OFFSET UNITYSDK_OFFSET(0x14796010)
#define FOUNDATION_PARALLELFILEHASH_GO_OFFSET UNITYSDK_OFFSET(0x14797B50)
#define FOUNDATION_PARALLELFILEHASH_HASHWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x147943A0)
#define FOUNDATION_PARALLELFILEHASH_IOWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x14796150)
#define FOUNDATION_PARALLELFILEHASH_ONHASHFINISH_OFFSET UNITYSDK_OFFSET(0x14795A30)
#define FOUNDATION_PARALLELFILEHASH_ONTASKFAILED_OFFSET UNITYSDK_OFFSET(0x14795D20)
#define FOUNDATION_PARALLELFILEHASH_OPENFILESTREAM_OFFSET UNITYSDK_OFFSET(0x14797520)
#define FOUNDATION_PARALLELFILEHASH_RESETBLOCK_OFFSET UNITYSDK_OFFSET(0x14795BB0)
#define FOUNDATION_PARALLELFILEHASH_RESET_OFFSET UNITYSDK_OFFSET(0x14797BA0)
#define FOUNDATION_PARALLELFILEHASH_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x14797AE0)
#define FOUNDATION_PARALLELFILEHASH_START_OFFSET UNITYSDK_OFFSET(0x14798000)
#define FOUNDATION_PARALLELFILEHASH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14798330)
#define FOUNDATION_PARALLELFILEHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x147981A0)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileHash_TypeDefinitionIndex = 87353;

	class ParallelFileHash : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_FileReadRetryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParallelFileHash_TypeDefinitionIndex)->GetStaticField(0x11FF0);
		}
		// static const ::System::Int32 BlockTimeout = 0x5; // 0x0
		::System::Action_2<::Foundation::IFileHashTask*, ::System::UInt64>* onFileTaskFinish; // 0x10
		::System::Collections::Generic::List_1<::System::Threading::Thread*>* threads; // 0x18
		::System::Object* ioBlock; // 0x20
		::System::Object* fileTaskBlock; // 0x28
		::System::Object* hashCheckBlock; // 0x30
		::System::Diagnostics::Stopwatch* hashStopwatch; // 0x38
		::System::Diagnostics::Stopwatch* ioStopwatch; // 0x40
		::System::Collections::Concurrent::ConcurrentQueue_1<::Foundation::IFileHashTask*>* fileTaskQueue; // 0x48
		::System::Collections::Concurrent::ConcurrentQueue_1<::Foundation::ParallelFileHash_FileChunk>* ioChunks; // 0x50
		::System::Collections::Generic::List_1<::Foundation::IFileHashTask*>* finishList; // 0x58
		::System::Collections::Concurrent::ConcurrentQueue_1<::Foundation::ParallelFileHash_Task*>* taskQueue; // 0x60
		::System::Boolean stop; // 0x68
		::System::Int32 chunkSize; // 0x6C
		::System::Int32 hashThreadCount; // 0x70
		::System::Int32 ioThreadCount; // 0x74
		::System::Int32 initialChunks; // 0x78
		::System::Int32 _taskCount; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH__CCTOR_OFFSET))();
		}

		::System::Void HashWorkThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_HASHWORKTHREAD_OFFSET))(this);
		}

		::System::Boolean get_IsFileReadRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_GET_ISFILEREADRETRY_OFFSET))(this);
		}

		::System::Int32 get_FileReadRetryCountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_GET_FILEREADRETRYCOUNTMAX_OFFSET))(this);
		}

		::System::Void IoWorkThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_IOWORKTHREAD_OFFSET))(this);
		}

		::System::IO::FileStream* OpenFileStream(::Foundation::ParallelFileHash_Task* task)
		{
			return ((::System::IO::FileStream*(*)(::PVOID, ::Foundation::ParallelFileHash_Task*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_OPENFILESTREAM_OFFSET))(this, task);
		}

		::System::Void AddTasks(::System::Collections::Generic::List_1<::Foundation::IFileHashTask*>* fileTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::IFileHashTask*>*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_ADDTASKS_OFFSET))(this, fileTask);
		}

		::System::Void SetConfig(::Foundation::ParallelFileHash_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileHash_Config*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_SETCONFIG_OFFSET))(this, config);
		}

		::System::Void GO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_GO_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_ABORT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_START_OFFSET))(this);
		}

		::System::Void OnHashFinish(::Foundation::ParallelFileHash_Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileHash_Task*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_ONHASHFINISH_OFFSET))(this, task);
		}

		::System::Void OnTaskFailed(::Foundation::ParallelFileHash_Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileHash_Task*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_ONTASKFAILED_OFFSET))(this, task);
		}

		::System::Boolean CheckAllFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_CHECKALLFINISH_OFFSET))(this);
		}

		::System::Void ResetBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_RESETBLOCK_OFFSET))(this);
		}
	};
}
