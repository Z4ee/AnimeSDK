#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Reflection/Emit/AssemblyBuilderAccess.h"

namespace System { class AppDomainSetup; }
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
namespace System::Reflection::Emit { class AssemblyBuilder; }
namespace System::Runtime::ExceptionServices { class FirstChanceExceptionEventArgs; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class CADMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class CADMethodReturnMessage; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_APPDOMAIN_ADD_ASSEMBLYLOAD_OFFSET UNITYSDK_OFFSET(0x1C30D770)
#define SYSTEM_APPDOMAIN_ADD_DOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C30D870)
#define SYSTEM_APPDOMAIN_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C30D970)
#define SYSTEM_APPDOMAIN_DEFINEDYNAMICASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C30DA70)
#define SYSTEM_APPDOMAIN_DOASSEMBLYLOAD_OFFSET UNITYSDK_OFFSET(0x1C30CAC0)
#define SYSTEM_APPDOMAIN_DOASSEMBLYRESOLVE_OFFSET UNITYSDK_OFFSET(0x1C30CBD0)
#define SYSTEM_APPDOMAIN_DODOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C30D590)
#define SYSTEM_APPDOMAIN_DORESOURCERESOLVE_OFFSET UNITYSDK_OFFSET(0x1C30D420)
#define SYSTEM_APPDOMAIN_DOTYPERESOLVE_OFFSET UNITYSDK_OFFSET(0x1C30D060)
#define SYSTEM_APPDOMAIN_GETCURDOMAIN_OFFSET UNITYSDK_OFFSET(0x1C30C430)
#define SYSTEM_APPDOMAIN_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C30C650)
#define SYSTEM_APPDOMAIN_GETDOMAINID_OFFSET UNITYSDK_OFFSET(0x1C30CA50)
#define SYSTEM_APPDOMAIN_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1C30C400)
#define SYSTEM_APPDOMAIN_GETPROCESSGUID_OFFSET UNITYSDK_OFFSET(0x1C30C9C0)
#define SYSTEM_APPDOMAIN_GETSETUP_OFFSET UNITYSDK_OFFSET(0x1C30C280)
#define SYSTEM_APPDOMAIN_GET_CURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x1C30C490)
#define SYSTEM_APPDOMAIN_GET_SETUPINFORMATION_OFFSET UNITYSDK_OFFSET(0x1C30C290)
#define SYSTEM_APPDOMAIN_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x1C30C660)
#define SYSTEM_APPDOMAIN_INTERNALGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C30C890)
#define SYSTEM_APPDOMAIN_INTERNALGETDEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C30C8C0)
#define SYSTEM_APPDOMAIN_INTERNALGETPROCESSGUID_OFFSET UNITYSDK_OFFSET(0x1C30C8F0)
#define SYSTEM_APPDOMAIN_INTERNALISFINALIZINGFORUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C30CA00)
#define SYSTEM_APPDOMAIN_INTERNALPOPDOMAINREF_OFFSET UNITYSDK_OFFSET(0x1C30C870)
#define SYSTEM_APPDOMAIN_INTERNALPUSHDOMAINREFBYID_OFFSET UNITYSDK_OFFSET(0x1C30C860)
#define SYSTEM_APPDOMAIN_INTERNALSETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C30C880)
#define SYSTEM_APPDOMAIN_INTERNALSETDOMAINBYID_OFFSET UNITYSDK_OFFSET(0x1C30C840)
#define SYSTEM_APPDOMAIN_INTERNALSETDOMAIN_OFFSET UNITYSDK_OFFSET(0x1C30C850)
#define SYSTEM_APPDOMAIN_INVOKEINDOMAINBYID_OFFSET UNITYSDK_OFFSET(0x1C30C900)
#define SYSTEM_APPDOMAIN_ISFINALIZINGFORUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C30CA10)
#define SYSTEM_APPDOMAIN_LOADASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C30C670)
#define SYSTEM_APPDOMAIN_LOADSATELLITE_OFFSET UNITYSDK_OFFSET(0x1C30C680)
#define SYSTEM_APPDOMAIN_LOAD_OFFSET UNITYSDK_OFFSET(0x1C30C750)
#define SYSTEM_APPDOMAIN_METHOD_2_0C0F4CA32C5F0FF3_OFFSET UNITYSDK_OFFSET(0x1C30C5A0)
#define SYSTEM_APPDOMAIN_METHOD_2_46733E97A29244E1_OFFSET UNITYSDK_OFFSET(0x1C30C740)
#define SYSTEM_APPDOMAIN_METHOD_2_9FEFC1DDA79BD768_OFFSET UNITYSDK_OFFSET(0x1C30C4F0)
#define SYSTEM_APPDOMAIN_PROCESSMESSAGEINDOMAIN_OFFSET UNITYSDK_OFFSET(0x1C30D5B0)
#define SYSTEM_APPDOMAIN_REMOVE_ASSEMBLYLOAD_OFFSET UNITYSDK_OFFSET(0x1C30D7F0)
#define SYSTEM_APPDOMAIN_REMOVE_DOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C30D8F0)
#define SYSTEM_APPDOMAIN_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C30D9F0)
#define SYSTEM_APPDOMAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C30CA90)
#define SYSTEM_APPDOMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30C270)

namespace System
{
	inline static constexpr unsigned int AppDomain_TypeDefinitionIndex = 355;

