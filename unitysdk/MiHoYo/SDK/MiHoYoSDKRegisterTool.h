#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x1C2DA3A0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCREATEKEY_OFFSET UNITYSDK_OFFSET(0x1C2DA240)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGGETVALUE_OFFSET UNITYSDK_OFFSET(0x1C2D9D90)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERGETSTRING_OFFSET UNITYSDK_OFFSET(0x1C2D9890)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERSETSTRING_OFFSET UNITYSDK_OFFSET(0x1C2D9E70)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGOPENKEY_OFFSET UNITYSDK_OFFSET(0x1C2DA1B0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGSETVALUEEX_OFFSET UNITYSDK_OFFSET(0x1C2DA2D0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_STRINGTOUNIBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2D9C40)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2DA440)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DA420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRegisterTool_TypeDefinitionIndex = 37528;

	class MiHoYoSDKRegisterTool : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKRegisterTool** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKRegisterTool**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKRegisterTool_TypeDefinitionIndex)->GetStaticField(0x29520);
		}
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0
		// static const ::System::String* REGISTER_MODULE_NAME; // 0x0
		::System::Int32 REG_SZ; // 0x10
		::System::Int32 RRF_RT_REG_SZ; // 0x14
		::System::Int64 HKEY_CURRENT_USER; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CCTOR_OFFSET))();
		}

		::System::String* RegisterGetString(::System::String* strKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERGETSTRING_OFFSET))(this, strKey);
		}

		::System::Void RegisterSetString(::System::String* strKey, ::System::String* strValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERSETSTRING_OFFSET))(this, strKey, strValue);
		}

		::Il2CppArray<::System::Byte>* StringToUniBuffer(::System::String* strSrc)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_STRINGTOUNIBUFFER_OFFSET))(this, strSrc);
		}

		static ::System::Int32 RegGetValue(::System::Int64 hKey, ::Il2CppArray<::System::Byte>* lpSubkey, ::Il2CppArray<::System::Byte>* lpKey, ::System::Int32 nFlags, ::System::Int32& nType, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32& nSize)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGGETVALUE_OFFSET))(hKey, lpSubkey, lpKey, nFlags, nType, buffer, nSize);
		}

		static ::System::Int32 RegOpenKey(::System::Int64 hKey, ::Il2CppArray<::System::Byte>* lpSubkey, ::System::Int64& lSubKey)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGOPENKEY_OFFSET))(hKey, lpSubkey, lSubKey);
		}

		static ::System::Int32 RegCreateKey(::System::Int64 hKey, ::Il2CppArray<::System::Byte>* lpSubkey, ::System::Int64& lSubKey)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCREATEKEY_OFFSET))(hKey, lpSubkey, lSubKey);
		}

		static ::System::Int32 RegSetValueEx(::System::Int64 hKey, ::Il2CppArray<::System::Byte>* lpKey, ::System::Int32 nReserved, ::System::Int32 nType, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 nSize)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGSETVALUEEX_OFFSET))(hKey, lpKey, nReserved, nType, buffer, nSize);
		}

		static ::System::Int32 RegCloseKey(::System::Int64 lSubKey)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCLOSEKEY_OFFSET))(lSubKey);
		}
	};
}
