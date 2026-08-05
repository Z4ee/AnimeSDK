#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class PropertyInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS5_0__CREATEWEAKINSTANCEPROPERTYGETTER_B__0_OFFSET UNITYSDK_OFFSET(0x1FC15630)
#define SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC15620)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int EmitUtilities___c__DisplayClass5_0_TypeDefinitionIndex = 7648;

	class EmitUtilities___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Reflection::PropertyInfo* propertyInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Object* _CreateWeakInstancePropertyGetter_b__0(::System::Object*& classInstance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_EMITUTILITIES___C__DISPLAYCLASS5_0__CREATEWEAKINSTANCEPROPERTYGETTER_B__0_OFFSET))(this, classInstance);
		}
	};
}
