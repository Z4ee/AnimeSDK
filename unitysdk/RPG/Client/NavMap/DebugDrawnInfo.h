#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A4633252561E9217;
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xD9393D0)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_METHOD_5_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xD939170)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD9392D0)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_RELEASE_OFFSET UNITYSDK_OFFSET(0xD939360)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xD938C60)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETINFOOFFSET_OFFSET UNITYSDK_OFFSET(0xD939310)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xD938FE0)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD938FD0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int DebugDrawnInfo_TypeDefinitionIndex = 74417;

	class DebugDrawnInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_A4633252561E9217* DODNHKCLIGO; // 0x18
		::System::String* GBFLBJMMPGJ; // 0x20
		::System::Int32 PBPAJJAMNEC; // 0x28
		::System::Boolean _IsShow; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void SetInfoOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETINFOOFFSET_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_RELEASE_OFFSET))(this);
		}

		::System::Boolean Method_5_ABFE6A357B89C69A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_METHOD_5_ABFE6A357B89C69A_OFFSET))(this);
		}

		::System::Void Method_5_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_METHOD_5_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void SetDebugInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETDEBUGINFO_OFFSET))(this, a1);
		}
	};
}
