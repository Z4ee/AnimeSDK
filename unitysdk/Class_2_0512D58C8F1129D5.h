#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_2_0512D58C8F1129D5_GET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x139FF5C0)
#define CLASS_2_0512D58C8F1129D5_METHOD_2_0598D878B83289EF_OFFSET UNITYSDK_OFFSET(0x139FF670)
#define CLASS_2_0512D58C8F1129D5_METHOD_2_3A539E4DF6EC87CE_OFFSET UNITYSDK_OFFSET(0x139FF700)
#define CLASS_2_0512D58C8F1129D5_SET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x139FF5B0)
#define CLASS_2_0512D58C8F1129D5__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x139FF5D0)
#define CLASS_2_0512D58C8F1129D5__CTOR_OFFSET UNITYSDK_OFFSET(0x139FF7A0)

inline static constexpr unsigned int Class_2_0512D58C8F1129D5_TypeDefinitionIndex = 58762;

class Class_2_0512D58C8F1129D5 : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Boolean _IsLevelFirst_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0512D58C8F1129D5__CTOR_OFFSET))(this);
	}

	::System::Void set_IsLevelFirst(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0512D58C8F1129D5_SET_ISLEVELFIRST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLevelFirst()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0512D58C8F1129D5_GET_ISLEVELFIRST_OFFSET))(this);
	}

	::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_0512D58C8F1129D5__COMPAREIMPL_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_0598D878B83289EF(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_0512D58C8F1129D5_METHOD_2_0598D878B83289EF_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_3A539E4DF6EC87CE(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_0512D58C8F1129D5_METHOD_2_3A539E4DF6EC87CE_OFFSET))(a1, a2);
	}
};
