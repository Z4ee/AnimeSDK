#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_BAC064D277DD99F1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7DD00)
#define STRUCT_2_BAC064D277DD99F1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7DCF0)
#define STRUCT_2_BAC064D277DD99F1_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DC90)
#define STRUCT_2_BAC064D277DD99F1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DC80)
#define STRUCT_2_BAC064D277DD99F1_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_BAC064D277DD99F1_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E120)
#define STRUCT_2_BAC064D277DD99F1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB548320)
#define STRUCT_2_BAC064D277DD99F1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB548300)
#define STRUCT_2_BAC064D277DD99F1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x7DC60)
#define STRUCT_2_BAC064D277DD99F1_SET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x2E950)
#define STRUCT_2_BAC064D277DD99F1_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x2200)
#define STRUCT_2_BAC064D277DD99F1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7DC50)
#define STRUCT_2_BAC064D277DD99F1__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

inline static constexpr unsigned int Struct_2_BAC064D277DD99F1_TypeDefinitionIndex = 52270;

struct alignas(4) Struct_2_BAC064D277DD99F1
{
	::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_GET_ANCHORTYPE_OFFSET))(this);
	}

	::System::Void set_AnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_SET_ANCHORTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_BAC064D277DD99F1 a1, ::Struct_2_BAC064D277DD99F1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BAC064D277DD99F1, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_BAC064D277DD99F1 a1, ::Struct_2_BAC064D277DD99F1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BAC064D277DD99F1, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_BAC064D277DD99F1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::RPG::GameCore::AvatarSkillTreeAnchorType& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_BAC064D277DD99F1_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
