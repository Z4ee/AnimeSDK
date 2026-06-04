#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
#include "unitysdk/RPG/CustomRP/Quality.h"

namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class RPGQualitySettingsModel; }
namespace System { class String; }

#define RPG_CLIENT_GRAPHICSSETTINGS_GET_CUSTOMHORIZONTALINDENT_OFFSET UNITYSDK_OFFSET(0xBADB630)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_ENABLEPSOSHADERWARMUP_OFFSET UNITYSDK_OFFSET(0xBADBDE0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xBADB190)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_ISUSERSAVE_OFFSET UNITYSDK_OFFSET(0xBADB0B0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADB780)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xBADB310)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0xBADB8D0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xBADB4B0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADBB60)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADBA20)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADBCA0)
#define RPG_CLIENT_GRAPHICSSETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBADAFD0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_CUSTOMHORIZONTALINDENT_OFFSET UNITYSDK_OFFSET(0xBADB6E0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_ENABLEPSOSHADERWARMUP_OFFSET UNITYSDK_OFFSET(0xBADBE70)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xBADB250)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_ISUSERSAVE_OFFSET UNITYSDK_OFFSET(0xBADB120)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_MAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADB820)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xBADB3F0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_PAPERWHITE_OFFSET UNITYSDK_OFFSET(0xBADB970)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xBADB570)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADBBF0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADBAB0)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET UNITYSDK_OFFSET(0xBADBD30)
#define RPG_CLIENT_GRAPHICSSETTINGS_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xBADB040)
#define RPG_CLIENT_GRAPHICSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xBADAF50)

namespace RPG::Client
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 55480;

	class GraphicsSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUserSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_ISUSERSAVE_OFFSET))(this);
		}

		::System::Void set_IsUserSave(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_ISUSERSAVE_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_GraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_GRAPHICSQUALITY_OFFSET))(this);
		}

		::System::Void set_GraphicsQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_GRAPHICSQUALITY_OFFSET))(this, a1);
		}

		::RPG::Client::RPGQualitySettingsModel* get_Model()
		{
			return ((::RPG::Client::RPGQualitySettingsModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::RPG::Client::RPGQualitySettingsModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RPGQualitySettingsModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_MODEL_OFFSET))(this, a1);
		}

		::RPG::Client::PCResolution* get_PCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_PCRESOLUTION_OFFSET))(this);
		}

		::System::Void set_PCResolution(::RPG::Client::PCResolution* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_PCRESOLUTION_OFFSET))(this, a1);
		}

		::System::Single get_CustomHorizontalIndent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_CUSTOMHORIZONTALINDENT_OFFSET))(this);
		}

		::System::Void set_CustomHorizontalIndent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_CUSTOMHORIZONTALINDENT_OFFSET))(this, a1);
		}

		::System::Single get_MaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_MAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_MaxLuminance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_MAXLUMINANCE_OFFSET))(this, a1);
		}

		::System::Single get_PaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_PAPERWHITE_OFFSET))(this);
		}

		::System::Void set_PaperWhite(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_PAPERWHITE_OFFSET))(this, a1);
		}

		::System::Single get_SystemCalibratedMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedMaxLuminance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMAXLUMINANCE_OFFSET))(this, a1);
		}

		::System::Single get_SystemCalibratedFullFrameMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedFullFrameMaxLuminance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDFULLFRAMEMAXLUMINANCE_OFFSET))(this, a1);
		}

		::System::Single get_SystemCalibratedMinLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))(this);
		}

		::System::Void set_SystemCalibratedMinLuminance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_SYSTEMCALIBRATEDMINLUMINANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnablePsoShaderWarmup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_GET_ENABLEPSOSHADERWARMUP_OFFSET))(this);
		}

		::System::Void set_EnablePsoShaderWarmup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGS_SET_ENABLEPSOSHADERWARMUP_OFFSET))(this, a1);
		}
	};
}
