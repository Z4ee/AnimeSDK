#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18168E60)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET UNITYSDK_OFFSET(0x1815E930)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITCALL_OFFSET UNITYSDK_OFFSET(0x1814D140)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET UNITYSDK_OFFSET(0x18162110)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET UNITYSDK_OFFSET(0x1814B130)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET UNITYSDK_OFFSET(0x1814B200)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET UNITYSDK_OFFSET(0x1815E1F0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET UNITYSDK_OFFSET(0x181662C0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET UNITYSDK_OFFSET(0x1814D120)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET UNITYSDK_OFFSET(0x18168D70)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET UNITYSDK_OFFSET(0x1814E520)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET UNITYSDK_OFFSET(0x18168930)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET UNITYSDK_OFFSET(0x1815E7D0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET UNITYSDK_OFFSET(0x1815C490)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET UNITYSDK_OFFSET(0x1814D220)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET UNITYSDK_OFFSET(0x18168B50)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET UNITYSDK_OFFSET(0x1815E8B0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITULONG_OFFSET UNITYSDK_OFFSET(0x1814E540)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ILGeneratorExtensions_TypeDefinitionIndex = 7250;

	class ILGeneratorExtensions : public ::System::Object
	{
	public:
		static ::System::Void EmitLdloc(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdloc_1(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::Emit::LocalBuilder* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET))(a1, a2);
		}

		static ::System::Void EmitStloc(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET))(a1, a2);
		}

		static ::System::Void EmitStloc_1(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::Emit::LocalBuilder* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdloca(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdloca_1(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::Emit::LocalBuilder* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET))(a1, a2);
		}

		static ::System::Void EmitTrue(::System::Reflection::Emit::ILGenerator* a1)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET))(a1);
		}

		static ::System::Void EmitBoolean(::System::Reflection::Emit::ILGenerator* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdc_I4(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET))(a1, a2);
		}

		static ::System::Void EmitBoxOrDoNothing(::System::Reflection::Emit::ILGenerator* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdarg(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLoadThis(::System::Reflection::Emit::ILGenerator* a1)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET))(a1);
		}

		static ::System::Void EmitLdarga(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET))(a1, a2);
		}

		static ::System::Void EmitCall(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITCALL_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdfld(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET))(a1, a2);
		}

		static ::System::Void EmitLdsfld(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET))(a1, a2);
		}

		static ::System::Void EmitULong(::System::Reflection::Emit::ILGenerator* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITULONG_OFFSET))(a1, a2);
		}

		static ::System::Void EmitIncrementFor(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::Emit::LocalBuilder* a2, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>* a3)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET))(a1, a2, a3);
		}
	};
}
