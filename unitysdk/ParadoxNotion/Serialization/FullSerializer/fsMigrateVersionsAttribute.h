#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMIGRATEVERSIONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A216500)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsMigrateVersionsAttribute_TypeDefinitionIndex = 26907;

	class fsMigrateVersionsAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Type*>* previousTypes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* previousTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMIGRATEVERSIONSATTRIBUTE__CTOR_OFFSET))(this, previousTypes);
		}
	};
}
