#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E5F96CD821CB6395_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1754DB00)
#define CLASS_1_E5F96CD821CB6395_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1754DB60)
#define CLASS_1_E5F96CD821CB6395_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1754DB20)
#define CLASS_1_E5F96CD821CB6395_GET_PROPERTYDESC_OFFSET UNITYSDK_OFFSET(0x1754DAE0)
#define CLASS_1_E5F96CD821CB6395_GET_PROPERTYFACTORCONFIGS_OFFSET UNITYSDK_OFFSET(0x1754DB40)
#define CLASS_1_E5F96CD821CB6395_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1754DAC0)
#define CLASS_1_E5F96CD821CB6395_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1754DAA0)
#define CLASS_1_E5F96CD821CB6395_METHOD_1_296EFCE37BFFBD85_OFFSET UNITYSDK_OFFSET(0x1754D590)
#define CLASS_1_E5F96CD821CB6395_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1754DB10)
#define CLASS_1_E5F96CD821CB6395_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1754DB70)
#define CLASS_1_E5F96CD821CB6395_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1754DB30)
#define CLASS_1_E5F96CD821CB6395_SET_PROPERTYDESC_OFFSET UNITYSDK_OFFSET(0x1754DAF0)
#define CLASS_1_E5F96CD821CB6395_SET_PROPERTYFACTORCONFIGS_OFFSET UNITYSDK_OFFSET(0x1754DB50)
#define CLASS_1_E5F96CD821CB6395_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1754DAD0)
#define CLASS_1_E5F96CD821CB6395_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1754DAB0)
#define CLASS_1_E5F96CD821CB6395__CTOR_OFFSET UNITYSDK_OFFSET(0x1754DA90)

inline static constexpr unsigned int Class_1_E5F96CD821CB6395_TypeDefinitionIndex = 45397;

class Class_1_E5F96CD821CB6395 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* _PropertyFactorConfigs_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x20
	::RPG::Client::TextID _PropertyName_k__BackingField; // 0x28
	::System::Boolean _IsDisplay_k__BackingField; // 0x38
	::System::Int32 _Order_k__BackingField; // 0x3C
	::RPG::Client::TextID _PropertyDesc_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395__CTOR_OFFSET))(this);
	}

	static ::Class_1_E5F96CD821CB6395* Method_1_296EFCE37BFFBD85(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::Class_1_E5F96CD821CB6395*(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_METHOD_1_296EFCE37BFFBD85_OFFSET))(a1);
	}

	::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_PROPERTYNAME_OFFSET))(this);
	}

	::System::Void set_PropertyName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_PROPERTYNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_PROPERTYDESC_OFFSET))(this);
	}

	::System::Void set_PropertyDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_PROPERTYDESC_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_ORDER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* get_PropertyFactorConfigs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_PROPERTYFACTORCONFIGS_OFFSET))(this);
	}

	::System::Void set_PropertyFactorConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_PROPERTYFACTORCONFIGS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_GET_ISDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsDisplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5F96CD821CB6395_SET_ISDISPLAY_OFFSET))(this, a1);
	}
};
