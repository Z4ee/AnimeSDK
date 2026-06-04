#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarSkinSource.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_68841D2E219E78DE_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7F5B0)
#define STRUCT_2_68841D2E219E78DE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F480)
#define STRUCT_2_68841D2E219E78DE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BC75C0)
#define STRUCT_2_68841D2E219E78DE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F360)
#define STRUCT_2_68841D2E219E78DE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_68841D2E219E78DE_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_68841D2E219E78DE_METHOD_2_21777270C6646173_OFFSET UNITYSDK_OFFSET(0x2BC7540)
#define STRUCT_2_68841D2E219E78DE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14199BA0)
#define STRUCT_2_68841D2E219E78DE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14199A80)
#define STRUCT_2_68841D2E219E78DE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2BC75A0)
#define STRUCT_2_68841D2E219E78DE_SET_ID_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define STRUCT_2_68841D2E219E78DE_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC630)
#define STRUCT_2_68841D2E219E78DE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC7590)
#define STRUCT_2_68841D2E219E78DE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F320)
#define STRUCT_2_68841D2E219E78DE___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC75D0)

inline static constexpr unsigned int Struct_2_68841D2E219E78DE_TypeDefinitionIndex = 48598;

struct alignas(4) Struct_2_68841D2E219E78DE
{
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_SET_ID_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkinSource Method_2_21777270C6646173()
	{
		return ((::RPG::AvatarSystem::AvatarSkinSource(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_METHOD_2_21777270C6646173_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_68841D2E219E78DE a1, ::Struct_2_68841D2E219E78DE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_68841D2E219E78DE, ::Struct_2_68841D2E219E78DE))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_68841D2E219E78DE a1, ::Struct_2_68841D2E219E78DE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_68841D2E219E78DE, ::Struct_2_68841D2E219E78DE))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_68841D2E219E78DE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_68841D2E219E78DE))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_DECONSTRUCT_OFFSET))(this, a1, a2);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
