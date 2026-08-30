#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6441625E3D7D3E0_GET_DESC_OFFSET UNITYSDK_OFFSET(0x152DEF10)
#define CLASS_1_B6441625E3D7D3E0_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x152DEF70)
#define CLASS_1_B6441625E3D7D3E0_GET_ID_OFFSET UNITYSDK_OFFSET(0x152DEEE0)
#define CLASS_1_B6441625E3D7D3E0_GET_MASTERCARDIDS_OFFSET UNITYSDK_OFFSET(0x152DEF90)
#define CLASS_1_B6441625E3D7D3E0_GET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0x152DEF50)
#define CLASS_1_B6441625E3D7D3E0_GET_NEUTRALCARDIDS_OFFSET UNITYSDK_OFFSET(0x152DEFB0)
#define CLASS_1_B6441625E3D7D3E0_GET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0x152DEF30)
#define CLASS_1_B6441625E3D7D3E0_GET_SERVANTCARDIDS_OFFSET UNITYSDK_OFFSET(0x152DEFA0)
#define CLASS_1_B6441625E3D7D3E0_GET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x152DEEF0)
#define CLASS_1_B6441625E3D7D3E0_METHOD_1_36ECB05C69CEE40C_OFFSET UNITYSDK_OFFSET(0x152DEFC0)
#define CLASS_1_B6441625E3D7D3E0_SET_DESC_OFFSET UNITYSDK_OFFSET(0x152DEF20)
#define CLASS_1_B6441625E3D7D3E0_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x152DEF80)
#define CLASS_1_B6441625E3D7D3E0_SET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0x152DEF60)
#define CLASS_1_B6441625E3D7D3E0_SET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0x152DEF40)
#define CLASS_1_B6441625E3D7D3E0_SET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x152DEF00)
#define CLASS_1_B6441625E3D7D3E0__CTOR_OFFSET UNITYSDK_OFFSET(0x152DEDE0)

inline static constexpr unsigned int Class_1_B6441625E3D7D3E0_TypeDefinitionIndex = 79757;

class Class_1_B6441625E3D7D3E0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _MasterCardIDs_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _ServantCardIDs_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* _NeutralCardIDs_k__BackingField; // 0x20
	::RPG::Client::TextID _MiddleDesc_k__BackingField; // 0x28
	::RPG::Client::TextID _OwnersName_k__BackingField; // 0x38
	::RPG::Client::TextID _Desc_k__BackingField; // 0x48
	::System::UInt32 _GuideID_k__BackingField; // 0x58
	::System::UInt32 _ID_k__BackingField; // 0x5C
	::RPG::GameCore::FateRinHouguOwnerType _ServantCardOwnerType_k__BackingField; // 0x60

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_ID_OFFSET))(this);
	}

	::RPG::GameCore::FateRinHouguOwnerType get_ServantCardOwnerType()
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_SERVANTCARDOWNERTYPE_OFFSET))(this);
	}

	::System::Void set_ServantCardOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_SET_SERVANTCARDOWNERTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_SET_DESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_OwnersName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_OWNERSNAME_OFFSET))(this);
	}

	::System::Void set_OwnersName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_SET_OWNERSNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_MiddleDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_MIDDLEDESC_OFFSET))(this);
	}

	::System::Void set_MiddleDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_SET_MIDDLEDESC_OFFSET))(this, a1);
	}

	::System::UInt32 get_GuideID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_GUIDEID_OFFSET))(this);
	}

	::System::Void set_GuideID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_SET_GUIDEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_MasterCardIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_MASTERCARDIDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ServantCardIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_SERVANTCARDIDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_NeutralCardIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_GET_NEUTRALCARDIDS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_36ECB05C69CEE40C()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6441625E3D7D3E0_METHOD_1_36ECB05C69CEE40C_OFFSET))(this);
	}
};
