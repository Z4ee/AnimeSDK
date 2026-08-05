#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SlotInfo.h"

namespace System { class String; }
namespace System { class Type; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO_ISVALIDFROM_OFFSET UNITYSDK_OFFSET(0x1FA50AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA50A70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FA50A80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FA50AC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA50A30)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int InputSlotInfo_TypeDefinitionIndex = 39525;

	class InputSlotInfo : public ::FluffyUnderware::Curvy::Generator::SlotInfo
	{
	public:
		::System::Boolean RequestDataOnly; // 0x38
		::System::Boolean Optional; // 0x39
		::System::Boolean ModifiesData; // 0x3A

		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Type*>* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_OFFSET))(this, name, type);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_1_OFFSET))(this, name, type);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Type*>* type)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_2_OFFSET))(this, type);
		}

		::System::Void _ctor_3(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO__CTOR_3_OFFSET))(this, type);
		}

		::System::Boolean IsValidFrom(::System::Type* outType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_INPUTSLOTINFO_ISVALIDFROM_OFFSET))(this, outType);
		}
	};
}
