#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/System/Object.h"

namespace Simplygon { class ISimplygon; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGON_DEINITIALIZESIMPLYGON_OFFSET UNITYSDK_OFFSET(0x1835E5E0)
#define SIMPLYGON_SIMPLYGON_FAILED_OFFSET UNITYSDK_OFFSET(0x183638B0)
#define SIMPLYGON_SIMPLYGON_GETLASTINITIALIZATIONERROR_OFFSET UNITYSDK_OFFSET(0x183641A0)
#define SIMPLYGON_SIMPLYGON_INITIALIZESIMPLYGON_1_OFFSET UNITYSDK_OFFSET(0x18363E40)
#define SIMPLYGON_SIMPLYGON_INITIALIZESIMPLYGON_OFFSET UNITYSDK_OFFSET(0x18363B20)
#define SIMPLYGON_SIMPLYGON__CCTOR_OFFSET UNITYSDK_OFFSET(0x18364410)

namespace Simplygon
{
	inline static constexpr unsigned int Simplygon_TypeDefinitionIndex = 29588;

	class Simplygon : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Simplygon_VERSION()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Simplygon_TypeDefinitionIndex)->GetStaticField(0x10420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGON__CCTOR_OFFSET))();
		}

		static ::System::Boolean Failed(::Simplygon::EErrorCodes errCode)
		{
			return ((::System::Boolean(*)(::Simplygon::EErrorCodes))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGON_FAILED_OFFSET))(errCode);
		}

		static ::Simplygon::ISimplygon* InitializeSimplygon(::System::String* SDKPath, ::System::String* LicenseDataText)
		{
			return ((::Simplygon::ISimplygon*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGON_INITIALIZESIMPLYGON_OFFSET))(SDKPath, LicenseDataText);
		}

		static ::Simplygon::ISimplygon* InitializeSimplygon_1(::System::String* SDKPath)
		{
			return ((::Simplygon::ISimplygon*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGON_INITIALIZESIMPLYGON_1_OFFSET))(SDKPath);
		}

		static ::System::Void DeinitializeSimplygon(::Simplygon::ISimplygon* pSimplygonInstance)
		{
			return ((::System::Void(*)(::Simplygon::ISimplygon*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGON_DEINITIALIZESIMPLYGON_OFFSET))(pSimplygonInstance);
		}

		static ::Simplygon::EErrorCodes GetLastInitializationError()
		{
			return ((::Simplygon::EErrorCodes(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGON_GETLASTINITIALIZATIONERROR_OFFSET))();
		}
	};
}
