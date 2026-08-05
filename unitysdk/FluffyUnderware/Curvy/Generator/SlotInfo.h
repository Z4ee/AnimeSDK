#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SlotInfo_SlotArrayType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_CHECKDATATYPES_OFFSET UNITYSDK_OFFSET(0x1FA61B70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1FA61AF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_GET_DATATYPES_OFFSET UNITYSDK_OFFSET(0x1FA61990)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1FA5EE60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1FA61A50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA61AA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FA61AB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA61A60)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int SlotInfo_TypeDefinitionIndex = 39527;

	class SlotInfo : public ::System::Attribute
	{
	public:
		::System::String* Tooltip; // 0x10
		::System::Type* DataType; // 0x18
		::System::String* Name; // 0x20
		::System::String* displayName; // 0x28
		::FluffyUnderware::Curvy::Generator::SlotInfo_SlotArrayType ArrayType; // 0x30
		::System::Boolean Array; // 0x34

		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Type*>* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO__CTOR_OFFSET))(this, name, type);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO__CTOR_1_OFFSET))(this, name, type);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Type*>* type)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO__CTOR_2_OFFSET))(this, type);
		}

		::Il2CppArray<::System::Type*>* get_DataTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_GET_DATATYPES_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_COMPARETO_OFFSET))(this, obj);
		}

		::System::Void CheckDataTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SLOTINFO_CHECKDATATYPES_OFFSET))(this);
		}
	};
}
