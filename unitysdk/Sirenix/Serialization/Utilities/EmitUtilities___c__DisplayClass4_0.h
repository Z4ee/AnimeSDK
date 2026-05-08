#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS4_0__CREATEWEAKINSTANCEFIELDSETTER_B__0_OFFSET UNITYSDK_OFFSET(0x1C5024D0)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5024C0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int EmitUtilities___c__DisplayClass4_0_TypeDefinitionIndex = 7511;

	class EmitUtilities___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* fieldInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateWeakInstanceFieldSetter_b__0(::System::Object*& classInstance, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS4_0__CREATEWEAKINSTANCEFIELDSETTER_B__0_OFFSET))(this, classInstance, value);
		}
	};
}
