#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Simplygon { class SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1836AC60)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGREGISTERSTRINGCALLBACK_SIMPLYGON_OFFSET UNITYSDK_OFFSET(0x1836ABD0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1836AC70)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x183645E0)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_SWIGStringHelper_TypeDefinitionIndex = 29586;

	class SimplygonPINVOKE_SWIGStringHelper : public ::System::Object
	{
	public:
		static ::Simplygon::SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate** StaticGet_stringDelegate()
		{
			return (::Simplygon::SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate**)Il2CppClass::FromTypeDefinitionIndex(SimplygonPINVOKE_SWIGStringHelper_TypeDefinitionIndex)->GetStaticField(0x31FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void SWIGRegisterStringCallback_Simplygon(::Simplygon::SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate* stringDelegate)
		{
			return ((::System::Void(*)(::Simplygon::SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGREGISTERSTRINGCALLBACK_SIMPLYGON_OFFSET))(stringDelegate);
		}

		static ::System::String* CreateString(::System::String* cString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_CREATESTRING_OFFSET))(cString);
		}
	};
}
