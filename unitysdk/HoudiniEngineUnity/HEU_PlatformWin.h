#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PlatformWin_RegSAM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETAPPLICATIONPATH_OFFSET UNITYSDK_OFFSET(0x8481670)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_OFFSET UNITYSDK_OFFSET(0x8482F30)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X64_OFFSET UNITYSDK_OFFSET(0x8483290)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X86_OFFSET UNITYSDK_OFFSET(0x8483220)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x8482EB0)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGOPENKEYEX_OFFSET UNITYSDK_OFFSET(0x8482CF0)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x8482DB0)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x8483300)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PlatformWin_TypeDefinitionIndex = 37662;

	class HEU_PlatformWin : public ::System::Object
	{
	public:
		static ::System::UIntPtr* StaticGet_HKEY_CURRENT_USER()
		{
			return (::System::UIntPtr*)Il2CppClass::FromTypeDefinitionIndex(HEU_PlatformWin_TypeDefinitionIndex)->GetStaticField(0x3810);
		}
		static ::System::UIntPtr* StaticGet_HKEY_LOCAL_MACHINE()
		{
			return (::System::UIntPtr*)Il2CppClass::FromTypeDefinitionIndex(HEU_PlatformWin_TypeDefinitionIndex)->GetStaticField(0x3818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN__CCTOR_OFFSET))();
		}

		static ::System::UInt32 RegOpenKeyEx(::System::UIntPtr hKey, ::System::String* lpSubKey, ::System::UInt32 ulOptions, ::System::Int32 samDesired, ::System::Int32& phkResult)
		{
			return ((::System::UInt32(*)(::System::UIntPtr, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGOPENKEYEX_OFFSET))(hKey, lpSubKey, ulOptions, samDesired, phkResult);
		}

		static ::System::Int32 RegQueryValueEx(::System::Int32 hKey, ::System::String* lpValueName, ::System::Int32 lpReserved, ::System::UInt32& lpType, ::System::Text::StringBuilder* lpData, ::System::UInt32& lpcbData)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::UInt32&, ::System::Text::StringBuilder*, ::System::UInt32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGQUERYVALUEEX_OFFSET))(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
		}

		static ::System::UInt32 RegCloseKey(::System::Int32 hKey)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGCLOSEKEY_OFFSET))(hKey);
		}

		static ::System::String* GetRegistryKeyValue(::System::UIntPtr rootKey, ::System::String* keyName, ::HoudiniEngineUnity::HEU_PlatformWin_RegSAM is32or64Key, ::System::String* inPropertyName)
		{
			return ((::System::String*(*)(::System::UIntPtr, ::System::String*, ::HoudiniEngineUnity::HEU_PlatformWin_RegSAM, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_OFFSET))(rootKey, keyName, is32or64Key, inPropertyName);
		}

		static ::System::String* GetRegistryKeyvalue_x86(::System::UIntPtr rootKey, ::System::String* keyName, ::System::String* inPropertyName)
		{
			return ((::System::String*(*)(::System::UIntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X86_OFFSET))(rootKey, keyName, inPropertyName);
		}

		static ::System::String* GetRegistryKeyvalue_x64(::System::UIntPtr rootKey, ::System::String* keyName, ::System::String* inPropertyName)
		{
			return ((::System::String*(*)(::System::UIntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X64_OFFSET))(rootKey, keyName, inPropertyName);
		}

		static ::System::String* GetApplicationPath(::System::String* appName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETAPPLICATIONPATH_OFFSET))(appName);
		}
	};
}
