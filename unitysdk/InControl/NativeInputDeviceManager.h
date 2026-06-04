#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/InControl/InputDeviceManager.h"

namespace InControl { class InputDeviceProfile; }
namespace InControl { class NativeInputDevice; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET UNITYSDK_OFFSET(0x18030390)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET UNITYSDK_OFFSET(0x18031760)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x18031430)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET UNITYSDK_OFFSET(0x180317F0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x18030560)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_DETACHDEVICE_OFFSET UNITYSDK_OFFSET(0x18031250)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET UNITYSDK_OFFSET(0x18030D30)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_ENABLE_OFFSET UNITYSDK_OFFSET(0x18031B10)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDATTACHEDDEVICE_OFFSET UNITYSDK_OFFSET(0x180311D0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDDETACHEDDEVICE_OFFSET UNITYSDK_OFFSET(0x18031350)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_SYSTEMFINDDETACHEDDEVICE_OFFSET UNITYSDK_OFFSET(0x18031520)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x180305E0)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x180300B0)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceManager_TypeDefinitionIndex = 37903;

	class NativeInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		static ::System::Func_3<::InControl::InputDeviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>*, ::InControl::NativeInputDevice*>** StaticGet_CustomFindDetachedDevice()
		{
			return (::System::Func_3<::InControl::InputDeviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>*, ::InControl::NativeInputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputDeviceManager_TypeDefinitionIndex)->GetStaticField(0x14FD0);
		}
		::System::Collections::Generic::List_1<::InControl::NativeInputDevice*>* attachedDevices; // 0x18
		::System::Collections::Generic::List_1<::InControl::NativeInputDevice*>* detachedDevices; // 0x20
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* systemDeviceProfiles; // 0x28
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* customDeviceProfiles; // 0x30
		::Il2CppArray<::System::UInt32>* deviceEvents; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_DESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void DetectDevice(::System::UInt32 a1, ::InControl::InputDeviceInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET))(this, a1, a2);
		}

		::System::Void AttachDevice(::InControl::NativeInputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::NativeInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET))(this, a1);
		}

		::System::Void DetachDevice(::InControl::NativeInputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::NativeInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_DETACHDEVICE_OFFSET))(this, a1);
		}

		::InControl::NativeInputDevice* FindAttachedDevice(::System::UInt32 a1)
		{
			return ((::InControl::NativeInputDevice*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDATTACHEDDEVICE_OFFSET))(this, a1);
		}

		::InControl::NativeInputDevice* FindDetachedDevice(::InControl::InputDeviceInfo a1)
		{
			return ((::InControl::NativeInputDevice*(*)(::PVOID, ::InControl::InputDeviceInfo))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_FINDDETACHEDDEVICE_OFFSET))(this, a1);
		}

		static ::InControl::NativeInputDevice* SystemFindDetachedDevice(::InControl::InputDeviceInfo a1, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>* a2)
		{
			return ((::InControl::NativeInputDevice*(*)(::InControl::InputDeviceInfo, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::NativeInputDevice*>*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_SYSTEMFINDDETACHEDDEVICE_OFFSET))(a1, a2);
		}

		::System::Void AddSystemDeviceProfile(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET))(this, a1);
		}

		::System::Void AddSystemDeviceProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET))(this);
		}

		static ::System::Boolean CheckPlatformSupport(::System::Collections::Generic::ICollection_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_CHECKPLATFORMSUPPORT_OFFSET))(a1);
		}

		static ::System::Boolean Enable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER_ENABLE_OFFSET))();
		}
	};
}
