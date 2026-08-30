#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B56D3A0)
#define INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56D390)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceProfileList_TypeDefinitionIndex = 39573;

	class NativeInputDeviceProfileList : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Profiles()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputDeviceProfileList_TypeDefinitionIndex)->GetStaticField(0xAE60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CCTOR_OFFSET))();
		}
	};
}
