#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F4644768973D415.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A0B58236B258B7B2;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }

#define MOLEMOLE_STATICKEYWORDMATERIALMODIFIER_METHOD_2_3750F4A9FEA7F5EF_OFFSET UNITYSDK_OFFSET(0x819880)
#define MOLEMOLE_STATICKEYWORDMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x819870)

namespace MoleMole
{
	inline static constexpr unsigned int StaticKeywordMaterialModifier_TypeDefinitionIndex = 68808;

	struct alignas(8) StaticKeywordMaterialModifier
	{
		::System::String* keyword; // 0x10
		::System::Boolean enable; // 0x18
		::System::Boolean value; // 0x19

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDMATERIALMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* Method_2_3750F4A9FEA7F5EF(::Enum_3_7F4644768973D415 a1, ::MoleMole::MonoRenderHandler* a2)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDMATERIALMODIFIER_METHOD_2_3750F4A9FEA7F5EF_OFFSET))(this, a1, a2);
		}
	};
}