	class AppDomain : public ::System::MarshalByRefObject
	{
	public:
		static ::System::AppDomain** StaticGet_default_domain()
		{
			return (::System::AppDomain**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x1020);
		}
		static ::System::String** StaticGet__process_guid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x1028);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_type_resolve_in_progress()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet__principal()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_assembly_resolve_in_progress_refonly()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AppDomain_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_assembly_resolve_in_progress()
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

		::System::AppDomainSetup* getSetup()
		{
			return ((::System::AppDomainSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETSETUP_OFFSET))(this);
		}

		::System::AppDomainSetup* get_SetupInformation()
		{
			return ((::System::AppDomainSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GET_SETUPINFORMATION_OFFSET))(this);
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

		::Il2CppArray<::System::Reflection::Assembly*>* Method_2_9FEFC1DDA79BD768(::System::Boolean refOnly)
		{
			return ((::Il2CppArray<::System::Reflection::Assembly*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_METHOD_2_9FEFC1DDA79BD768_OFFSET))(this, refOnly);
		}

		::Il2CppArray<::System::Reflection::Assembly*>* Method_2_0C0F4CA32C5F0FF3()
		{
			return ((::Il2CppArray<::System::Reflection::Assembly*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_METHOD_2_0C0F4CA32C5F0FF3_OFFSET))(this);
		}

		::System::Object* GetData(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETDATA_OFFSET))(this, name);
		}

