#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define LOGINCUSTOMSKIN_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x14E985D0)
#define LOGINCUSTOMSKIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14E98390)
#define LOGINCUSTOMSKIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x14E98550)
#define LOGINCUSTOMSKIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14E98590)
#define LOGINCUSTOMSKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14E984C0)

inline static constexpr unsigned int LoginCustomSkin_TypeDefinitionIndex = 78972;

class LoginCustomSkin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::LoginCustomSkin** StaticGet__instance()
	{
		return (::LoginCustomSkin**)Il2CppClass::FromTypeDefinitionIndex(LoginCustomSkin_TypeDefinitionIndex)->GetStaticField(0x4AC40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN__CTOR_OFFSET))(this);
	}

	static ::LoginCustomSkin* Instance()
	{
		return ((::LoginCustomSkin*(*)())((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_ONSHOW_OFFSET))(this);
	}

	::System::String* GetElement(::System::String* elementKey)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOGINCUSTOMSKIN_GETELEMENT_OFFSET))(this, elementKey);
	}
};
