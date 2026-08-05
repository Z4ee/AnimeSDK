#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FA887B12EB8EFCE2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D66755A4450D1F25;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_METHOD_2_3750F4A9FEA7F5EF_OFFSET UNITYSDK_OFFSET(0x88EA70)
#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x88EA80)
#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x88EAD0)
#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x88EA40)

namespace MoleMole
{
	inline static constexpr unsigned int StaticTextureMaterialModifier_TypeDefinitionIndex = 64100;

	struct alignas(8) StaticTextureMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::UnityEngine::Texture* value; // 0x20
		::System::Boolean tillingEnable; // 0x28
		::System::Boolean offsetEnable; // 0x29
		::UnityEngine::Vector2 tilling; // 0x2C
		::UnityEngine::Vector2 offset; // 0x34

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::Class_1_D66755A4450D1F25* Method_2_3750F4A9FEA7F5EF(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::MonoRenderHandler* a2)
		{
			return ((::Class_1_D66755A4450D1F25*(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_METHOD_2_3750F4A9FEA7F5EF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_METHOD_2_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::String* Method_2_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
