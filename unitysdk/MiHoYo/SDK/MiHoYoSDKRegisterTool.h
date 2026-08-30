#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x194A15B0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCREATEKEY_OFFSET UNITYSDK_OFFSET(0x194A1440)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGGETVALUE_OFFSET UNITYSDK_OFFSET(0x194A0F80)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERGETSTRING_OFFSET UNITYSDK_OFFSET(0x194A0B80)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERSETSTRING_OFFSET UNITYSDK_OFFSET(0x194A1070)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGOPENKEY_OFFSET UNITYSDK_OFFSET(0x194A13A0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGSETVALUEEX_OFFSET UNITYSDK_OFFSET(0x194A14E0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_STRINGTOUNIBUFFER_OFFSET UNITYSDK_OFFSET(0x194A0EB0)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A1650)
#define MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x194A1630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKRegisterTool_TypeDefinitionIndex = 46940;

	class MiHoYoSDKRegisterTool : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKRegisterTool** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKRegisterTool**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKRegisterTool_TypeDefinitionIndex)->GetStaticField(0x46EF0);
		}
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0
		// static const ::System::String* REGISTER_MODULE_NAME; // 0x0
		::System::Int32 RRF_RT_REG_SZ; // 0x10
		::System::Int32 REG_SZ; // 0x14
		::System::Int64 HKEY_CURRENT_USER; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL__CCTOR_OFFSET))();
		}

		::System::String* RegisterGetString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERGETSTRING_OFFSET))(this, a1);
		}

		::System::Void RegisterSetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGISTERSETSTRING_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* StringToUniBuffer(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_STRINGTOUNIBUFFER_OFFSET))(this, a1);
		}

		static ::System::Int32 RegGetValue(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32& a5, ::Il2CppArray<::System::Byte>* a6, ::System::Int32& a7)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGGETVALUE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 RegOpenKey(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int64& a3)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGOPENKEY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 RegCreateKey(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int64& a3)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCREATEKEY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 RegSetValueEx(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::Byte>* a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGSETVALUEEX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 RegCloseKey(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREGISTERTOOL_REGCLOSEKEY_OFFSET))(a1);
		}
	};
}
