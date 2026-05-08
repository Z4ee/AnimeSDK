#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_F6CF446D65DF58A2_2;
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_22C02BB7023D4A18_METHOD_1_A874B893DDCB090B_OFFSET UNITYSDK_OFFSET(0x11C175F0)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_22C02BB7023D4A18__CTOR_OFFSET UNITYSDK_OFFSET(0x11C175E0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_22C02BB7023D4A18_TypeDefinitionIndex = 60491;

class Class_1_6D3799F67B8415DA_Class_1_22C02BB7023D4A18 : public ::System::Object
{
public:
	::Class_1_6D3799F67B8415DA_Class_1_F6CF446D65DF58A2_2* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_22C02BB7023D4A18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A874B893DDCB090B(::MoleMole::Cameras::ConfigCameraOverrideTrack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_22C02BB7023D4A18_METHOD_1_A874B893DDCB090B_OFFSET))(this, a1);
	}
};
