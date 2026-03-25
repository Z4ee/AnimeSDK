#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spScene; }
namespace System { class String; }

#define SIMPLYGON_SPSCENEEXPORTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18376040)
#define SIMPLYGON_SPSCENEEXPORTER_RUN_OFFSET UNITYSDK_OFFSET(0x183765E0)
#define SIMPLYGON_SPSCENEEXPORTER_SETEXPORTFILEPATH_OFFSET UNITYSDK_OFFSET(0x183761C0)
#define SIMPLYGON_SPSCENEEXPORTER_SETSCENE_OFFSET UNITYSDK_OFFSET(0x183763D0)
#define SIMPLYGON_SPSCENEEXPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18360A10)

namespace Simplygon
{
	inline static constexpr unsigned int spSceneExporter_TypeDefinitionIndex = 29570;

	class spSceneExporter : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEEXPORTER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEEXPORTER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetExportFilePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEEXPORTER_SETEXPORTFILEPATH_OFFSET))(this, value);
		}

		::System::Void SetScene(::Simplygon::spScene* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spScene*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEEXPORTER_SETSCENE_OFFSET))(this, value);
		}

		::Simplygon::EErrorCodes Run()
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEEXPORTER_RUN_OFFSET))(this);
		}
	};
}
