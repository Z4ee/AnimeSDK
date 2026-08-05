#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FA887B12EB8EFCE2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D66755A4450D1F25;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICFLOATMATERIALMODIFIER_METHOD_2_3750F4A9FEA7F5EF_OFFSET UNITYSDK_OFFSET(0x868AD0)
#define MOLEMOLE_STATICFLOATMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x868AE0)
#define MOLEMOLE_STATICFLOATMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x868B30)
#define MOLEMOLE_STATICFLOATMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x868AB0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticFloatMaterialModifier_TypeDefinitionIndex = 62649;

	struct alignas(8) StaticFloatMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::System::Single value; // 0x1C
		::System::Single weight; // 0x20
		::System::Single targetVal; // 0x24
		::System::Single curveVal; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::Class_1_D66755A4450D1F25* Method_2_3750F4A9FEA7F5EF(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::MonoRenderHandler* a2)
		{
			return ((::Class_1_D66755A4450D1F25*(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER_METHOD_2_3750F4A9FEA7F5EF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
