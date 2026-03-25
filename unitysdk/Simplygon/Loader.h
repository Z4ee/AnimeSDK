#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/System/Object.h"

namespace Simplygon { class ISimplygon; }
namespace System { class String; }

#define SIMPLYGON_LOADER_GETSDKPATH_OFFSET UNITYSDK_OFFSET(0x861DA60)
#define SIMPLYGON_LOADER_INITSIMPLYGONINTERNAL_OFFSET UNITYSDK_OFFSET(0x861D2A0)
#define SIMPLYGON_LOADER_INITSIMPLYGON_1_OFFSET UNITYSDK_OFFSET(0x861DA40)
#define SIMPLYGON_LOADER_INITSIMPLYGON_2_OFFSET UNITYSDK_OFFSET(0x861DA50)
#define SIMPLYGON_LOADER_INITSIMPLYGON_OFFSET UNITYSDK_OFFSET(0x861D290)
#define SIMPLYGON_LOADER_SETDLLDIRECTORY_OFFSET UNITYSDK_OFFSET(0x861D1C0)
#define SIMPLYGON_LOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x861DC70)

namespace Simplygon
{
	inline static constexpr unsigned int Loader_TypeDefinitionIndex = 35160;

	class Loader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean SetDllDirectory(::System::String* lpPathName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER_SETDLLDIRECTORY_OFFSET))(lpPathName);
		}

		static ::Simplygon::ISimplygon* InitSimplygon(::Simplygon::EErrorCodes& errorCode, ::System::String*& errorMessage)
		{
			return ((::Simplygon::ISimplygon*(*)(::Simplygon::EErrorCodes&, ::System::String*&))((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER_INITSIMPLYGON_OFFSET))(errorCode, errorMessage);
		}

		static ::Simplygon::ISimplygon* InitSimplygon_1(::System::String* sdkPath, ::Simplygon::EErrorCodes& errorCode, ::System::String*& errorMessage)
		{
			return ((::Simplygon::ISimplygon*(*)(::System::String*, ::Simplygon::EErrorCodes&, ::System::String*&))((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER_INITSIMPLYGON_1_OFFSET))(sdkPath, errorCode, errorMessage);
		}

		static ::Simplygon::ISimplygon* InitSimplygon_2(::System::String* sdkPath, ::System::String* licenseDataText, ::Simplygon::EErrorCodes& errorCode, ::System::String*& errorMessage)
		{
			return ((::Simplygon::ISimplygon*(*)(::System::String*, ::System::String*, ::Simplygon::EErrorCodes&, ::System::String*&))((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER_INITSIMPLYGON_2_OFFSET))(sdkPath, licenseDataText, errorCode, errorMessage);
		}

		static ::Simplygon::ISimplygon* InitSimplygonInternal(::System::String* sdkPath, ::System::String* licenseDataText, ::Simplygon::EErrorCodes& errorCode, ::System::String*& errorMessage)
		{
			return ((::Simplygon::ISimplygon*(*)(::System::String*, ::System::String*, ::Simplygon::EErrorCodes&, ::System::String*&))((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER_INITSIMPLYGONINTERNAL_OFFSET))(sdkPath, licenseDataText, errorCode, errorMessage);
		}

		static ::System::String* GetSDKPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SIMPLYGON_LOADER_GETSDKPATH_OFFSET))();
		}
	};
}
