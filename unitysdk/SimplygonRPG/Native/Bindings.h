#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIMPLYGONRPG_NATIVE_BINDINGS_REDUCE_OFFSET UNITYSDK_OFFSET(0xB31F460)
#define SIMPLYGONRPG_NATIVE_BINDINGS_REMESH_OFFSET UNITYSDK_OFFSET(0xB31F520)
#define SIMPLYGONRPG_NATIVE_BINDINGS_RUNPIPELINE_OFFSET UNITYSDK_OFFSET(0xB31F380)
#define SIMPLYGONRPG_NATIVE_BINDINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xB31F5E0)

namespace SimplygonRPG::Native
{
	inline static constexpr unsigned int Bindings_TypeDefinitionIndex = 44834;

	class Bindings : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 RunPipeline(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS_RUNPIPELINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Reduce(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS_REDUCE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Remesh(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS_REMESH_OFFSET))(a1, a2);
		}
	};
}
