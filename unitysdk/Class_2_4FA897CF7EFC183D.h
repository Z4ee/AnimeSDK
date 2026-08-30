#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_2_4FA897CF7EFC183D_GET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x167A66A0)
#define CLASS_2_4FA897CF7EFC183D_METHOD_2_3B964EA8C0F7BD57_OFFSET UNITYSDK_OFFSET(0x167A6960)
#define CLASS_2_4FA897CF7EFC183D_METHOD_2_B3F28019E7C279E4_OFFSET UNITYSDK_OFFSET(0x167A6750)
#define CLASS_2_4FA897CF7EFC183D_SET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x167A6690)
#define CLASS_2_4FA897CF7EFC183D__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x167A66B0)
#define CLASS_2_4FA897CF7EFC183D__CTOR_OFFSET UNITYSDK_OFFSET(0x167A6A00)

inline static constexpr unsigned int Class_2_4FA897CF7EFC183D_TypeDefinitionIndex = 62879;

class Class_2_4FA897CF7EFC183D : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Boolean _IsLevelFirst_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FA897CF7EFC183D__CTOR_OFFSET))(this);
	}

	::System::Void set_IsLevelFirst(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FA897CF7EFC183D_SET_ISLEVELFIRST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLevelFirst()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FA897CF7EFC183D_GET_ISLEVELFIRST_OFFSET))(this);
	}

	::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_4FA897CF7EFC183D__COMPAREIMPL_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_B3F28019E7C279E4(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_4FA897CF7EFC183D_METHOD_2_B3F28019E7C279E4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_3B964EA8C0F7BD57(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_4FA897CF7EFC183D_METHOD_2_3B964EA8C0F7BD57_OFFSET))(a1, a2);
	}
};
