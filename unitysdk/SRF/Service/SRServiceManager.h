#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Components/SRAutoSingleton_1.h"

namespace SRF { template <typename T> class SRList_1; }
namespace SRF::Service { class SRServiceManager_Service; }
namespace SRF::Service { class SRServiceManager_ServiceStub; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MethodInfo; }

#define SRF_SERVICE_SRSERVICEMANAGER_AUTOCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x19EA7990)
#define SRF_SERVICE_SRSERVICEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19EA7EA0)
#define SRF_SERVICE_SRSERVICEMANAGER_DEFAULTSERVICECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x19EA8390)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19EA76A0)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x19EA7340)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSTATICMETHODS_OFFSET UNITYSDK_OFFSET(0x19EA9210)
#define SRF_SERVICE_SRSERVICEMANAGER_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x19EA7670)
#define SRF_SERVICE_SRSERVICEMANAGER_HASSERVICE_OFFSET UNITYSDK_OFFSET(0x19EA7B40)
#define SRF_SERVICE_SRSERVICEMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x19EA84D0)
#define SRF_SERVICE_SRSERVICEMANAGER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x19EA7C30)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x19EA8540)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORSELECTORS_OFFSET UNITYSDK_OFFSET(0x19EA8BC0)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPE_OFFSET UNITYSDK_OFFSET(0x19EA82E0)
#define SRF_SERVICE_SRSERVICEMANAGER_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x19EA77F0)
#define SRF_SERVICE_SRSERVICEMANAGER_UPDATESTUBS_OFFSET UNITYSDK_OFFSET(0x19EA7F60)
#define SRF_SERVICE_SRSERVICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EA9290)
#define SRF_SERVICE_SRSERVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA9260)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager_TypeDefinitionIndex = 33327;

	class SRServiceManager : public ::SRF::Components::SRAutoSingleton_1<::SRF::Service::SRServiceManager*>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>** StaticGet__assemblies()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::Assembly*>**)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager_TypeDefinitionIndex)->GetStaticField(0x667B0);
		}
		static ::System::Boolean* StaticGet__hasQuit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager_TypeDefinitionIndex)->GetStaticField(0x10C50);
		}
		static ::System::Int32* StaticGet_LoadingCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager_TypeDefinitionIndex)->GetStaticField(0x10C54);
		}
		// static const ::System::Boolean EnableLogging; // 0x0
		::SRF::SRList_1<::SRF::Service::SRServiceManager_Service*>* _services; // 0x48
		::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>* _serviceStubs; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GET_ISLOADING_OFFSET))();
		}

		static ::System::Object* GetService(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSERVICE_OFFSET))(t);
		}

		static ::System::Object* GetServiceInternal(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSERVICEINTERNAL_OFFSET))(t);
		}

		static ::System::Boolean HasService(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_HASSERVICE_OFFSET))(t);
		}

		static ::System::Void RegisterService(::System::Type* t, ::System::Object* service)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_REGISTERSERVICE_OFFSET))(t, service);
		}

		static ::System::Void UnRegisterService(::System::Type* t)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_UNREGISTERSERVICE_OFFSET))(t);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateStubs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_UPDATESTUBS_OFFSET))(this);
		}

		::System::Object* AutoCreateService(::System::Type* t)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_AUTOCREATESERVICE_OFFSET))(this, t);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		static ::System::Object* DefaultServiceConstructor(::System::Type* serviceIntType, ::System::Type* implType)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_DEFAULTSERVICECONSTRUCTOR_OFFSET))(serviceIntType, implType);
		}

		::System::Void ScanType(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPE_OFFSET))(this, type);
		}

		static ::System::Void ScanTypeForSelectors(::System::Type* t, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>* stubs)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORSELECTORS_OFFSET))(t, stubs);
		}

		static ::System::Void ScanTypeForConstructors(::System::Type* t, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>* stubs)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORCONSTRUCTORS_OFFSET))(t, stubs);
		}

		static ::Il2CppArray<::System::Reflection::MethodInfo*>* GetStaticMethods(::System::Type* t)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSTATICMETHODS_OFFSET))(t);
		}
	};
}
