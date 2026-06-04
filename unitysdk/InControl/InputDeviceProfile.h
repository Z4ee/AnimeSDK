#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSource.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/InControl/InputDeviceMatcher.h"
#include "unitysdk/InControl/InputDeviceProfileType.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/VersionInfo.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputControlMapping; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define INCONTROL_INPUTDEVICEPROFILE_ANALOG_OFFSET UNITYSDK_OFFSET(0x17FBD810)
#define INCONTROL_INPUTDEVICEPROFILE_BUTTON_OFFSET UNITYSDK_OFFSET(0x17FBD800)
#define INCONTROL_INPUTDEVICEPROFILE_CREATEINSTANCEOFTYPE_1_OFFSET UNITYSDK_OFFSET(0x17FBCE40)
#define INCONTROL_INPUTDEVICEPROFILE_CREATEINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x17FBCDD0)
#define INCONTROL_INPUTDEVICEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FBCF90)
#define INCONTROL_INPUTDEVICEPROFILE_DPADDOWNMAPPING2_OFFSET UNITYSDK_OFFSET(0x17FBE3E0)
#define INCONTROL_INPUTDEVICEPROFILE_DPADDOWNMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBE2A0)
#define INCONTROL_INPUTDEVICEPROFILE_DPADLEFTMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBE0C0)
#define INCONTROL_INPUTDEVICEPROFILE_DPADRIGHTMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBE160)
#define INCONTROL_INPUTDEVICEPROFILE_DPADUPMAPPING2_OFFSET UNITYSDK_OFFSET(0x17FBE340)
#define INCONTROL_INPUTDEVICEPROFILE_DPADUPMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBE200)
#define INCONTROL_INPUTDEVICEPROFILE_GET_ANALOGCOUNT_OFFSET UNITYSDK_OFFSET(0x17FBD7C0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_ANALOGMAPPINGS_OFFSET UNITYSDK_OFFSET(0x17FBCC90)
#define INCONTROL_INPUTDEVICEPROFILE_GET_BUTTONCOUNT_OFFSET UNITYSDK_OFFSET(0x17FBD7E0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_BUTTONMAPPINGS_OFFSET UNITYSDK_OFFSET(0x17FBCCB0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x17FBCBC0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x17FBCB80)
#define INCONTROL_INPUTDEVICEPROFILE_GET_DEVICENOTES_OFFSET UNITYSDK_OFFSET(0x17FBCBA0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x17FBCBE0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_EXCLUDEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x17FBCCF0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_INCLUDEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x17FBCCD0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x17FBD6A0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_ISNOTHIDDEN_OFFSET UNITYSDK_OFFSET(0x17FBD730)
#define INCONTROL_INPUTDEVICEPROFILE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x17FBD210)
#define INCONTROL_INPUTDEVICEPROFILE_GET_LASTRESORTMATCHERS_OFFSET UNITYSDK_OFFSET(0x17FBCDB0)
#define INCONTROL_INPUTDEVICEPROFILE_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17FBCC30)
#define INCONTROL_INPUTDEVICEPROFILE_GET_MATCHERS_OFFSET UNITYSDK_OFFSET(0x17FBCD90)
#define INCONTROL_INPUTDEVICEPROFILE_GET_MAXSYSTEMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x17FBCD30)
#define INCONTROL_INPUTDEVICEPROFILE_GET_MAXUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x17FBCD70)
#define INCONTROL_INPUTDEVICEPROFILE_GET_MINSYSTEMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x17FBCD10)
#define INCONTROL_INPUTDEVICEPROFILE_GET_MINUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x17FBCD50)
#define INCONTROL_INPUTDEVICEPROFILE_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x17FBCB60)
#define INCONTROL_INPUTDEVICEPROFILE_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x17FBCC00)
#define INCONTROL_INPUTDEVICEPROFILE_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17FBCC60)
#define INCONTROL_INPUTDEVICEPROFILE_HIDE_OFFSET UNITYSDK_OFFSET(0x17FBD5F0)
#define INCONTROL_INPUTDEVICEPROFILE_LASTRESORTMATCHES_OFFSET UNITYSDK_OFFSET(0x17FBD160)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKDOWNMAPPING2_OFFSET UNITYSDK_OFFSET(0x17FBDB40)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKDOWNMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBDA00)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKLEFTMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBD820)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKRIGHTMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBD8C0)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKUPMAPPING2_OFFSET UNITYSDK_OFFSET(0x17FBDAA0)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKUPMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBD960)
#define INCONTROL_INPUTDEVICEPROFILE_LEFTTRIGGERMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBDFA0)
#define INCONTROL_INPUTDEVICEPROFILE_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x17FBD0C0)
#define INCONTROL_INPUTDEVICEPROFILE_MATCHES_OFFSET UNITYSDK_OFFSET(0x17FBD010)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKDOWNMAPPING2_OFFSET UNITYSDK_OFFSET(0x17FBDF00)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKDOWNMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBDDC0)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKLEFTMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBDBE0)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKRIGHTMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBDC80)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKUPMAPPING2_OFFSET UNITYSDK_OFFSET(0x17FBDE60)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKUPMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBDD20)
#define INCONTROL_INPUTDEVICEPROFILE_RIGHTTRIGGERMAPPING_OFFSET UNITYSDK_OFFSET(0x17FBE030)
#define INCONTROL_INPUTDEVICEPROFILE_SET_ANALOGMAPPINGS_OFFSET UNITYSDK_OFFSET(0x17FBCCA0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_BUTTONMAPPINGS_OFFSET UNITYSDK_OFFSET(0x17FBCCC0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x17FBCBD0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x17FBCB90)
#define INCONTROL_INPUTDEVICEPROFILE_SET_DEVICENOTES_OFFSET UNITYSDK_OFFSET(0x17FBCBB0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x17FBCBF0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_EXCLUDEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x17FBCD00)
#define INCONTROL_INPUTDEVICEPROFILE_SET_INCLUDEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x17FBCCE0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_LASTRESORTMATCHERS_OFFSET UNITYSDK_OFFSET(0x17FBCDC0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17FBCC40)
#define INCONTROL_INPUTDEVICEPROFILE_SET_MATCHERS_OFFSET UNITYSDK_OFFSET(0x17FBCDA0)
#define INCONTROL_INPUTDEVICEPROFILE_SET_MAXSYSTEMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x17FBCD40)
#define INCONTROL_INPUTDEVICEPROFILE_SET_MAXUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x17FBCD80)
#define INCONTROL_INPUTDEVICEPROFILE_SET_MINSYSTEMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x17FBCD20)
#define INCONTROL_INPUTDEVICEPROFILE_SET_MINUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x17FBCD60)
#define INCONTROL_INPUTDEVICEPROFILE_SET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x17FBCB70)
#define INCONTROL_INPUTDEVICEPROFILE_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x17FBCC10)
#define INCONTROL_INPUTDEVICEPROFILE_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17FBCC70)
#define INCONTROL_INPUTDEVICEPROFILE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FBE550)
#define INCONTROL_INPUTDEVICEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBE480)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceProfile_TypeDefinitionIndex = 37880;

	class InputDeviceProfile : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_hiddenProfiles()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(InputDeviceProfile_TypeDefinitionIndex)->GetStaticField(0x122B0);
		}
		static ::InControl::InputControlSource* StaticGet_EscapeKey()
		{
			return (::InControl::InputControlSource*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceProfile_TypeDefinitionIndex)->GetStaticField(0x55B0);
		}
		static ::InControl::InputControlSource* StaticGet_MenuKey()
		{
			return (::InControl::InputControlSource*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceProfile_TypeDefinitionIndex)->GetStaticField(0x55B8);
		}
		::InControl::InputDeviceProfileType profileType; // 0x10
		::System::String* deviceName; // 0x18
		::System::String* deviceNotes; // 0x20
		::InControl::InputDeviceClass deviceClass; // 0x28
		::InControl::InputDeviceStyle deviceStyle; // 0x2C
		::System::Single sensitivity; // 0x30
		::System::Single lowerDeadZone; // 0x34
		::System::Single upperDeadZone; // 0x38
		::Il2CppArray<::System::String*>* includePlatforms; // 0x40
		::Il2CppArray<::System::String*>* excludePlatforms; // 0x48
		::System::Int32 minSystemBuildNumber; // 0x50
		::System::Int32 maxSystemBuildNumber; // 0x54
		::InControl::VersionInfo minUnityVersion; // 0x58
		::InControl::VersionInfo maxUnityVersion; // 0x68
		::Il2CppArray<::InControl::InputDeviceMatcher>* matchers; // 0x78
		::Il2CppArray<::InControl::InputDeviceMatcher>* lastResortMatchers; // 0x80
		::Il2CppArray<::InControl::InputControlMapping*>* analogMappings; // 0x88
		::Il2CppArray<::InControl::InputControlMapping*>* buttonMappings; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE__CCTOR_OFFSET))();
		}

		::InControl::InputDeviceProfileType get_ProfileType()
		{
			return ((::InControl::InputDeviceProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_PROFILETYPE_OFFSET))(this);
		}

		::System::Void set_ProfileType(::InControl::InputDeviceProfileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfileType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_PROFILETYPE_OFFSET))(this, a1);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_DEVICENAME_OFFSET))(this, a1);
		}

		::System::String* get_DeviceNotes()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_DEVICENOTES_OFFSET))(this);
		}

		::System::Void set_DeviceNotes(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_DEVICENOTES_OFFSET))(this, a1);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_DEVICECLASS_OFFSET))(this);
		}

		::System::Void set_DeviceClass(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_DEVICECLASS_OFFSET))(this, a1);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Void set_DeviceStyle(::InControl::InputDeviceStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_DEVICESTYLE_OFFSET))(this, a1);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_SENSITIVITY_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputControlMapping*>* get_AnalogMappings()
		{
			return ((::Il2CppArray<::InControl::InputControlMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_ANALOGMAPPINGS_OFFSET))(this);
		}

		::System::Void set_AnalogMappings(::Il2CppArray<::InControl::InputControlMapping*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlMapping*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_ANALOGMAPPINGS_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputControlMapping*>* get_ButtonMappings()
		{
			return ((::Il2CppArray<::InControl::InputControlMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_BUTTONMAPPINGS_OFFSET))(this);
		}

		::System::Void set_ButtonMappings(::Il2CppArray<::InControl::InputControlMapping*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlMapping*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_BUTTONMAPPINGS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_IncludePlatforms()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_INCLUDEPLATFORMS_OFFSET))(this);
		}

		::System::Void set_IncludePlatforms(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_INCLUDEPLATFORMS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_ExcludePlatforms()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_EXCLUDEPLATFORMS_OFFSET))(this);
		}

		::System::Void set_ExcludePlatforms(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_EXCLUDEPLATFORMS_OFFSET))(this, a1);
		}

		::System::Int32 get_MinSystemBuildNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_MINSYSTEMBUILDNUMBER_OFFSET))(this);
		}

		::System::Void set_MinSystemBuildNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_MINSYSTEMBUILDNUMBER_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxSystemBuildNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_MAXSYSTEMBUILDNUMBER_OFFSET))(this);
		}

		::System::Void set_MaxSystemBuildNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_MAXSYSTEMBUILDNUMBER_OFFSET))(this, a1);
		}

		::InControl::VersionInfo get_MinUnityVersion()
		{
			return ((::InControl::VersionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_MINUNITYVERSION_OFFSET))(this);
		}

		::System::Void set_MinUnityVersion(::InControl::VersionInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_MINUNITYVERSION_OFFSET))(this, a1);
		}

		::InControl::VersionInfo get_MaxUnityVersion()
		{
			return ((::InControl::VersionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_MAXUNITYVERSION_OFFSET))(this);
		}

		::System::Void set_MaxUnityVersion(::InControl::VersionInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_MAXUNITYVERSION_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputDeviceMatcher>* get_Matchers()
		{
			return ((::Il2CppArray<::InControl::InputDeviceMatcher>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_MATCHERS_OFFSET))(this);
		}

		::System::Void set_Matchers(::Il2CppArray<::InControl::InputDeviceMatcher>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputDeviceMatcher>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_MATCHERS_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputDeviceMatcher>* get_LastResortMatchers()
		{
			return ((::Il2CppArray<::InControl::InputDeviceMatcher>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_LASTRESORTMATCHERS_OFFSET))(this);
		}

		::System::Void set_LastResortMatchers(::Il2CppArray<::InControl::InputDeviceMatcher>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputDeviceMatcher>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_SET_LASTRESORTMATCHERS_OFFSET))(this, a1);
		}

		static ::InControl::InputDeviceProfile* CreateInstanceOfType(::System::Type* a1)
		{
			return ((::InControl::InputDeviceProfile*(*)(::System::Type*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_CREATEINSTANCEOFTYPE_OFFSET))(a1);
		}

		static ::InControl::InputDeviceProfile* CreateInstanceOfType_1(::System::String* a1)
		{
			return ((::InControl::InputDeviceProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_CREATEINSTANCEOFTYPE_1_OFFSET))(a1);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DEFINE_OFFSET))(this);
		}

		::System::Boolean Matches(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_MATCHES_OFFSET))(this, a1);
		}

		::System::Boolean LastResortMatches(::InControl::InputDeviceInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LASTRESORTMATCHES_OFFSET))(this, a1);
		}

		::System::Boolean Matches_1(::InControl::InputDeviceInfo a1, ::Il2CppArray<::InControl::InputDeviceMatcher>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceInfo, ::Il2CppArray<::InControl::InputDeviceMatcher>*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_MATCHES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		static ::System::Void Hide(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_HIDE_OFFSET))(a1);
		}

		::System::Boolean get_IsHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_ISHIDDEN_OFFSET))(this);
		}

		::System::Boolean get_IsNotHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_ISNOTHIDDEN_OFFSET))(this);
		}

		::System::Int32 get_AnalogCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_ANALOGCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ButtonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_GET_BUTTONCOUNT_OFFSET))(this);
		}

		static ::InControl::InputControlSource Button(::System::Int32 a1)
		{
			return ((::InControl::InputControlSource(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_BUTTON_OFFSET))(a1);
		}

		static ::InControl::InputControlSource Analog(::System::Int32 a1)
		{
			return ((::InControl::InputControlSource(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_ANALOG_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftStickLeftMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKLEFTMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftStickRightMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKRIGHTMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftStickUpMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKUPMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftStickDownMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKDOWNMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftStickUpMapping2(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKUPMAPPING2_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftStickDownMapping2(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTSTICKDOWNMAPPING2_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* RightStickLeftMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKLEFTMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* RightStickRightMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKRIGHTMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* RightStickUpMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKUPMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* RightStickDownMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKDOWNMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* RightStickUpMapping2(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKUPMAPPING2_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* RightStickDownMapping2(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTSTICKDOWNMAPPING2_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* LeftTriggerMapping(::System::Int32 a1, ::System::String* a2)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_LEFTTRIGGERMAPPING_OFFSET))(a1, a2);
		}

		static ::InControl::InputControlMapping* RightTriggerMapping(::System::Int32 a1, ::System::String* a2)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_RIGHTTRIGGERMAPPING_OFFSET))(a1, a2);
		}

		static ::InControl::InputControlMapping* DPadLeftMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DPADLEFTMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* DPadRightMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DPADRIGHTMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* DPadUpMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DPADUPMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* DPadDownMapping(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DPADDOWNMAPPING_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* DPadUpMapping2(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DPADUPMAPPING2_OFFSET))(a1);
		}

		static ::InControl::InputControlMapping* DPadDownMapping2(::System::Int32 a1)
		{
			return ((::InControl::InputControlMapping*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICEPROFILE_DPADDOWNMAPPING2_OFFSET))(a1);
		}
	};
}
