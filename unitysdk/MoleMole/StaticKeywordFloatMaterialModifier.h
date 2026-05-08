#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A0B58236B258B7B2;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_METHOD_2_6881D6F4F5133271_OFFSET UNITYSDK_OFFSET(0x755D50)
#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x755DB0)
#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x755D60)
#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x755CC0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticKeywordFloatMaterialModifier_TypeDefinitionIndex = 55569;

	struct alignas(8) StaticKeywordFloatMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::System::Single value; // 0x1C
		::Il2CppArray<::System::String*>* keywords; // 0x20

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_A0B58236B258B7B2* Method_2_6881D6F4F5133271(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::MonoRenderHandler* a2)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_METHOD_2_6881D6F4F5133271_OFFSET))(this, a1, a2);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET))(this);
		}
	};
}
