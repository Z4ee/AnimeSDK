#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEC9490)
#define DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEC9560)
#define DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY_GETNAMES_OFFSET UNITYSDK_OFFSET(0x1BEC9570)
#define DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEC9470)
#define DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC9450)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int ShaderTextureProperty_TypeDefinitionIndex = 85117;

	class ShaderTextureProperty : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean isNormalMap; // 0x18
		::System::Boolean isGammaCorrected; // 0x19
		::System::Boolean isNormalDontKnow; // 0x1A

		::System::Void _ctor(::System::String* n, ::System::Boolean norm)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY__CTOR_OFFSET))(this, n, norm);
		}

		::System::Void _ctor_1(::System::String* n, ::System::Boolean norm, ::System::Boolean isGamma, ::System::Boolean isNormalDontKnow)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY__CTOR_1_OFFSET))(this, n, norm, isGamma, isNormalDontKnow);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY_GETHASHCODE_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* GetNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* props)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_SHADERTEXTUREPROPERTY_GETNAMES_OFFSET))(props);
		}
	};
}
