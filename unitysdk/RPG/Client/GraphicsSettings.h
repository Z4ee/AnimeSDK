#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
#include "unitysdk/RPG/CustomRP/Quality.h"

namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class RPGQualitySettingsModel; }
namespace System { class String; }

#define RPG_CLIENT_GRAPHICSSETTINGS_GET_CUSTOMHORIZONTALINDENT_OFFSET UNITYSDK_OFFSET(0x97C71F0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_ENABLEPSOSHADERWARMUP_OFFSET UNITYSDK_OFFSET(0x97C79A0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x97C6D50)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_ISUSERSAVE_OFFSET UNITYSDK_OFFSET(0x97C6C70)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C7340)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x97C6ED0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x97C7490)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x97C7070)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C7720)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C75E0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C7860)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x97C6B90)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_CUSTOMHORIZONTALINDENT_OFFSET UNITYSDK_OFFSET(0x97C72A0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_ENABLEPSOSHADERWARMUP_OFFSET UNITYSDK_OFFSET(0x97C7A30)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0x97C6E10)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_ISUSERSAVE_OFFSET UNITYSDK_OFFSET(0x97C6CE0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C73E0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x97C6FB0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0x97C7530)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x97C7130)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C77B0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C7670)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0x97C78F0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x97C6C00)
#define RPG_CLIENT_GRAPHICSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x97C6B10)

namespace RPG::Client
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 48008;

	class GraphicsSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS__CTOR_OFFSET))(this, name);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_VERSION_OFFSET))(this, value);
		}

		::System::Boolean get_IsUserSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_ISUSERSAVE_OFFSET))(this);
		}

		::System::Void set_IsUserSave(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_ISUSERSAVE_OFFSET))(this, value);
		}

		::RPG::CustomRP::Quality get_GraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_GRAPHICSQUALITY_OFFSET))(this);
		}

		::System::Void set_GraphicsQuality(::RPG::CustomRP::Quality value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_GRAPHICSQUALITY_OFFSET))(this, value);
		}

		::RPG::Client::RPGQualitySettingsModel* get_Model()
		{
			return ((::RPG::Client::RPGQualitySettingsModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::RPG::Client::RPGQualitySettingsModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGQualitySettingsModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_MODEL_OFFSET))(this, value);
		}

		::RPG::Client::PCResolution* get_PCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_PCRESOLUTION_OFFSET))(this);
		}

		::System::Void set_PCResolution(::RPG::Client::PCResolution* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_PCRESOLUTION_OFFSET))(this, value);
		}

		::System::Single get_CustomHorizontalIndent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_CUSTOMHORIZONTALINDENT_OFFSET))(this);
		}

		::System::Void set_CustomHorizontalIndent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_CUSTOMHORIZONTALINDENT_OFFSET))(this, value);
		}

		::System::Single get_MaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_MAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_MaxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_MAXLUMINANCE_OFFSET))(this, value);
		}

		::System::Single get_PaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_PAPERWHITE_OFFSET))(this);
		}

		::System::Void set_PaperWhite(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_PAPERWHITE_OFFSET))(this, value);
		}

		::System::Single get_SystemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedMaxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))(this, value);
		}

		::System::Single get_SystemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedFullFrameMaxLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))(this, value);
		}

		::System::Single get_SystemCalibratedMinLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedMinLuminance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))(this, value);
		}

		::System::Boolean get_EnablePsoShaderWarmup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_ENABLEPSOSHADERWARMUP_OFFSET))(this);
		}

		::System::Void set_EnablePsoShaderWarmup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_ENABLEPSOSHADERWARMUP_OFFSET))(this, value);
		}
	};
}
