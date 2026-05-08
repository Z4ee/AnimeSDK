#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS3_0__CREATEWEAKINSTANCEFIELDGETTER_B__0_OFFSET UNITYSDK_OFFSET(0x1C502490)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C502480)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int EmitUtilities___c__DisplayClass3_0_TypeDefinitionIndex = 7510;

	class EmitUtilities___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* fieldInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Object* _CreateWeakInstanceFieldGetter_b__0(::System::Object*& classInstance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS3_0__CREATEWEAKINSTANCEFIELDGETTER_B__0_OFFSET))(this, classInstance);
		}
	};
}
