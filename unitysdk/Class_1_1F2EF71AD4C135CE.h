#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftChipMoldFilterItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1F2EF71AD4C135CE_ADD_ONCLICKREQUESTED_OFFSET UNITYSDK_OFFSET(0x13A2B580)
#define CLASS_1_1F2EF71AD4C135CE_ADD_ONISSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x13A2B680)
#define CLASS_1_1F2EF71AD4C135CE_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x13A2B410)
#define CLASS_1_1F2EF71AD4C135CE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x13A2B470)
#define CLASS_1_1F2EF71AD4C135CE_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x13A2B560)
#define CLASS_1_1F2EF71AD4C135CE_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x13A2B490)
#define CLASS_1_1F2EF71AD4C135CE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13A2B450)
#define CLASS_1_1F2EF71AD4C135CE_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x13A2B430)
#define CLASS_1_1F2EF71AD4C135CE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13A2B3F0)
#define CLASS_1_1F2EF71AD4C135CE_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x13A2B4F0)
#define CLASS_1_1F2EF71AD4C135CE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13A2B4B0)
#define CLASS_1_1F2EF71AD4C135CE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13A2B740)
#define CLASS_1_1F2EF71AD4C135CE_REMOVE_ONCLICKREQUESTED_OFFSET UNITYSDK_OFFSET(0x13A2B600)
#define CLASS_1_1F2EF71AD4C135CE_REMOVE_ONISSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x13A2B6E0)
#define CLASS_1_1F2EF71AD4C135CE_SET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x13A2B420)
#define CLASS_1_1F2EF71AD4C135CE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x13A2B480)
#define CLASS_1_1F2EF71AD4C135CE_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x13A2B570)
#define CLASS_1_1F2EF71AD4C135CE_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x13A2B4A0)
#define CLASS_1_1F2EF71AD4C135CE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x13A2B460)
#define CLASS_1_1F2EF71AD4C135CE_SET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x13A2B440)
#define CLASS_1_1F2EF71AD4C135CE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x13A2B400)
#define CLASS_1_1F2EF71AD4C135CE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2B7A0)

inline static constexpr unsigned int Class_1_1F2EF71AD4C135CE_TypeDefinitionIndex = 79521;

class Class_1_1F2EF71AD4C135CE : public ::System::Object
{
public:
	::System::Action* OnIsSelectedChanged; // 0x10
	::System::Action_1<::Class_1_1F2EF71AD4C135CE*>* OnClickRequested; // 0x18
	::System::String* _IconPath_k__BackingField; // 0x20
	::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType _Type_k__BackingField; // 0x28
	::RPG::Client::MechCraft::MechCraftChipTraitType _TraitType_k__BackingField; // 0x2C
	::System::Boolean _IsRecommended_k__BackingField; // 0x30
	::System::Boolean _IsAvailable_k__BackingField; // 0x31
	::System::Boolean FHBNNGCEPFD; // 0x32
	::RPG::Client::MechCraft::MechCraftAttributeType _AttributeType_k__BackingField; // 0x34
	::RPG::Client::TextID _Name_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE__CTOR_OFFSET))(this);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType get_Type()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterItemType))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_TYPE_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType get_AttributeType()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_ATTRIBUTETYPE_OFFSET))(this);
	}

	::System::Void set_AttributeType(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_ATTRIBUTETYPE_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType get_TraitType()
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_TRAITTYPE_OFFSET))(this);
	}

	::System::Void set_TraitType(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_TRAITTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRecommended()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_ISRECOMMENDED_OFFSET))(this);
	}

	::System::Void set_IsRecommended(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_ISRECOMMENDED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAvailable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_GET_ISAVAILABLE_OFFSET))(this);
	}

	::System::Void set_IsAvailable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_SET_ISAVAILABLE_OFFSET))(this, a1);
	}

	::System::Void add_OnClickRequested(::System::Action_1<::Class_1_1F2EF71AD4C135CE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1F2EF71AD4C135CE*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_ADD_ONCLICKREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_OnClickRequested(::System::Action_1<::Class_1_1F2EF71AD4C135CE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1F2EF71AD4C135CE*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_REMOVE_ONCLICKREQUESTED_OFFSET))(this, a1);
	}

	::System::Void add_OnIsSelectedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_ADD_ONISSELECTEDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsSelectedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_REMOVE_ONISSELECTEDCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2EF71AD4C135CE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
