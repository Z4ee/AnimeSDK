#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PlatformWin_RegSAM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETAPPLICATIONPATH_OFFSET UNITYSDK_OFFSET(0x17F47A30)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_OFFSET UNITYSDK_OFFSET(0x17F47660)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X64_OFFSET UNITYSDK_OFFSET(0x17F479C0)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X86_OFFSET UNITYSDK_OFFSET(0x17F47950)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x17F475E0)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGOPENKEYEX_OFFSET UNITYSDK_OFFSET(0x17F47420)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x17F474E0)
#define HOUDINIENGINEUNITY_HEU_PLATFORMWIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F47DD0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PlatformWin_TypeDefinitionIndex = 37473;

	class HEU_PlatformWin : public ::System::Object
	{
	public:
		static ::System::UIntPtr* StaticGet_HKEY_CURRENT_USER()
		{
			return (::System::UIntPtr*)Il2CppClass::FromTypeDefinitionIndex(HEU_PlatformWin_TypeDefinitionIndex)->GetStaticField(0x4F60);
		}
		static ::System::UIntPtr* StaticGet_HKEY_LOCAL_MACHINE()
		{
			return (::System::UIntPtr*)Il2CppClass::FromTypeDefinitionIndex(HEU_PlatformWin_TypeDefinitionIndex)->GetStaticField(0x4F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN__CCTOR_OFFSET))();
		}

		static ::System::UInt32 RegOpenKeyEx(::System::UIntPtr a1, ::System::String* a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::UInt32(*)(::System::UIntPtr, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGOPENKEYEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 RegQueryValueEx(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt32& a4, ::System::Text::StringBuilder* a5, ::System::UInt32& a6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::UInt32&, ::System::Text::StringBuilder*, ::System::UInt32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGQUERYVALUEEX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 RegCloseKey(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_REGCLOSEKEY_OFFSET))(a1);
		}

		static ::System::String* GetRegistryKeyValue(::System::UIntPtr a1, ::System::String* a2, ::HoudiniEngineUnity::HEU_PlatformWin_RegSAM a3, ::System::String* a4)
		{
			return ((::System::String*(*)(::System::UIntPtr, ::System::String*, ::HoudiniEngineUnity::HEU_PlatformWin_RegSAM, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetRegistryKeyvalue_x86(::System::UIntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::UIntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X86_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetRegistryKeyvalue_x64(::System::UIntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::UIntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETREGISTRYKEYVALUE_X64_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetApplicationPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORMWIN_GETAPPLICATIONPATH_OFFSET))(a1);
		}
	};
}
