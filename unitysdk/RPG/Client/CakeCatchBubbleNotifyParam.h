#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/CakeCatchBubbleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x1A12F1F0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x1A12F210)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A12F180)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ISSHOWPIC_OFFSET UNITYSDK_OFFSET(0x1A12F1A0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1A12F1C0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1A12F160)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x1A12F200)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x1A12F220)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A12F190)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ISSHOWPIC_OFFSET UNITYSDK_OFFSET(0x1A12F1B0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1A12F1E0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1A12F170)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A12EA20)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleNotifyParam_TypeDefinitionIndex = 63031;

	class CakeCatchBubbleNotifyParam : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::CakeCatchBubbleType _BubbleType_k__BackingField; // 0x18
		::System::Boolean _IsShowPic_k__BackingField; // 0x1C
		::System::UInt32 _RuntimeID_k__BackingField; // 0x20
		::RPG::Client::CakeBubbleOffset _Offset_k__BackingField; // 0x24
		::RPG::Client::TextID _ContentTextID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowPic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ISSHOWPIC_OFFSET))(this);
		}

		::System::Void set_IsShowPic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ISSHOWPIC_OFFSET))(this, a1);
		}

		::RPG::Client::CakeBubbleOffset get_Offset()
		{
			return ((::RPG::Client::CakeBubbleOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::RPG::Client::CakeBubbleOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeBubbleOffset))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_OFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::CakeCatchBubbleType get_BubbleType()
		{
			return ((::RPG::Client::CakeCatchBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_BUBBLETYPE_OFFSET))(this);
		}

		::System::Void set_BubbleType(::RPG::Client::CakeCatchBubbleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_BUBBLETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_CONTENTTEXTID_OFFSET))(this);
		}

		::System::Void set_ContentTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_CONTENTTEXTID_OFFSET))(this, a1);
		}
	};
}
