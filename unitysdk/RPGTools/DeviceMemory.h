#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RUsage.h"
#include "unitysdk/RPGTools/TaskVmInfo.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZEIMPL_OFFSET UNITYSDK_OFFSET(0x8DF9940)
#define RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x8DF9A30)
#define RPGTOOLS_DEVICEMEMORY_GETAPPMEMORYINKB_OFFSET UNITYSDK_OFFSET(0x8DF97F0)
#define RPGTOOLS_DEVICEMEMORY_GETAPPMEMORY_OFFSET UNITYSDK_OFFSET(0x8DF5560)
#define RPGTOOLS_DEVICEMEMORY_GETCOMPRESSEDMEM_OFFSET UNITYSDK_OFFSET(0x8DF97A0)
#define RPGTOOLS_DEVICEMEMORY_GETEXTERNALMEM_OFFSET UNITYSDK_OFFSET(0x8DF9780)
#define RPGTOOLS_DEVICEMEMORY_GETINTERNALMEM_OFFSET UNITYSDK_OFFSET(0x8DF9770)
#define RPGTOOLS_DEVICEMEMORY_GETOOMADJ_OFFSET UNITYSDK_OFFSET(0x8DF9AB0)
#define RPGTOOLS_DEVICEMEMORY_GETOOMSCOREADJ_OFFSET UNITYSDK_OFFSET(0x8DF9AE0)
#define RPGTOOLS_DEVICEMEMORY_GETOOMSCORE_OFFSET UNITYSDK_OFFSET(0x8DF9A80)
#define RPGTOOLS_DEVICEMEMORY_GETPHYSFOOTPRINTMEM_OFFSET UNITYSDK_OFFSET(0x8DF7480)
#define RPGTOOLS_DEVICEMEMORY_GETPURGEABLEVOLATILEMEM_OFFSET UNITYSDK_OFFSET(0x8DF97B0)
#define RPGTOOLS_DEVICEMEMORY_GETRESIDENTMEM_OFFSET UNITYSDK_OFFSET(0x8DF9790)
#define RPGTOOLS_DEVICEMEMORY_GETRUSAGE_OFFSET UNITYSDK_OFFSET(0x8DF97C0)
#define RPGTOOLS_DEVICEMEMORY_GETTASKVMINFO_OFFSET UNITYSDK_OFFSET(0x8DF9B10)
#define RPGTOOLS_DEVICEMEMORY_SETGCFREESPACEDIVISOR_OFFSET UNITYSDK_OFFSET(0x8DF9930)
#define RPGTOOLS_DEVICEMEMORY_UPDATEIOSVMINFO_OFFSET UNITYSDK_OFFSET(0x8DF9920)
#define RPGTOOLS_DEVICEMEMORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DF9B40)

namespace RPGTools
{
	inline static constexpr unsigned int DeviceMemory_TypeDefinitionIndex = 40983;

	class DeviceMemory : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Int32>** StaticGet__asyncGetMemoryDelegate()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x50A0);
		}
		static ::System::Int32* StaticGet_oom_adj()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x29B0);
		}
		static ::System::Int32* StaticGet_oom_score_adj()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x29B4);
		}
		static ::System::Int32* StaticGet_currentFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x29B8);
		}
		static ::System::Int32* StaticGet_GetMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x29BC);
		}
		static ::System::Int32* StaticGet_oom_score()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x29C0);
		}
		static ::System::Boolean* StaticGet_DisableRecordMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x29C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetInternalMem(::System::Int32 frameCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETINTERNALMEM_OFFSET))(frameCount);
		}

		static ::System::Int32 GetExternalMem(::System::Int32 frameCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETEXTERNALMEM_OFFSET))(frameCount);
		}

		static ::System::Int32 GetPhysFootPrintMem(::System::Int32 frameCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETPHYSFOOTPRINTMEM_OFFSET))(frameCount);
		}

		static ::System::Int32 GetResidentMem()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETRESIDENTMEM_OFFSET))();
		}

		static ::System::Int32 GetCompressedMem(::System::Int32 frameCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETCOMPRESSEDMEM_OFFSET))(frameCount);
		}

		static ::System::Int32 GetPurgeableVolatileMem(::System::Int32 frameCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETPURGEABLEVOLATILEMEM_OFFSET))(frameCount);
		}

		static ::RPGTools::RUsage GetRUsage(::System::Int32 frameCount)
		{
			return ((::RPGTools::RUsage(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETRUSAGE_OFFSET))(frameCount);
		}

		static ::System::Int32 GetAppMemory()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETAPPMEMORY_OFFSET))();
		}

		static ::System::IntPtr UpdateIosVmInfo()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_UPDATEIOSVMINFO_OFFSET))();
		}

		static ::System::Int32 GetAppMemoryInKB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETAPPMEMORYINKB_OFFSET))();
		}

		static ::System::Void SetGCFreeSpaceDivisor(::System::Int32 divisor)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_SETGCFREESPACEDIVISOR_OFFSET))(divisor);
		}

		static ::System::Int32 AsyncGetMemorySizeImpl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZEIMPL_OFFSET))();
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* AsyncGetMemorySize()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZE_OFFSET))();
		}

		static ::System::Int32 GetOomScore(::System::Int32 frame)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMSCORE_OFFSET))(frame);
		}

		static ::System::Int32 GetOomAdj(::System::Int32 frame)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMADJ_OFFSET))(frame);
		}

		static ::System::Int32 GetOomScoreAdj(::System::Int32 frame)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMSCOREADJ_OFFSET))(frame);
		}

		static ::RPGTools::TaskVmInfo GetTaskVmInfo(::System::IntPtr ptr)
		{
			return ((::RPGTools::TaskVmInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETTASKVMINFO_OFFSET))(ptr);
		}
	};
}
