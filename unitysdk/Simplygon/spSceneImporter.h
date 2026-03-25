#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spScene; }
namespace System { class String; }

#define SIMPLYGON_SPSCENEIMPORTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183767E0)
#define SIMPLYGON_SPSCENEIMPORTER_GETSCENE_OFFSET UNITYSDK_OFFSET(0x18376B70)
#define SIMPLYGON_SPSCENEIMPORTER_RUN_OFFSET UNITYSDK_OFFSET(0x18376E90)
#define SIMPLYGON_SPSCENEIMPORTER_SETIMPORTFILEPATH_OFFSET UNITYSDK_OFFSET(0x18376960)
#define SIMPLYGON_SPSCENEIMPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18360EB0)

namespace Simplygon
{
	inline static constexpr unsigned int spSceneImporter_TypeDefinitionIndex = 29571;

	class spSceneImporter : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEIMPORTER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEIMPORTER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetImportFilePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEIMPORTER_SETIMPORTFILEPATH_OFFSET))(this, value);
		}

		::Simplygon::spScene* GetScene()
		{
			return ((::Simplygon::spScene*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEIMPORTER_GETSCENE_OFFSET))(this);
		}

		::Simplygon::EErrorCodes Run()
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSCENEIMPORTER_RUN_OFFSET))(this);
		}
	};
}
