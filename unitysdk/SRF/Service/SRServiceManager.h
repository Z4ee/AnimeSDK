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

#define SRF_SERVICE_SRSERVICEMANAGER_AUTOCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1EC3F7C0)
#define SRF_SERVICE_SRSERVICEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC3FE40)
#define SRF_SERVICE_SRSERVICEMANAGER_DEFAULTSERVICECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1EC40400)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EC3F3A0)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1EC3F020)
#define SRF_SERVICE_SRSERVICEMANAGER_GETSTATICMETHODS_OFFSET UNITYSDK_OFFSET(0x1EC41990)
#define SRF_SERVICE_SRSERVICEMANAGER_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1EC3F370)
#define SRF_SERVICE_SRSERVICEMANAGER_HASSERVICE_OFFSET UNITYSDK_OFFSET(0x1EC3F950)
#define SRF_SERVICE_SRSERVICEMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1EC40670)
#define SRF_SERVICE_SRSERVICEMANAGER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1EC3FB00)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x1EC40710)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORSELECTORS_OFFSET UNITYSDK_OFFSET(0x1EC41050)
#define SRF_SERVICE_SRSERVICEMANAGER_SCANTYPE_OFFSET UNITYSDK_OFFSET(0x1EC40300)
#define SRF_SERVICE_SRSERVICEMANAGER_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1EC3F5A0)
#define SRF_SERVICE_SRSERVICEMANAGER_UPDATESTUBS_OFFSET UNITYSDK_OFFSET(0x1EC3FF00)
#define SRF_SERVICE_SRSERVICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC41A70)
#define SRF_SERVICE_SRSERVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC41A40)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager_TypeDefinitionIndex = 34747;

	class SRServiceManager : public ::SRF::Components::SRAutoSingleton_1<::SRF::Service::SRServiceManager*>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>** StaticGet__assemblies()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::Assembly*>**)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager_TypeDefinitionIndex)->GetStaticField(0x5F590);
		}
		static ::System::Boolean* StaticGet__hasQuit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager_TypeDefinitionIndex)->GetStaticField(0x13530);
		}
		static ::System::Int32* StaticGet_LoadingCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager_TypeDefinitionIndex)->GetStaticField(0x13534);
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

		static ::System::Object* GetService(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSERVICE_OFFSET))(a1);
		}

		static ::System::Object* GetServiceInternal(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSERVICEINTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean HasService(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_HASSERVICE_OFFSET))(a1);
		}

		static ::System::Void RegisterService(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_REGISTERSERVICE_OFFSET))(a1, a2);
		}

		static ::System::Void UnRegisterService(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_UNREGISTERSERVICE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateStubs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_UPDATESTUBS_OFFSET))(this);
		}

		::System::Object* AutoCreateService(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_AUTOCREATESERVICE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		static ::System::Object* DefaultServiceConstructor(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_DEFAULTSERVICECONSTRUCTOR_OFFSET))(a1, a2);
		}

		::System::Void ScanType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPE_OFFSET))(this, a1);
		}

		static ::System::Void ScanTypeForSelectors(::System::Type* a1, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORSELECTORS_OFFSET))(a1, a2);
		}

		static ::System::Void ScanTypeForConstructors(::System::Type* a1, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::SRF::Service::SRServiceManager_ServiceStub*>*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SCANTYPEFORCONSTRUCTORS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Reflection::MethodInfo*>* GetStaticMethods(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_GETSTATICMETHODS_OFFSET))(a1);
		}
	};
}
