#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSPluginImport___O_TypeDefinitionIndex = 44585;

	class MiHoYoSDKEOSPluginImport___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>** StaticGet__4___EOS_Unity_GetDeploymentIdGfx()
		{
			return (::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSPluginImport___O_TypeDefinitionIndex)->GetStaticField(0xFDD0);
		}
		static ::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>** StaticGet__0___EOS_Unity_GetProductIdGfx()
		{
			return (::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSPluginImport___O_TypeDefinitionIndex)->GetStaticField(0xFDD8);
		}
		static ::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>** StaticGet__3___EOS_Unity_GetSandboxIdGfx()
		{
			return (::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSPluginImport___O_TypeDefinitionIndex)->GetStaticField(0xFDE0);
		}
		static ::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>** StaticGet__1___EOS_Unity_GetClientIdGfx()
		{
			return (::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSPluginImport___O_TypeDefinitionIndex)->GetStaticField(0xFDE8);
		}
		static ::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>** StaticGet__2___EOS_Unity_GetClientSecretGfx()
		{
			return (::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSPluginImport___O_TypeDefinitionIndex)->GetStaticField(0xFDF0);
		}
	};
}
