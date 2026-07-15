#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_B6441625E3D7D3E0;
namespace System { class String; }

#define CLASS_1_B1620F6A6D11B9D0_GET_DESC_OFFSET UNITYSDK_OFFSET(0x16A56830)
#define CLASS_1_B1620F6A6D11B9D0_GET_FULLDESC_OFFSET UNITYSDK_OFFSET(0x16A56890)
#define CLASS_1_B1620F6A6D11B9D0_GET_ID_OFFSET UNITYSDK_OFFSET(0x16A567F0)
#define CLASS_1_B1620F6A6D11B9D0_GET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0x16A56870)
#define CLASS_1_B1620F6A6D11B9D0_GET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0x16A56850)
#define CLASS_1_B1620F6A6D11B9D0_GET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x16A56810)
#define CLASS_1_B1620F6A6D11B9D0_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0x16A568B0)
#define CLASS_1_B1620F6A6D11B9D0_SET_DESC_OFFSET UNITYSDK_OFFSET(0x16A56840)
#define CLASS_1_B1620F6A6D11B9D0_SET_FULLDESC_OFFSET UNITYSDK_OFFSET(0x16A568A0)
#define CLASS_1_B1620F6A6D11B9D0_SET_ID_OFFSET UNITYSDK_OFFSET(0x16A56800)
#define CLASS_1_B1620F6A6D11B9D0_SET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0x16A56880)
#define CLASS_1_B1620F6A6D11B9D0_SET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0x16A56860)
#define CLASS_1_B1620F6A6D11B9D0_SET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x16A56820)
#define CLASS_1_B1620F6A6D11B9D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A569A0)

inline static constexpr unsigned int Class_1_B1620F6A6D11B9D0_TypeDefinitionIndex = 76179;

class Class_1_B1620F6A6D11B9D0 : public ::System::Object
{
public:
	::System::String* _FullDesc_k__BackingField; // 0x10
	::RPG::GameCore::FateRinHouguOwnerType _ServantCardOwnerType_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x1C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x20
	::RPG::Client::TextID _MiddleDesc_k__BackingField; // 0x30
	::RPG::Client::TextID _OwnersName_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinHouguOwnerType get_ServantCardOwnerType()
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_GET_SERVANTCARDOWNERTYPE_OFFSET))(this);
	}

	::System::Void set_ServantCardOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_SET_SERVANTCARDOWNERTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_SET_DESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_OwnersName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_GET_OWNERSNAME_OFFSET))(this);
	}

	::System::Void set_OwnersName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_SET_OWNERSNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_MiddleDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_GET_MIDDLEDESC_OFFSET))(this);
	}

	::System::Void set_MiddleDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_SET_MIDDLEDESC_OFFSET))(this, a1);
	}

	::System::String* get_FullDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_GET_FULLDESC_OFFSET))(this);
	}

	::System::Void set_FullDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_SET_FULLDESC_OFFSET))(this, a1);
	}

	static ::Class_1_B1620F6A6D11B9D0* Method_1_A85A5A4F484E8E77(::Class_1_B6441625E3D7D3E0* a1)
	{
		return ((::Class_1_B1620F6A6D11B9D0*(*)(::Class_1_B6441625E3D7D3E0*))((::PBYTE)hIl2Cpp + CLASS_1_B1620F6A6D11B9D0_METHOD_1_A85A5A4F484E8E77_OFFSET))(a1);
	}
};
