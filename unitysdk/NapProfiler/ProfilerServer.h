#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2DAF815691F591CB;
namespace NapProfiler { class FpsCalc; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Threading { class Thread; }

#define NAPPROFILER_PROFILERSERVER_APPENDDATA_OFFSET UNITYSDK_OFFSET(0x12D41EF0)
#define NAPPROFILER_PROFILERSERVER_CLOSE_OFFSET UNITYSDK_OFFSET(0x12D42220)
#define NAPPROFILER_PROFILERSERVER_GETFPS_OFFSET UNITYSDK_OFFSET(0x12D41A80)
#define NAPPROFILER_PROFILERSERVER_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x12D42580)
#define NAPPROFILER_PROFILERSERVER_METHOD_5_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x12D42810)
#define NAPPROFILER_PROFILERSERVER_METHOD_5_C87BCBC40D606D5F_OFFSET UNITYSDK_OFFSET(0x12D42BC0)
#define NAPPROFILER_PROFILERSERVER_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x12D42DC0)
#define NAPPROFILER_PROFILERSERVER_ONSTARTUP_OFFSET UNITYSDK_OFFSET(0x12D41580)
#define NAPPROFILER_PROFILERSERVER_QUERYFPS_OFFSET UNITYSDK_OFFSET(0x12D418B0)
#define NAPPROFILER_PROFILERSERVER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x12D41C10)
#define NAPPROFILER_PROFILERSERVER_STARTSERVER_OFFSET UNITYSDK_OFFSET(0x12D415C0)
#define NAPPROFILER_PROFILERSERVER_START_OFFSET UNITYSDK_OFFSET(0x12D423C0)
#define NAPPROFILER_PROFILERSERVER_STOPSERVER_OFFSET UNITYSDK_OFFSET(0x12D42010)
#define NAPPROFILER_PROFILERSERVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12D42600)
#define NAPPROFILER_PROFILERSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D42B90)
#define NAPPROFILER_PROFILERSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x12D42AF0)

namespace NapProfiler
{
	inline static constexpr unsigned int ProfilerServer_TypeDefinitionIndex = 78513;

	class ProfilerServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Object** StaticGet_Field_5_0()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ProfilerServer_TypeDefinitionIndex)->GetStaticField(0x43360);
		}
		static ::NapProfiler::ProfilerServer** StaticGet_Field_5_7()
		{
			return (::NapProfiler::ProfilerServer**)Il2CppClass::FromTypeDefinitionIndex(ProfilerServer_TypeDefinitionIndex)->GetStaticField(0x43368);
		}
		// static const ::System::Int32 Port = 0x1F74; // 0x0
		::System::Net::Sockets::TcpListener* Field_5_6; // 0x18
		::System::Threading::Thread* Field_5_5; // 0x20
		::System::Net::Sockets::TcpClient* Field_5_4; // 0x28
		::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_2DAF815691F591CB*>* Field_5_11; // 0x30
		::NapProfiler::FpsCalc* Field_5_10; // 0x38
		::System::String* Field_5_9; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER__CCTOR_OFFSET))();
		}

		static ::System::Void OnStartup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_ONSTARTUP_OFFSET))();
		}

		static ::System::Void StartServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_STARTSERVER_OFFSET))();
		}

		static ::System::Single QueryFps()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_QUERYFPS_OFFSET))();
		}

		static ::System::Void SendData(::Class_1_2DAF815691F591CB* a1)
		{
			return ((::System::Void(*)(::Class_1_2DAF815691F591CB*))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_SENDDATA_OFFSET))(a1);
		}

		static ::System::Void StopServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_STOPSERVER_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_START_OFFSET))(this);
		}

		static ::System::String* GetIpAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_GETIPADDRESS_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_UPDATE_OFFSET))(this);
		}

		::System::Single GetFps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_GETFPS_OFFSET))(this);
		}

		::System::Void AppendData(::Class_1_2DAF815691F591CB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DAF815691F591CB*))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_APPENDDATA_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_CLOSE_OFFSET))(this);
		}

		::System::Void Method_5_AC7CD4175E0A3EF8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_METHOD_5_AC7CD4175E0A3EF8_OFFSET))(this);
		}

		::System::String* Method_5_C87BCBC40D606D5F()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_METHOD_5_C87BCBC40D606D5F_OFFSET))(this);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_METHOD_5_F978A1D172468895_OFFSET))(this);
		}
	};
}
