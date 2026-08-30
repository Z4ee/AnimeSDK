#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO_METHOD_2_CFEDE5BE7CA1D7A8_OFFSET UNITYSDK_OFFSET(0x1D5CFBC0)
#define RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CFDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindDestructibleBridgeStaticBindInfo_TypeDefinitionIndex = 16420;

	class TimeRewindDestructibleBridgeStaticBindInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ChildAnimName; // 0x10
		::RPG::MVector3 FirstChildOffset; // 0x18
		::RPG::MVector3 FirstChildRotation; // 0x24
		::RPG::MVector3 SecondChildOffset; // 0x30
		::RPG::MVector3 SecondChildRotation; // 0x3C
		::System::Single ChildOverrideLockRaycastOffsetHeight; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CFEDE5BE7CA1D7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindDestructibleBridgeStaticBindInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindDestructibleBridgeStaticBindInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDDESTRUCTIBLEBRIDGESTATICBINDINFO_METHOD_2_CFEDE5BE7CA1D7A8_OFFSET))(a1, a2);
		}
	};
}
