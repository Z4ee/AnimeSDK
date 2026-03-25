#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CPUGPUINFO_METHOD_2_73FE579718DA84B8_OFFSET UNITYSDK_OFFSET(0x1703FA00)
#define RPG_GAMECORE_CPUGPUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1703FBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CPUGPUInfo_TypeDefinitionIndex = 16767;

	class CPUGPUInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GraphicDeviceName; // 0x10
		::System::String* DeviceModel; // 0x18
		::System::Int32 GraphicsDeviceType; // 0x20
		::System::Int32 DisableType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CPUGPUINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73FE579718DA84B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CPUGPUInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CPUGPUInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CPUGPUINFO_METHOD_2_73FE579718DA84B8_OFFSET))(a1, a2);
		}
	};
}
