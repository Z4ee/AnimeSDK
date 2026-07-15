#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class AssemblyLoadEventHandler; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class ResolveEventHandler; }
namespace System { class String; }
namespace System { class UnhandledExceptionEventHandler; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::ExceptionServices { class FirstChanceExceptionEventArgs; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class CADMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class CADMethodReturnMessage; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_APPDOMAIN_ADD_DOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x15618130)
#define SYSTEM_APPDOMAIN_ADD_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x156181F0)
#define SYSTEM_APPDOMAIN_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x156182B0)
#define SYSTEM_APPDOMAIN_DOASSEMBLYLOAD_OFFSET UNITYSDK_OFFSET(0x15617590)
#define SYSTEM_APPDOMAIN_DOASSEMBLYRESOLVE_OFFSET UNITYSDK_OFFSET(0x15617620)
#define SYSTEM_APPDOMAIN_DODOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x15617E80)
#define SYSTEM_APPDOMAIN_DORESOURCERESOLVE_OFFSET UNITYSDK_OFFSET(0x15617D50)
#define SYSTEM_APPDOMAIN_DOTYPERESOLVE_OFFSET UNITYSDK_OFFSET(0x15617A10)
#define SYSTEM_APPDOMAIN_GETASSEMBLIES_1_OFFSET UNITYSDK_OFFSET(0x15616920)
#define SYSTEM_APPDOMAIN_GETASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x15616870)
#define SYSTEM_APPDOMAIN_GETCURDOMAIN_OFFSET UNITYSDK_OFFSET(0x156167B0)
#define SYSTEM_APPDOMAIN_GETCURRENTTHREADID_OFFSET UNITYSDK_OFFSET(0x15617550)
#define SYSTEM_APPDOMAIN_GETDATA_OFFSET UNITYSDK_OFFSET(0x156169D0)
#define SYSTEM_APPDOMAIN_GETDOMAINID_OFFSET UNITYSDK_OFFSET(0x15617510)
#define SYSTEM_APPDOMAIN_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x15616780)
#define SYSTEM_APPDOMAIN_GETMARSHALLEDDOMAINOBJREF_OFFSET UNITYSDK_OFFSET(0x15617EA0)
#define SYSTEM_APPDOMAIN_GETPROCESSGUID_OFFSET UNITYSDK_OFFSET(0x15617480)
#define SYSTEM_APPDOMAIN_GET_CURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x15616810)
#define SYSTEM_APPDOMAIN_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x156169E0)
#define SYSTEM_APPDOMAIN_INTERNALGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x15617350)
#define SYSTEM_APPDOMAIN_INTERNALGETDEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15617380)
#define SYSTEM_APPDOMAIN_INTERNALGETPROCESSGUID_OFFSET UNITYSDK_OFFSET(0x156173B0)
#define SYSTEM_APPDOMAIN_INTERNALISFINALIZINGFORUNLOAD_OFFSET UNITYSDK_OFFSET(0x156174C0)
#define SYSTEM_APPDOMAIN_INTERNALPOPDOMAINREF_OFFSET UNITYSDK_OFFSET(0x15617330)
#define SYSTEM_APPDOMAIN_INTERNALPUSHDOMAINREFBYID_OFFSET UNITYSDK_OFFSET(0x15617320)
#define SYSTEM_APPDOMAIN_INTERNALSETCONTEXT_OFFSET UNITYSDK_OFFSET(0x15617340)
#define SYSTEM_APPDOMAIN_INTERNALSETDOMAINBYID_OFFSET UNITYSDK_OFFSET(0x15617300)
#define SYSTEM_APPDOMAIN_INTERNALSETDOMAIN_OFFSET UNITYSDK_OFFSET(0x15617310)
#define SYSTEM_APPDOMAIN_INVOKEINDOMAINBYID_OFFSET UNITYSDK_OFFSET(0x156173C0)
#define SYSTEM_APPDOMAIN_ISFINALIZINGFORUNLOAD_OFFSET UNITYSDK_OFFSET(0x156174D0)
#define SYSTEM_APPDOMAIN_LOADASSEMBLY_OFFSET UNITYSDK_OFFSET(0x156169F0)
#define SYSTEM_APPDOMAIN_LOADSATELLITE_OFFSET UNITYSDK_OFFSET(0x15617140)
#define SYSTEM_APPDOMAIN_LOAD_1_OFFSET UNITYSDK_OFFSET(0x15616A10)
#define SYSTEM_APPDOMAIN_LOAD_2_OFFSET UNITYSDK_OFFSET(0x15617200)
#define SYSTEM_APPDOMAIN_LOAD_3_OFFSET UNITYSDK_OFFSET(0x15617210)
#define SYSTEM_APPDOMAIN_LOAD_OFFSET UNITYSDK_OFFSET(0x15616A00)
#define SYSTEM_APPDOMAIN_PROCESSMESSAGEINDOMAIN_OFFSET UNITYSDK_OFFSET(0x15617F70)
#define SYSTEM_APPDOMAIN_REMOVE_DOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x15618190)
#define SYSTEM_APPDOMAIN_REMOVE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x15618250)
#define SYSTEM_APPDOMAIN_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x15618310)
#define SYSTEM_APPDOMAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15617560)
#define SYSTEM_APPDOMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15616770)

namespace System
{
	inline static constexpr unsigned int AppDomain_TypeDefinitionIndex = 365;

