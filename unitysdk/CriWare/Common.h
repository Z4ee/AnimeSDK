#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/Common_CpuUsage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x164A0690)
#define CRIWARE_COMMON_CRIWARED5A51171_OFFSET UNITYSDK_OFFSET(0x164A0600)
#define CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET UNITYSDK_OFFSET(0x164A09D0)
#define CRIWARE_COMMON_GETATOMCPUUSAGE_OFFSET UNITYSDK_OFFSET(0x164A0980)
#define CRIWARE_COMMON_GETATOMMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x164A0840)
#define CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x164A0580)
#define CRIWARE_COMMON_GETFSMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x164A07A0)
#define CRIWARE_COMMON_GETMANAMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x164A08E0)
#define CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x164A0680)
#define CRIWARE_COMMON_GETSCRIPTVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x164A0540)
#define CRIWARE_COMMON_GET_INSTALLCACHEPATH_OFFSET UNITYSDK_OFFSET(0x164A0430)
#define CRIWARE_COMMON_GET_INSTALLTARGETPATH_OFFSET UNITYSDK_OFFSET(0x164A0420)
#define CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET UNITYSDK_OFFSET(0x164A04A0)
#define CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x164A03F0)
#define CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x164A0460)
#define CRIWARE_COMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x164A0A50)

namespace CriWare
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 38840;

	class Common : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject** StaticGet__managerObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Common_TypeDefinitionIndex)->GetStaticField(0x55530);
		}
		// static const ::System::String* scriptVersionString; // 0x0
		// static const ::System::Boolean supportsCriFsInstaller; // 0x0
		// static const ::System::Boolean supportsCriFsWebInstaller; // 0x0
		// static const ::System::String* pluginName; // 0x0
		// static const ::System::Runtime::InteropServices::CallingConvention pluginCallingConvention; // 0x0
		// static const ::System::String* engineName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_COMMON__CTOR_OFFSET))(this);
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::System::String* get_installTargetPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_INSTALLTARGETPATH_OFFSET))();
		}

		static ::System::String* get_installCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_INSTALLCACHEPATH_OFFSET))();
		}

		static ::System::Boolean IsStreamingAssetsPath(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* get_managerObject()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET))();
		}

		static ::System::String* GetScriptVersionString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETSCRIPTVERSIONSTRING_OFFSET))();
		}

		static ::System::Int32 GetBinaryVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET))();
		}

		static ::System::Int32 GetRequiredBinaryVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET))();
		}

		static ::System::Boolean CheckBinaryVersionCompatibility()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET))();
		}

		static ::System::UInt32 GetFsMemoryUsage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETFSMEMORYUSAGE_OFFSET))();
		}

		static ::System::UInt32 GetAtomMemoryUsage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETATOMMEMORYUSAGE_OFFSET))();
		}

		static ::System::UInt32 GetManaMemoryUsage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETMANAMEMORYUSAGE_OFFSET))();
		}

		static ::CriWare::Common_CpuUsage GetAtomCpuUsage()
		{
			return ((::CriWare::Common_CpuUsage(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETATOMCPUUSAGE_OFFSET))();
		}

		static ::System::Int32 CRIWARED5A51171()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWARED5A51171_OFFSET))();
		}

		static ::System::Void criWareUnity_SetRenderingEventOffsetForMana(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET))(a1);
		}
	};
}
