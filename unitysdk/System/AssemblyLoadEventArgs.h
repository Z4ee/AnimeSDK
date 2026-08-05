#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Reflection { class Assembly; }

#define SYSTEM_ASSEMBLYLOADEVENTARGS_GET_LOADEDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C30E130)
#define SYSTEM_ASSEMBLYLOADEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30CB70)

namespace System
{
	inline static constexpr unsigned int AssemblyLoadEventArgs_TypeDefinitionIndex = 366;

	class AssemblyLoadEventArgs : public ::System::EventArgs
	{
	public:
		::System::Reflection::Assembly* m_loadedAssembly; // 0x10

		::System::Void _ctor(::System::Reflection::Assembly* loadedAssembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTARGS__CTOR_OFFSET))(this, loadedAssembly);
		}

		::System::Reflection::Assembly* get_LoadedAssembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTARGS_GET_LOADEDASSEMBLY_OFFSET))(this);
		}
	};
}