		::System::Object* InitializeLifetimeService()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INITIALIZELIFETIMESERVICE_OFFSET))(this);
		}

		::System::Reflection::Assembly* LoadAssembly(::System::String* assemblyRef, ::System::Security::Policy::Evidence* securityEvidence, ::System::Boolean refOnly)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOADASSEMBLY_OFFSET))(this, assemblyRef, securityEvidence, refOnly);
		}

		::System::Reflection::Assembly* LoadSatellite(::System::Reflection::AssemblyName* assemblyRef, ::System::Boolean throwOnError)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOADSATELLITE_OFFSET))(this, assemblyRef, throwOnError);
		}

		::System::Reflection::Assembly* Method_2_46733E97A29244E1(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_METHOD_2_46733E97A29244E1_OFFSET))(this, assemblyString);
		}

		::System::Reflection::Assembly* Load(::System::String* assemblyString, ::System::Security::Policy::Evidence* assemblySecurity, ::System::Boolean refonly)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_OFFSET))(this, assemblyString, assemblySecurity, refonly);
		}

		static ::System::AppDomain* InternalSetDomainByID(::System::Int32 domain_id)
		{
			return ((::System::AppDomain*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETDOMAINBYID_OFFSET))(domain_id);
		}

		static ::System::AppDomain* InternalSetDomain(::System::AppDomain* context)
		{
			return ((::System::AppDomain*(*)(::System::AppDomain*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETDOMAIN_OFFSET))(context);
		}

		static ::System::Void InternalPushDomainRefByID(::System::Int32 domain_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALPUSHDOMAINREFBYID_OFFSET))(domain_id);
		}

		static ::System::Void InternalPopDomainRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALPOPDOMAINREF_OFFSET))();
		}

		static ::System::Runtime::Remoting::Contexts::Context* InternalSetContext(::System::Runtime::Remoting::Contexts::Context* context)
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETCONTEXT_OFFSET))(context);
		}

		static ::System::Runtime::Remoting::Contexts::Context* InternalGetContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETCONTEXT_OFFSET))();
		}

		static ::System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETDEFAULTCONTEXT_OFFSET))();
		}

		static ::System::String* InternalGetProcessGuid(::System::String* newguid)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETPROCESSGUID_OFFSET))(newguid);
		}

		static ::System::Object* InvokeInDomainByID(::System::Int32 domain_id, ::System::Reflection::MethodInfo* method, ::System::Object* obj, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::Int32, ::System::Reflection::MethodInfo*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INVOKEINDOMAINBYID_OFFSET))(domain_id, method, obj, args);
		}

		static ::System::String* GetProcessGuid()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETPROCESSGUID_OFFSET))();
		}

		static ::System::Boolean InternalIsFinalizingForUnload(::System::Int32 domain_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALISFINALIZINGFORUNLOAD_OFFSET))(domain_id);
		}

		::System::Boolean IsFinalizingForUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ISFINALIZINGFORUNLOAD_OFFSET))(this);
		}

		::System::Int32 getDomainID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETDOMAINID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_TOSTRING_OFFSET))(this);
		}

		::System::Void DoAssemblyLoad(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOASSEMBLYLOAD_OFFSET))(this, assembly);
		}

		::System::Reflection::Assembly* DoAssemblyResolve(::System::String* name, ::System::Reflection::Assembly* requestingAssembly, ::System::Boolean refonly)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOASSEMBLYRESOLVE_OFFSET))(this, name, requestingAssembly, refonly);
		}

		::System::Reflection::Assembly* DoTypeResolve(::System::Object* name_or_tb)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOTYPERESOLVE_OFFSET))(this, name_or_tb);
		}

		::System::Reflection::Assembly* DoResourceResolve(::System::String* name, ::System::Reflection::Assembly* requesting)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DORESOURCERESOLVE_OFFSET))(this, name, requesting);
		}

		::System::Void DoDomainUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DODOMAINUNLOAD_OFFSET))(this);
		}

		::System::Void ProcessMessageInDomain(::Il2CppArray<::System::Byte>* arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg, ::Il2CppArray<::System::Byte>*& arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*& cadMrm)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::Il2CppArray<::System::Byte>*&, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*&))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_PROCESSMESSAGEINDOMAIN_OFFSET))(this, arrRequest, cadMsg, arrResponse, cadMrm);
		}

		::System::Void add_AssemblyLoad(::System::AssemblyLoadEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::AssemblyLoadEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_ASSEMBLYLOAD_OFFSET))(this, value);
		}

		::System::Void remove_AssemblyLoad(::System::AssemblyLoadEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::AssemblyLoadEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_ASSEMBLYLOAD_OFFSET))(this, value);
		}

		::System::Void add_DomainUnload(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_DOMAINUNLOAD_OFFSET))(this, value);
		}

		::System::Void remove_DomainUnload(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_DOMAINUNLOAD_OFFSET))(this, value);
		}

		::System::Void add_UnhandledException(::System::UnhandledExceptionEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UnhandledExceptionEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_UNHANDLEDEXCEPTION_OFFSET))(this, value);
		}

		::System::Void remove_UnhandledException(::System::UnhandledExceptionEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UnhandledExceptionEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(this, value);
		}

		::System::Reflection::Emit::AssemblyBuilder* DefineDynamicAssembly(::System::Reflection::AssemblyName* name, ::System::Reflection::Emit::AssemblyBuilderAccess access)
		{
			return ((::System::Reflection::Emit::AssemblyBuilder*(*)(::PVOID, ::System::Reflection::AssemblyName*, ::System::Reflection::Emit::AssemblyBuilderAccess))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DEFINEDYNAMICASSEMBLY_OFFSET))(this, name, access);
		}
	};
}
