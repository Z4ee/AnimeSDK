#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;
namespace System { class String; }

#define CLASS_1_4F1450C7202739F5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA675200)
#define CLASS_1_4F1450C7202739F5_EQUALS_OFFSET UNITYSDK_OFFSET(0xA675170)
#define CLASS_1_4F1450C7202739F5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA6752F0)
#define CLASS_1_4F1450C7202739F5_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA675150)
#define CLASS_1_4F1450C7202739F5_GET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA675110)
#define CLASS_1_4F1450C7202739F5_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xA6750F0)
#define CLASS_1_4F1450C7202739F5_GET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xA675070)
#define CLASS_1_4F1450C7202739F5_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA675130)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xA6750D0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xA6750B0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xA675050)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xA675030)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xA675010)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA674FF0)
#define CLASS_1_4F1450C7202739F5_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA674FD0)
#define CLASS_1_4F1450C7202739F5_GET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xA675090)
#define CLASS_1_4F1450C7202739F5_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0xA6753B0)
#define CLASS_1_4F1450C7202739F5_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0xA675330)
#define CLASS_1_4F1450C7202739F5_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA675160)
#define CLASS_1_4F1450C7202739F5_SET_ISBATTLEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA675120)
#define CLASS_1_4F1450C7202739F5_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xA675100)
#define CLASS_1_4F1450C7202739F5_SET_MAINRELICFILTER_OFFSET UNITYSDK_OFFSET(0xA675080)
#define CLASS_1_4F1450C7202739F5_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xA675140)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYCLASSIFY_OFFSET UNITYSDK_OFFSET(0xA6750E0)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYINSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0xA6750C0)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMEFILTER_OFFSET UNITYSDK_OFFSET(0xA675060)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMERELIC_OFFSET UNITYSDK_OFFSET(0xA675040)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMESKILLTREE_OFFSET UNITYSDK_OFFSET(0xA675020)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xA675000)
#define CLASS_1_4F1450C7202739F5_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA674FE0)
#define CLASS_1_4F1450C7202739F5_SET_SUBRELICFILTER_OFFSET UNITYSDK_OFFSET(0xA6750A0)
#define CLASS_1_4F1450C7202739F5__CTOR_OFFSET UNITYSDK_OFFSET(0xA675430)
#define CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA675440)
#define CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA675450)

inline static constexpr unsigned int Class_1_4F1450C7202739F5_TypeDefinitionIndex = 48590;

class Class_1_4F1450C7202739F5 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::RPG::Client::TextID _PropertyNameRelic_k__BackingField; // 0x18
	::System::Boolean _IsBattleDisplay_k__BackingField; // 0x28
	::System::Boolean _IsDisplay_k__BackingField; // 0x29
	::System::UInt32 _PropertyClassify_k__BackingField; // 0x2C
	::RPG::Client::TextID _PropertyName_k__BackingField; // 0x30
	::System::UInt32 _MainRelicFilter_k__BackingField; // 0x40
	::System::UInt32 _SubRelicFilter_k__BackingField; // 0x44
	::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x48
	::System::UInt32 _Order_k__BackingField; // 0x4C
	::System::UInt32 _PropertyInstructionID_k__BackingField; // 0x50
	::RPG::Client::TextID _PropertyNameFilter_k__BackingField; // 0x58
	::RPG::Client::TextID _PropertyNameSkillTree_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAME_OFFSET))(this);
	}

	::System::Void set_PropertyName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyNameSkillTree()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMESKILLTREE_OFFSET))(this);
	}

	::System::Void set_PropertyNameSkillTree(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMESKILLTREE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyNameRelic()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMERELIC_OFFSET))(this);
	}

	::System::Void set_PropertyNameRelic(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMERELIC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_PropertyNameFilter()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYNAMEFILTER_OFFSET))(this);
	}

	::System::Void set_PropertyNameFilter(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYNAMEFILTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_MainRelicFilter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_MAINRELICFILTER_OFFSET))(this);
	}

	::System::Void set_MainRelicFilter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_MAINRELICFILTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_SubRelicFilter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_SUBRELICFILTER_OFFSET))(this);
	}

	::System::Void set_SubRelicFilter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_SUBRELICFILTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_PropertyInstructionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYINSTRUCTIONID_OFFSET))(this);
	}

	::System::Void set_PropertyInstructionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYINSTRUCTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PropertyClassify()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_PROPERTYCLASSIFY_OFFSET))(this);
	}

	::System::Void set_PropertyClassify(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_PROPERTYCLASSIFY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ISDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsDisplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ISDISPLAY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBattleDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ISBATTLEDISPLAY_OFFSET))(this);
	}

	::System::Void set_IsBattleDisplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ISBATTLEDISPLAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_Order()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ORDER_OFFSET))(this);
	}

	::System::Void set_Order(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ORDER_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_398* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5_EQUALS_OFFSET))(this, a1);
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

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1450C7202739F5___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
