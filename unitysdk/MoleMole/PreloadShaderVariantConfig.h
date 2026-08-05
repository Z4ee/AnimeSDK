#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADSHADERVARIANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173A1670)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadShaderVariantConfig_TypeDefinitionIndex = 72688;

	class PreloadShaderVariantConfig : public ::System::Object
	{
	public:
		::System::String* platform; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* shaderNames; // 0x18
		::System::Collections::Generic::List_1<::System::Boolean>* supportAsyncCreate; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* needWarmup; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* svcPaths; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADSHADERVARIANTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
