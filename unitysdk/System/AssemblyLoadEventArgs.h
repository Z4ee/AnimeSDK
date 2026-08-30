#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Reflection { class Assembly; }

#define SYSTEM_ASSEMBLYLOADEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BC8A0)

namespace System
{
	inline static constexpr unsigned int AssemblyLoadEventArgs_TypeDefinitionIndex = 380;

	class AssemblyLoadEventArgs : public ::System::EventArgs
	{
	public:
		::System::Reflection::Assembly* m_loadedAssembly; // 0x10

		::System::Void _ctor(::System::Reflection::Assembly* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTARGS__CTOR_OFFSET))(this, a1);
		}
	};
}
