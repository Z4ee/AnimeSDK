#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_544;
namespace System { class String; }

#define CLASS_1_A561DBBEB8754F4D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB8528A0)
#define CLASS_1_A561DBBEB8754F4D_EQUALS_OFFSET UNITYSDK_OFFSET(0xB852810)
#define CLASS_1_A561DBBEB8754F4D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB852990)
#define CLASS_1_A561DBBEB8754F4D_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB8527F0)
#define CLASS_1_A561DBBEB8754F4D_GET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8527B0)
#define CLASS_1_A561DBBEB8754F4D_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB852790)
#define CLASS_1_A561DBBEB8754F4D_GET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852710)
#define CLASS_1_A561DBBEB8754F4D_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xB8527D0)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xB852770)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xB852750)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xB8526F0)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xB8526D0)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xB8526B0)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xB852690)
#define CLASS_1_A561DBBEB8754F4D_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB852670)
#define CLASS_1_A561DBBEB8754F4D_GET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852730)
#define CLASS_1_A561DBBEB8754F4D_METHOD_1_148214CEA2F00B70_OFFSET UNITYSDK_OFFSET(0xB852AB0)
#define CLASS_1_A561DBBEB8754F4D_METHOD_1_6062BB7D9634C869_OFFSET UNITYSDK_OFFSET(0xB8529D0)
#define CLASS_1_A561DBBEB8754F4D_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB852800)
#define CLASS_1_A561DBBEB8754F4D_SET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8527C0)
#define CLASS_1_A561DBBEB8754F4D_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xB8527A0)
#define CLASS_1_A561DBBEB8754F4D_SET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852720)
#define CLASS_1_A561DBBEB8754F4D_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xB8527E0)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xB852780)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xB852760)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xB852700)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xB8526E0)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xB8526C0)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xB8526A0)
#define CLASS_1_A561DBBEB8754F4D_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB852680)
#define CLASS_1_A561DBBEB8754F4D_SET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xB852740)
#define CLASS_1_A561DBBEB8754F4D__CTOR_OFFSET UNITYSDK_OFFSET(0xB852B90)

inline static constexpr unsigned int Class_1_A561DBBEB8754F4D_TypeDefinitionIndex = 51967;

class Class_1_A561DBBEB8754F4D : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::RPG::Client::TextID _PropertyNameFilter_k__BackingField; // 0x18
	::System::UInt32 _SubRelicFilter_k__BackingField; // 0x28
	::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x2C
	::System::UInt32 _PropertyClassify_k__BackingField; // 0x30
	::System::UInt32 _PropertyInstructionID_k__BackingField; // 0x34
	::System::UInt32 _Order_k__BackingField; // 0x38
	::RPG::Client::TextID _PropertyNameRelic_k__BackingField; // 0x40
	::RPG::Client::TextID _PropertyName_k__BackingField; // 0x50
	::RPG::Client::TextID _PropertyNameSkillTree_k__BackingField; // 0x60
	::System::Boolean _IsBattleDisplay_k__BackingField; // 0x70
	::System::Boolean _IsDisplay_k__BackingField; // 0x71
	::System::UInt32 _MainRelicFilter_k__BackingField; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAME_OFFSET))(this);
	}

	::System::Void set_PropertyName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyNameSkillTree()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAMESKILLTREE_OFFSET))(this);
	}

	::System::Void set_PropertyNameSkillTree(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAMESKILLTREE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyNameRelic()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAMERELIC_OFFSET))(this);
	}

	::System::Void set_PropertyNameRelic(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAMERELIC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyNameFilter()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYNAMEFILTER_OFFSET))(this);
	}

	::System::Void set_PropertyNameFilter(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYNAMEFILTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_MainRelicFilter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_MAINRELICFILTER_OFFSET))(this);
	}

	::System::Void set_MainRelicFilter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_MAINRELICFILTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_SubRelicFilter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_SUBRELICFILTER_OFFSET))(this);
	}

	::System::Void set_SubRelicFilter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_SUBRELICFILTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_PropertyInstructionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYINSTRUCTIONID_OFFSET))(this);
	}

	::System::Void set_PropertyInstructionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYINSTRUCTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PropertyClassify()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_PROPERTYCLASSIFY_OFFSET))(this);
	}

	::System::Void set_PropertyClassify(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_PROPERTYCLASSIFY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_ISDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsDisplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_ISDISPLAY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBattleDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_ISBATTLEDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsBattleDisplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_ISBATTLEDISPLAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_Order()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_ORDER_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6062BB7D9634C869(::Class_1_A561DBBEB8754F4D* a1, ::Class_1_A561DBBEB8754F4D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A561DBBEB8754F4D*, ::Class_1_A561DBBEB8754F4D*))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_METHOD_1_6062BB7D9634C869_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_148214CEA2F00B70(::Class_1_A561DBBEB8754F4D* a1, ::Class_1_A561DBBEB8754F4D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A561DBBEB8754F4D*, ::Class_1_A561DBBEB8754F4D*))((::PBYTE)hIl2Cpp + CLASS_1_A561DBBEB8754F4D_METHOD_1_148214CEA2F00B70_OFFSET))(a1, a2);
	}
};
