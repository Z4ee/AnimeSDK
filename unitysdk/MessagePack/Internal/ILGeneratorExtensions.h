#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1E7AF6F0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET UNITYSDK_OFFSET(0x1E7AF920)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITCALL_OFFSET UNITYSDK_OFFSET(0x1E7AE220)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITFALSE_OFFSET UNITYSDK_OFFSET(0x1E7AF7D0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET UNITYSDK_OFFSET(0x1E7B00D0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINTZERORETURN_OFFSET UNITYSDK_OFFSET(0x1E7AFD10)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET UNITYSDK_OFFSET(0x1E7AF9D0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET UNITYSDK_OFFSET(0x1E7AD0F0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET UNITYSDK_OFFSET(0x1E7AD5A0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET UNITYSDK_OFFSET(0x1E7ACAA0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET UNITYSDK_OFFSET(0x1E7AF650)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET UNITYSDK_OFFSET(0x1E7AF580)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET UNITYSDK_OFFSET(0x1E7AEBF0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET UNITYSDK_OFFSET(0x1E7AF1A0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET UNITYSDK_OFFSET(0x1E7AFC10)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET UNITYSDK_OFFSET(0x1E7ACA20)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITNULLRETURN_OFFSET UNITYSDK_OFFSET(0x1E7AFDF0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITPOP_OFFSET UNITYSDK_OFFSET(0x1E7AFB70)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITRET_OFFSET UNITYSDK_OFFSET(0x1E7AFC90)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTARG_OFFSET UNITYSDK_OFFSET(0x1E7AFAA0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET UNITYSDK_OFFSET(0x1E7AE300)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET UNITYSDK_OFFSET(0x1E7AF390)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTHROWNOTIMPLEMENTED_OFFSET UNITYSDK_OFFSET(0x1E7AFF00)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET UNITYSDK_OFFSET(0x1E7AF670)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITULONG_OFFSET UNITYSDK_OFFSET(0x1E7AFE80)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITUNBOXORCAST_OFFSET UNITYSDK_OFFSET(0x1E7AF850)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ILGeneratorExtensions_TypeDefinitionIndex = 31154;

	class ILGeneratorExtensions : public ::System::Object
	{
	public:
		static ::System::Void EmitLdloc(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET))(il, index);
		}

		static ::System::Void EmitLdloc_1(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET))(il, local);
		}

		static ::System::Void EmitStloc(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET))(il, index);
		}

		static ::System::Void EmitStloc_1(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET))(il, local);
		}

		static ::System::Void EmitLdloca(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET))(il, index);
		}

		static ::System::Void EmitLdloca_1(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* local)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET))(il, local);
		}

		static ::System::Void EmitTrue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET))(il);
		}

		static ::System::Void EmitFalse(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITFALSE_OFFSET))(il);
		}

		static ::System::Void EmitBoolean(::System::Reflection::Emit::ILGenerator* il, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET))(il, value);
		}

		static ::System::Void EmitLdc_I4(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET))(il, value);
		}

		static ::System::Void EmitUnboxOrCast(::System::Reflection::Emit::ILGenerator* il, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITUNBOXORCAST_OFFSET))(il, type);
		}

		static ::System::Void EmitBoxOrDoNothing(::System::Reflection::Emit::ILGenerator* il, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET))(il, type);
		}

		static ::System::Void EmitLdarg(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET))(il, index);
		}

		static ::System::Void EmitLoadThis(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET))(il);
		}

		static ::System::Void EmitLdarga(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET))(il, index);
		}

		static ::System::Void EmitStarg(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTARG_OFFSET))(il, index);
		}

		static ::System::Void EmitPop(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITPOP_OFFSET))(il, count);
		}

		static ::System::Void EmitCall(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::MethodInfo* methodInfo)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITCALL_OFFSET))(il, methodInfo);
		}

		static ::System::Void EmitLdfld(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET))(il, fieldInfo);
		}

		static ::System::Void EmitLdsfld(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET))(il, fieldInfo);
		}

		static ::System::Void EmitRet(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITRET_OFFSET))(il);
		}

		static ::System::Void EmitIntZeroReturn(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINTZERORETURN_OFFSET))(il);
		}

		static ::System::Void EmitNullReturn(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITNULLRETURN_OFFSET))(il);
		}

		static ::System::Void EmitULong(::System::Reflection::Emit::ILGenerator* il, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITULONG_OFFSET))(il, value);
		}

		static ::System::Void EmitThrowNotimplemented(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTHROWNOTIMPLEMENTED_OFFSET))(il);
		}

		static ::System::Void EmitIncrementFor(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* conditionGreater, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>* emitBody)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET))(il, conditionGreater, emitBody);
		}
	};
}
