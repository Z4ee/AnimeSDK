#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_2_36A8783B51AA6A78_GET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x15B08380)
#define CLASS_2_36A8783B51AA6A78_METHOD_2_3A539E4DF6EC87CE_OFFSET UNITYSDK_OFFSET(0x15B08640)
#define CLASS_2_36A8783B51AA6A78_METHOD_2_B3F28019E7C279E4_OFFSET UNITYSDK_OFFSET(0x15B08430)
#define CLASS_2_36A8783B51AA6A78_SET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x15B08370)
#define CLASS_2_36A8783B51AA6A78__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x15B08390)
#define CLASS_2_36A8783B51AA6A78__CTOR_OFFSET UNITYSDK_OFFSET(0x15B086E0)

inline static constexpr unsigned int Class_2_36A8783B51AA6A78_TypeDefinitionIndex = 62812;

class Class_2_36A8783B51AA6A78 : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Boolean _IsLevelFirst_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A8783B51AA6A78__CTOR_OFFSET))(this);
	}

	::System::Void set_IsLevelFirst(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A8783B51AA6A78_SET_ISLEVELFIRST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLevelFirst()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A8783B51AA6A78_GET_ISLEVELFIRST_OFFSET))(this);
	}

	::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_36A8783B51AA6A78__COMPAREIMPL_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_B3F28019E7C279E4(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_36A8783B51AA6A78_METHOD_2_B3F28019E7C279E4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_3A539E4DF6EC87CE(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_36A8783B51AA6A78_METHOD_2_3A539E4DF6EC87CE_OFFSET))(a1, a2);
	}
};
