#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FA887B12EB8EFCE2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D66755A4450D1F25;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICBOOLMATERIALMODIFIER_METHOD_2_6881D6F4F5133271_OFFSET UNITYSDK_OFFSET(0x88E710)
#define MOLEMOLE_STATICBOOLMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x88E720)
#define MOLEMOLE_STATICBOOLMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x88E770)
#define MOLEMOLE_STATICBOOLMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x88E6F0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticBoolMaterialModifier_TypeDefinitionIndex = 86396;

	struct alignas(8) StaticBoolMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::String* keyword; // 0x18
		::System::Boolean enable; // 0x20
		::System::Boolean value; // 0x21

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::Class_1_D66755A4450D1F25* Method_2_6881D6F4F5133271(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::MonoRenderHandler* a2)
		{
			return ((::Class_1_D66755A4450D1F25*(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER_METHOD_2_6881D6F4F5133271_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
