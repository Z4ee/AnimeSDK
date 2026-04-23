#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/Common_CpuUsage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x12BC1070)
#define CRIWARE_COMMON_CRIWAREC8077C29_OFFSET UNITYSDK_OFFSET(0x12BC0FE0)
#define CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET UNITYSDK_OFFSET(0x12BC13B0)
#define CRIWARE_COMMON_GETATOMCPUUSAGE_OFFSET UNITYSDK_OFFSET(0x12BC1360)
#define CRIWARE_COMMON_GETATOMMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x12BC1220)
#define CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x12BC0F60)
#define CRIWARE_COMMON_GETFSMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x12BC1180)
#define CRIWARE_COMMON_GETMANAMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x12BC12C0)
#define CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x12BC1060)
#define CRIWARE_COMMON_GETSCRIPTVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x12BC0F20)
#define CRIWARE_COMMON_GET_INSTALLCACHEPATH_OFFSET UNITYSDK_OFFSET(0x12BC0E10)
#define CRIWARE_COMMON_GET_INSTALLTARGETPATH_OFFSET UNITYSDK_OFFSET(0x12BC0E00)
#define CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET UNITYSDK_OFFSET(0x12BC0E80)
#define CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x12BC0DD0)
#define CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x12BC0E40)
#define CRIWARE_COMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC1430)

namespace CriWare
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 36878;

	class Common : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject** StaticGet__managerObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Common_TypeDefinitionIndex)->GetStaticField(0x8B70);
		}
		// static const ::System::String* scriptVersionString; // 0x0
		// static const ::System::Boolean supportsCriFsInstaller; // 0x0
		// static const ::System::Boolean supportsCriFsWebInstaller; // 0x0
		// static const ::System::String* pluginName; // 0x0
		// static const ::System::Runtime::InteropServices::CallingConvention pluginCallingConvention; // 0x0

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

		static ::System::Boolean IsStreamingAssetsPath(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET))(path);
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

		static ::System::Int32 CRIWAREC8077C29()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWAREC8077C29_OFFSET))();
		}

		static ::System::Void criWareUnity_SetRenderingEventOffsetForMana(::System::Int32 offset)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET))(offset);
		}
	};
}
