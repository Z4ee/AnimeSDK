#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION_GET_PENDING_OFFSET UNITYSDK_OFFSET(0x1835EC80)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION_RETRIEVE_OFFSET UNITYSDK_OFFSET(0x1835ED40)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION_SET_OFFSET UNITYSDK_OFFSET(0x18368D60)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1836AB90)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_SWIGPendingException_TypeDefinitionIndex = 29585;

	class SimplygonPINVOKE_SWIGPendingException : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_exceptionsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGPendingException_TypeDefinitionIndex)->GetStaticField(0x31FD0);
		}
		static ::System::Int32* StaticGet_numExceptionsPending()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGPendingException_TypeDefinitionIndex)->GetStaticField(0x10440);
		}
		static ::System::Exception** StaticGet_pendingException()
		{
			return (::System::Exception**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGPendingException_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_Pending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION_GET_PENDING_OFFSET))();
		}

		static ::System::Void Set(::System::Exception* e)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION_SET_OFFSET))(e);
		}

		static ::System::Exception* Retrieve()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGPENDINGEXCEPTION_RETRIEVE_OFFSET))();
		}
	};
}
