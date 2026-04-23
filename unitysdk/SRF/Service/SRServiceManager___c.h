#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Service { class SRServiceManager_ServiceStub; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SRF_SERVICE_SRSERVICEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EA9320)
#define SRF_SERVICE_SRSERVICEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA9360)
#define SRF_SERVICE_SRSERVICEMANAGER___C__UPDATESTUBS_B__21_0_OFFSET UNITYSDK_OFFSET(0x19EA9370)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager___c_TypeDefinitionIndex = 33330;

	class SRServiceManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::SRF::Service::SRServiceManager_ServiceStub*, ::System::String*>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::SRF::Service::SRServiceManager_ServiceStub*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager___c_TypeDefinitionIndex)->GetStaticField(0x66810);
		}
		static ::SRF::Service::SRServiceManager___c** StaticGet___9()
		{
			return (::SRF::Service::SRServiceManager___c**)Il2CppClass::FromTypeDefinitionIndex(SRServiceManager___c_TypeDefinitionIndex)->GetStaticField(0x66818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::String* _UpdateStubs_b__21_0(::SRF::Service::SRServiceManager_ServiceStub* p)
		{
			return ((::System::String*(*)(::PVOID, ::SRF::Service::SRServiceManager_ServiceStub*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__UPDATESTUBS_B__21_0_OFFSET))(this, p);
		}
	};
}
