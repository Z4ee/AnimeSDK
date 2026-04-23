#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define INCONTROL_UNITYINPUTDEVICEPROFILELIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1730C7F0)
#define INCONTROL_UNITYINPUTDEVICEPROFILELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1730C7E0)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceProfileList_TypeDefinitionIndex = 37205;

	class UnityInputDeviceProfileList : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Profiles()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UnityInputDeviceProfileList_TypeDefinitionIndex)->GetStaticField(0x131A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEPROFILELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEPROFILELIST__CCTOR_OFFSET))();
		}
	};
}
