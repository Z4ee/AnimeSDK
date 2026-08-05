#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E8BF210)
#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1E8BF1F0)
#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1E8BF220)
#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1E8BF200)
#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BF240)
#define MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BF230)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackFormatterAttribute_TypeDefinitionIndex = 30616;

	class MessagePackFormatterAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _FormatterType_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* formatterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE__CTOR_OFFSET))(this, formatterType);
		}

		::System::Void _ctor_1(::System::Type* formatterType, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE__CTOR_1_OFFSET))(this, formatterType, arguments);
		}

		::System::Type* get_FormatterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET))(this);
		}

		::System::Void set_FormatterType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Void set_Arguments(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKFORMATTERATTRIBUTE_SET_ARGUMENTS_OFFSET))(this, value);
		}
	};
}
