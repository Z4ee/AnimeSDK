#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define IFIX_CORE_PATCHMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E083C00)
#define IFIX_CORE_PATCHMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E083C40)
#define IFIX_CORE_PATCHMANAGER___C__READMETHOD_B__2_1_OFFSET UNITYSDK_OFFSET(0x1E083C50)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager___c_TypeDefinitionIndex = 6922;

	class PatchManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager___c_TypeDefinitionIndex)->GetStaticField(0x5D90);
		}
		static ::IFix::Core::PatchManager___c** StaticGet___9()
		{
			return (::IFix::Core::PatchManager___c**)Il2CppClass::FromTypeDefinitionIndex(PatchManager___c_TypeDefinitionIndex)->GetStaticField(0x5D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Type* _readMethod_b__2_1(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__READMETHOD_B__2_1_OFFSET))(this, p);
		}
	};
}
