#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_1_59D3E9FCEA43ACF7;
class Class_1_5A7D22768D1A0DC0;
class Class_1_5E92AC2D7588EEFB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_151E6512DBD5FDDD_GET_MULTIPLEPATHAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x8D7DD60)
#define CLASS_1_151E6512DBD5FDDD_GET_PREVIEWAVATARREPOSITORY_OFFSET UNITYSDK_OFFSET(0x8D7DD20)
#define CLASS_1_151E6512DBD5FDDD_GET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0x8D7DD00)
#define CLASS_1_151E6512DBD5FDDD_GET_QUERYAVATARSKINSERVICE_OFFSET UNITYSDK_OFFSET(0x8D7DD40)
#define CLASS_1_151E6512DBD5FDDD_METHOD_1_35CCC53901D217DE_OFFSET UNITYSDK_OFFSET(0x8D7E760)
#define CLASS_1_151E6512DBD5FDDD_METHOD_1_37B5A1BB9A1A782D_OFFSET UNITYSDK_OFFSET(0x8D7DD80)
#define CLASS_1_151E6512DBD5FDDD_METHOD_1_507799C802F70CE7_OFFSET UNITYSDK_OFFSET(0x8D7E0E0)
#define CLASS_1_151E6512DBD5FDDD_METHOD_1_825356C52B99E731_OFFSET UNITYSDK_OFFSET(0x8D7E060)
#define CLASS_1_151E6512DBD5FDDD_METHOD_1_AC89C1AAA6F422EF_OFFSET UNITYSDK_OFFSET(0x8D7E4A0)
#define CLASS_1_151E6512DBD5FDDD_SET_MULTIPLEPATHAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x8D7DD70)
#define CLASS_1_151E6512DBD5FDDD_SET_PREVIEWAVATARREPOSITORY_OFFSET UNITYSDK_OFFSET(0x8D7DD30)
#define CLASS_1_151E6512DBD5FDDD_SET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0x8D7DD10)
#define CLASS_1_151E6512DBD5FDDD_SET_QUERYAVATARSKINSERVICE_OFFSET UNITYSDK_OFFSET(0x8D7DD50)
#define CLASS_1_151E6512DBD5FDDD__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7E9B0)

inline static constexpr unsigned int Class_1_151E6512DBD5FDDD_TypeDefinitionIndex = 50924;

class Class_1_151E6512DBD5FDDD : public ::System::Object
{
public:
	::Class_1_5E92AC2D7588EEFB* _QueryAvatarSkinService_k__BackingField; // 0x10
	::Class_1_5A7D22768D1A0DC0* _PreviewAvatarRepository_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_341* _ProfileBuilder_k__BackingField; // 0x20
	::Class_1_59D3E9FCEA43ACF7* _MultiplePathAvatarService_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_341* get_ProfileBuilder()
	{
		return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_GET_PROFILEBUILDER_OFFSET))(this);
	}

	::System::Void set_ProfileBuilder(::Class_0_16E4307DCC419505_341* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_SET_PROFILEBUILDER_OFFSET))(this, value);
	}

	::Class_1_5A7D22768D1A0DC0* get_PreviewAvatarRepository()
	{
		return ((::Class_1_5A7D22768D1A0DC0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_GET_PREVIEWAVATARREPOSITORY_OFFSET))(this);
	}

	::System::Void set_PreviewAvatarRepository(::Class_1_5A7D22768D1A0DC0* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A7D22768D1A0DC0*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_SET_PREVIEWAVATARREPOSITORY_OFFSET))(this, value);
	}

	::Class_1_5E92AC2D7588EEFB* get_QueryAvatarSkinService()
	{
		return ((::Class_1_5E92AC2D7588EEFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_GET_QUERYAVATARSKINSERVICE_OFFSET))(this);
	}

	::System::Void set_QueryAvatarSkinService(::Class_1_5E92AC2D7588EEFB* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E92AC2D7588EEFB*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_SET_QUERYAVATARSKINSERVICE_OFFSET))(this, value);
	}

	::Class_1_59D3E9FCEA43ACF7* get_MultiplePathAvatarService()
	{
		return ((::Class_1_59D3E9FCEA43ACF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_GET_MULTIPLEPATHAVATARSERVICE_OFFSET))(this);
	}

	::System::Void set_MultiplePathAvatarService(::Class_1_59D3E9FCEA43ACF7* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59D3E9FCEA43ACF7*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_SET_MULTIPLEPATHAVATARSERVICE_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_37B5A1BB9A1A782D(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_METHOD_1_37B5A1BB9A1A782D_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_825356C52B99E731(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_METHOD_1_825356C52B99E731_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_507799C802F70CE7(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_METHOD_1_507799C802F70CE7_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_AC89C1AAA6F422EF(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_METHOD_1_AC89C1AAA6F422EF_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_35CCC53901D217DE(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_151E6512DBD5FDDD_METHOD_1_35CCC53901D217DE_OFFSET))(this, a1);
	}
};
