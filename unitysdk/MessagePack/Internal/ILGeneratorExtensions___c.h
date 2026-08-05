#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22DBD0)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22DC10)
#define MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS___C__EMITTHROWNOTIMPLEMENTED_B__24_0_OFFSET UNITYSDK_OFFSET(0x1E22DC20)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ILGeneratorExtensions___c_TypeDefinitionIndex = 31155;

	class ILGeneratorExtensions___c : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ILGeneratorExtensions___c** StaticGet___9()
		{
			return (::MessagePack::Internal::ILGeneratorExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(ILGeneratorExtensions___c_TypeDefinitionIndex)->GetStaticField(0x24FF0);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ILGeneratorExtensions___c_TypeDefinitionIndex)->GetStaticField(0x24FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _EmitThrowNotimplemented_b__24_0(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ILGENERATOREXTENSIONS___C__EMITTHROWNOTIMPLEMENTED_B__24_0_OFFSET))(this, x);
		}
	};
}
