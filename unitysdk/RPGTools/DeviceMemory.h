#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/RUsage.h"
#include "unitysdk/RPGTools/TaskVmInfo.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZEIMPL_OFFSET UNITYSDK_OFFSET(0xB2E41F0)
#define RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xB2E4280)
#define RPGTOOLS_DEVICEMEMORY_GETAPPMEMORYINKB_OFFSET UNITYSDK_OFFSET(0xB2E4110)
#define RPGTOOLS_DEVICEMEMORY_GETAPPMEMORY_OFFSET UNITYSDK_OFFSET(0xB2DFBC0)
#define RPGTOOLS_DEVICEMEMORY_GETCOMPRESSEDMEM_OFFSET UNITYSDK_OFFSET(0xB2E40C0)
#define RPGTOOLS_DEVICEMEMORY_GETEXTERNALMEM_OFFSET UNITYSDK_OFFSET(0xB2E40A0)
#define RPGTOOLS_DEVICEMEMORY_GETINTERNALMEM_OFFSET UNITYSDK_OFFSET(0xB2E4090)
#define RPGTOOLS_DEVICEMEMORY_GETOOMADJ_OFFSET UNITYSDK_OFFSET(0xB2E4300)
#define RPGTOOLS_DEVICEMEMORY_GETOOMSCOREADJ_OFFSET UNITYSDK_OFFSET(0xB2E4330)
#define RPGTOOLS_DEVICEMEMORY_GETOOMSCORE_OFFSET UNITYSDK_OFFSET(0xB2E42D0)
#define RPGTOOLS_DEVICEMEMORY_GETPHYSFOOTPRINTMEM_OFFSET UNITYSDK_OFFSET(0xB2E1AB0)
#define RPGTOOLS_DEVICEMEMORY_GETPURGEABLEVOLATILEMEM_OFFSET UNITYSDK_OFFSET(0xB2E40D0)
#define RPGTOOLS_DEVICEMEMORY_GETRESIDENTMEM_OFFSET UNITYSDK_OFFSET(0xB2E40B0)
#define RPGTOOLS_DEVICEMEMORY_GETRUSAGE_OFFSET UNITYSDK_OFFSET(0xB2E40E0)
#define RPGTOOLS_DEVICEMEMORY_GETTASKVMINFO_OFFSET UNITYSDK_OFFSET(0xB2E4360)
#define RPGTOOLS_DEVICEMEMORY_SETGCFREESPACEDIVISOR_OFFSET UNITYSDK_OFFSET(0xB2E41E0)
#define RPGTOOLS_DEVICEMEMORY_UPDATEIOSVMINFO_OFFSET UNITYSDK_OFFSET(0xB2E41D0)
#define RPGTOOLS_DEVICEMEMORY__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2E4390)

namespace RPGTools
{
	inline static constexpr unsigned int DeviceMemory_TypeDefinitionIndex = 47387;

	class DeviceMemory : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Int32>** StaticGet__asyncGetMemoryDelegate()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x5DD30);
		}
		static ::System::Int32* StaticGet_oom_score_adj()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x13360);
		}
		static ::System::Int32* StaticGet_currentFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x13364);
		}
		static ::System::Int32* StaticGet_GetMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x13368);
		}
		static ::System::Int32* StaticGet_oom_score()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x1336C);
		}
		static ::System::Int32* StaticGet_oom_adj()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x13370);
		}
		static ::System::Boolean* StaticGet_DisableRecordMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DeviceMemory_TypeDefinitionIndex)->GetStaticField(0x13374);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetInternalMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETINTERNALMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetExternalMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETEXTERNALMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetPhysFootPrintMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETPHYSFOOTPRINTMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetResidentMem()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETRESIDENTMEM_OFFSET))();
		}

		static ::System::Int32 GetCompressedMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETCOMPRESSEDMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetPurgeableVolatileMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETPURGEABLEVOLATILEMEM_OFFSET))(a1);
		}

		static ::RPGTools::RUsage GetRUsage(::System::Int32 a1)
		{
			return ((::RPGTools::RUsage(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETRUSAGE_OFFSET))(a1);
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

		static ::System::Void SetGCFreeSpaceDivisor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_SETGCFREESPACEDIVISOR_OFFSET))(a1);
		}

		static ::System::Int32 AsyncGetMemorySizeImpl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZEIMPL_OFFSET))();
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* AsyncGetMemorySize()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZE_OFFSET))();
		}

		static ::System::Int32 GetOomScore(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMSCORE_OFFSET))(a1);
		}

		static ::System::Int32 GetOomAdj(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMADJ_OFFSET))(a1);
		}

		static ::System::Int32 GetOomScoreAdj(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMSCOREADJ_OFFSET))(a1);
		}

		static ::RPGTools::TaskVmInfo GetTaskVmInfo(::System::IntPtr a1)
		{
			return ((::RPGTools::TaskVmInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETTASKVMINFO_OFFSET))(a1);
		}
	};
}
