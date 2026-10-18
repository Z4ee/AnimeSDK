#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/CakeCatchBubbleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0xC8D7A00)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xC8D7A20)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC8D7990)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ISSHOWPIC_OFFSET UNITYSDK_OFFSET(0xC8D79B0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8D79D0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC8D7970)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0xC8D7A10)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0xC8D7A30)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC8D79A0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ISSHOWPIC_OFFSET UNITYSDK_OFFSET(0xC8D79C0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8D79F0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC8D7980)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D7230)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleNotifyParam_TypeDefinitionIndex = 62964;

	class CakeCatchBubbleNotifyParam : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::CakeBubbleOffset _Offset_k__BackingField; // 0x18
		::RPG::Client::CakeCatchBubbleType _BubbleType_k__BackingField; // 0x24
		::System::UInt32 _RuntimeID_k__BackingField; // 0x28
		::System::Boolean _IsShowPic_k__BackingField; // 0x2C
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
