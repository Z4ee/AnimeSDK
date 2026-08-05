#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_UTILITIES_UNITYVERSION_ENSURELOADED_OFFSET UNITYSDK_OFFSET(0x1F265720)
#define SIRENIX_UTILITIES_UNITYVERSION_ISVERSIONORGREATER_OFFSET UNITYSDK_OFFSET(0x1F265730)
#define SIRENIX_UTILITIES_UNITYVERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F265380)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int UnityVersion_TypeDefinitionIndex = 6518;

	class UnityVersion : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Minor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnityVersion_TypeDefinitionIndex)->GetStaticField(0x30E0);
		}
		static ::System::Int32* StaticGet_Major()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnityVersion_TypeDefinitionIndex)->GetStaticField(0x30E4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_UNITYVERSION__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureLoaded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_UNITYVERSION_ENSURELOADED_OFFSET))();
		}

		static ::System::Boolean IsVersionOrGreater(::System::Int32 major, ::System::Int32 minor)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_UNITYVERSION_ISVERSIONORGREATER_OFFSET))(major, minor);
		}
	};
}
