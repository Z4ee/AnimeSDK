#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET UNITYSDK_OFFSET(0x15D5E310)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOXORDONOTHING_OFFSET UNITYSDK_OFFSET(0x15D530F0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITCALL_OFFSET UNITYSDK_OFFSET(0x15D41390)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET UNITYSDK_OFFSET(0x15D56AA0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARGA_OFFSET UNITYSDK_OFFSET(0x15D3F2F0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDARG_OFFSET UNITYSDK_OFFSET(0x15D3F3C0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET UNITYSDK_OFFSET(0x15D529B0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDFLD_OFFSET UNITYSDK_OFFSET(0x15D5B010)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_1_OFFSET UNITYSDK_OFFSET(0x15D41370)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOCA_OFFSET UNITYSDK_OFFSET(0x15D5E210)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_1_OFFSET UNITYSDK_OFFSET(0x15D42840)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDLOC_OFFSET UNITYSDK_OFFSET(0x15D5DDB0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDSFLD_OFFSET UNITYSDK_OFFSET(0x15D52FB0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLOADTHIS_OFFSET UNITYSDK_OFFSET(0x15D50B30)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_1_OFFSET UNITYSDK_OFFSET(0x15D41470)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITSTLOC_OFFSET UNITYSDK_OFFSET(0x15D5DFE0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITTRUE_OFFSET UNITYSDK_OFFSET(0x15D53070)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITULONG_OFFSET UNITYSDK_OFFSET(0x15D42860)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ILGeneratorExtensions_TypeDefinitionIndex = 9150;

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

		static ::System::Void EmitBoolean(::System::Reflection::Emit::ILGenerator* il, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITBOOLEAN_OFFSET))(il, value);
		}

		static ::System::Void EmitLdc_I4(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITLDC_I4_OFFSET))(il, value);
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

		static ::System::Void EmitULong(::System::Reflection::Emit::ILGenerator* il, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITULONG_OFFSET))(il, value);
		}

		static ::System::Void EmitIncrementFor(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* conditionGreater, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>* emitBody)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Reflection::Emit::LocalBuilder*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS_EMITINCREMENTFOR_OFFSET))(il, conditionGreater, emitBody);
		}
	};
}