	class AppDomain : public ::System::MarshalByRefObject
	{
	public:
		static ::System::AppDomain** StaticGet_default_domain()
		{
			return (::System::AppDomain**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x3800);
		}
		static ::System::String** StaticGet__process_guid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x3808);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_assembly_resolve_in_progress_refonly()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_assembly_resolve_in_progress()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet__principal()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_type_resolve_in_progress()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::IntPtr _mono_app_domain; // 0x18
		::System::Object* _evidence; // 0x20
		::System::Object* _granted; // 0x28
		::System::Int32 _principalPolicy; // 0x30
		::System::AssemblyLoadEventHandler* AssemblyLoad; // 0x38
		::System::ResolveEventHandler* AssemblyResolve; // 0x40
		::System::EventHandler* DomainUnload; // 0x48
		::System::EventHandler* ProcessExit; // 0x50
		::System::ResolveEventHandler* ResourceResolve; // 0x58
		::System::ResolveEventHandler* TypeResolve; // 0x60
		::System::UnhandledExceptionEventHandler* UnhandledException; // 0x68
		::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* FirstChanceException; // 0x70
		::System::Object* _domain_manager; // 0x78
		::System::ResolveEventHandler* ReflectionOnlyAssemblyResolve; // 0x80
		::System::Object* _activation; // 0x88
		::System::Object* _applicationIdentity; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* compatibility_switch; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN__CTOR_OFFSET))(this);
		}

		::System::String* getFriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETFRIENDLYNAME_OFFSET))(this);
		}

		static ::System::AppDomain* getCurDomain()
		{
			return ((::System::AppDomain*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETCURDOMAIN_OFFSET))();
		}

		static ::System::AppDomain* get_CurrentDomain()
		{
			return ((::System::AppDomain*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GET_CURRENTDOMAIN_OFFSET))();
		}

		::Il2CppArray<::System::Reflection::Assembly*>* GetAssemblies(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Reflection::Assembly*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETASSEMBLIES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::Assembly*>* GetAssemblies_1()
		{
			return ((::Il2CppArray<::System::Reflection::Assembly*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETASSEMBLIES_1_OFFSET))(this);
		}

		::System::Object* GetData(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETDATA_OFFSET))(this, a1);
		}

		::System::Object* InitializeLifetimeService()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INITIALIZELIFETIMESERVICE_OFFSET))(this);
		}

		::System::Reflection::Assembly* LoadAssembly(::System::String* a1, ::System::Security::Policy::Evidence* a2, ::System::Boolean a3)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOADASSEMBLY_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::Assembly* Load(::System::Reflection::AssemblyName* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_OFFSET))(this, a1);
		}

		::System::Reflection::Assembly* LoadSatellite(::System::Reflection::AssemblyName* a1, ::System::Boolean a2)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOADSATELLITE_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Assembly* Load_1(::System::Reflection::AssemblyName* a1, ::System::Security::Policy::Evidence* a2)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Assembly* Load_2(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_2_OFFSET))(this, a1);
		}

		::System::Reflection::Assembly* Load_3(::System::String* a1, ::System::Security::Policy::Evidence* a2, ::System::Boolean a3)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_3_OFFSET))(this, a1, a2, a3);
		}

		static ::System::AppDomain* InternalSetDomainByID(::System::Int32 a1)
		{
			return ((::System::AppDomain*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETDOMAINBYID_OFFSET))(a1);
		}

		static ::System::AppDomain* InternalSetDomain(::System::AppDomain* a1)
		{
			return ((::System::AppDomain*(*)(::System::AppDomain*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETDOMAIN_OFFSET))(a1);
		}

		static ::System::Void InternalPushDomainRefByID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALPUSHDOMAINREFBYID_OFFSET))(a1);
		}

		static ::System::Void InternalPopDomainRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALPOPDOMAINREF_OFFSET))();
		}

		static ::System::Runtime::Remoting::Contexts::Context* InternalSetContext(::System::Runtime::Remoting::Contexts::Context* a1)
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETCONTEXT_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Contexts::Context* InternalGetContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETCONTEXT_OFFSET))();
		}

		static ::System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETDEFAULTCONTEXT_OFFSET))();
		}

		static ::System::String* InternalGetProcessGuid(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETPROCESSGUID_OFFSET))(a1);
		}

		static ::System::Object* InvokeInDomainByID(::System::Int32 a1, ::System::Reflection::MethodInfo* a2, ::System::Object* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Object*(*)(::System::Int32, ::System::Reflection::MethodInfo*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INVOKEINDOMAINBYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetProcessGuid()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETPROCESSGUID_OFFSET))();
		}

		static ::System::Boolean InternalIsFinalizingForUnload(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALISFINALIZINGFORUNLOAD_OFFSET))(a1);
		}

		::System::Boolean IsFinalizingForUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ISFINALIZINGFORUNLOAD_OFFSET))(this);
		}

		::System::Int32 getDomainID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETDOMAINID_OFFSET))(this);
		}

		static ::System::Int32 GetCurrentThreadId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETCURRENTTHREADID_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_TOSTRING_OFFSET))(this);
		}

		::System::Void DoAssemblyLoad(::System::Reflection::Assembly* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOASSEMBLYLOAD_OFFSET))(this, a1);
		}

		::System::Reflection::Assembly* DoAssemblyResolve(::System::String* a1, ::System::Reflection::Assembly* a2, ::System::Boolean a3)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOASSEMBLYRESOLVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::Assembly* DoTypeResolve(::System::Object* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOTYPERESOLVE_OFFSET))(this, a1);
		}

		::System::Reflection::Assembly* DoResourceResolve(::System::String* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DORESOURCERESOLVE_OFFSET))(this, a1, a2);
		}

		::System::Void DoDomainUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DODOMAINUNLOAD_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetMarshalledDomainObjRef()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETMARSHALLEDDOMAINOBJREF_OFFSET))(this);
		}

		::System::Void ProcessMessageInDomain(::Il2CppArray<::System::Byte>* a1, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* a2, ::Il2CppArray<::System::Byte>*& a3, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::Il2CppArray<::System::Byte>*&, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*&))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_PROCESSMESSAGEINDOMAIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void add_DomainUnload(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_DOMAINUNLOAD_OFFSET))(this, a1);
		}

		::System::Void remove_DomainUnload(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_DOMAINUNLOAD_OFFSET))(this, a1);
		}

		::System::Void add_ProcessExit(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_PROCESSEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_ProcessExit(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_PROCESSEXIT_OFFSET))(this, a1);
		}

		::System::Void add_UnhandledException(::System::UnhandledExceptionEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UnhandledExceptionEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_UNHANDLEDEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void remove_UnhandledException(::System::UnhandledExceptionEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UnhandledExceptionEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(this, a1);
		}
	};
}
