#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
namespace System { class String; }

#define CLASS_1_4F1450C7202739F5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x938A0A0)
#define CLASS_1_4F1450C7202739F5_EQUALS_OFFSET UNITYSDK_OFFSET(0x938A010)
#define CLASS_1_4F1450C7202739F5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x938A1A0)
#define CLASS_1_4F1450C7202739F5_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9389FF0)
#define CLASS_1_4F1450C7202739F5_GET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0x9389FB0)
#define CLASS_1_4F1450C7202739F5_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x9389F90)
#define CLASS_1_4F1450C7202739F5_GET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0x9389F10)
#define CLASS_1_4F1450C7202739F5_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9389FD0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0x9389F70)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0x9389F50)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0x9389EF0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0x9389ED0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0x9389EB0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9389E90)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9389E70)
#define CLASS_1_4F1450C7202739F5_GET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0x9389F30)
#define CLASS_1_4F1450C7202739F5_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x938A260)
#define CLASS_1_4F1450C7202739F5_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0x938A1E0)
#define CLASS_1_4F1450C7202739F5_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x938A000)
#define CLASS_1_4F1450C7202739F5_SET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0x9389FC0)
#define CLASS_1_4F1450C7202739F5_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x9389FA0)
#define CLASS_1_4F1450C7202739F5_SET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0x9389F20)
#define CLASS_1_4F1450C7202739F5_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x9389FE0)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0x9389F80)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0x9389F60)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0x9389F00)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0x9389EE0)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0x9389EC0)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9389EA0)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9389E80)
#define CLASS_1_4F1450C7202739F5_SET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0x9389F40)
#define CLASS_1_4F1450C7202739F5__CTOR_OFFSET UNITYSDK_OFFSET(0x938A2E0)
#define CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x938A2F0)
#define CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x938A300)

inline static constexpr unsigned int Class_1_4F1450C7202739F5_TypeDefinitionIndex = 47973;

class Class_1_4F1450C7202739F5 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::RPG::Client::TextID _PropertyName_k__BackingField; // 0x18
	::RPG::Client::TextID _PropertyNameFilter_k__BackingField; // 0x28
	::System::UInt32 _SubRelicFilter_k__BackingField; // 0x38
	::System::Boolean _IsBattleDisplay_k__BackingField; // 0x3C
	::System::Boolean _IsDisplay_k__BackingField; // 0x3D
	::System::UInt32 _PropertyInstructionID_k__BackingField; // 0x40
	::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x44
	::System::UInt32 _MainRelicFilter_k__BackingField; // 0x48
	::System::UInt32 _PropertyClassify_k__BackingField; // 0x4C
	::System::UInt32 _Order_k__BackingField; // 0x50
	::RPG::Client::TextID _PropertyNameRelic_k__BackingField; // 0x58
	::RPG::Client::TextID _PropertyNameSkillTree_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYTYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_PropertyName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAME_OFFSET))(this);
	}

	::System::Void set_PropertyName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_PropertyNameSkillTree()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMESKILLTREE_OFFSET))(this);
	}

	::System::Void set_PropertyNameSkillTree(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMESKILLTREE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_PropertyNameRelic()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMERELIC_OFFSET))(this);
	}

	::System::Void set_PropertyNameRelic(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMERELIC_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_PropertyNameFilter()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMEFILTER_OFFSET))(this);
	}

	::System::Void set_PropertyNameFilter(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMEFILTER_OFFSET))(this, value);
	}

	::System::UInt32 get_MainRelicFilter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_MAINRELICFILTER_OFFSET))(this);
	}

	::System::Void set_MainRelicFilter(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_MAINRELICFILTER_OFFSET))(this, value);
	}

	::System::UInt32 get_SubRelicFilter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_SUBRELICFILTER_OFFSET))(this);
	}

	::System::Void set_SubRelicFilter(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_SUBRELICFILTER_OFFSET))(this, value);
	}

	::System::UInt32 get_PropertyInstructionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYINSTRUCTIONID_OFFSET))(this);
	}

	::System::Void set_PropertyInstructionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYINSTRUCTIONID_OFFSET))(this, value);
	}

	::System::UInt32 get_PropertyClassify()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYCLASSIFY_OFFSET))(this);
	}

	::System::Void set_PropertyClassify(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYCLASSIFY_OFFSET))(this, value);
	}

	::System::Boolean get_IsDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ISDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsDisplay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ISDISPLAY_OFFSET))(this, value);
	}

	::System::Boolean get_IsBattleDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ISBATTLEDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsBattleDisplay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ISBATTLEDISPLAY_OFFSET))(this, value);
	}

	::System::UInt32 get_Order()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ORDER_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_4F1450C7202739F5* a1, ::Class_1_4F1450C7202739F5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_4F1450C7202739F5*, ::Class_1_4F1450C7202739F5*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_4F1450C7202739F5* a1, ::Class_1_4F1450C7202739F5* a2)
	{
		return ((::System::Boolean(*)(::Class_1_4F1450C7202739F5*, ::Class_1_4F1450C7202739F5*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
