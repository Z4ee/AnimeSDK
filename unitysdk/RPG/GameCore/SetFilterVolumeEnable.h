#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETFILTERVOLUMEENABLE_METHOD_3_2E5DB2CAF24C3A43_OFFSET UNITYSDK_OFFSET(0x1DA84BC0)
#define RPG_GAMECORE_SETFILTERVOLUMEENABLE_METHOD_3_4C249B2E36FDD7D8_OFFSET UNITYSDK_OFFSET(0x1DA84B80)
#define RPG_GAMECORE_SETFILTERVOLUMEENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA84BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFilterVolumeEnable_TypeDefinitionIndex = 22254;

	class SetFilterVolumeEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TargetFilterVolume; // 0x18
		::System::Boolean IsEnable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFILTERVOLUMEENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C249B2E36FDD7D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFilterVolumeEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFilterVolumeEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFILTERVOLUMEENABLE_METHOD_3_4C249B2E36FDD7D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E5DB2CAF24C3A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFilterVolumeEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFilterVolumeEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFILTERVOLUMEENABLE_METHOD_3_2E5DB2CAF24C3A43_OFFSET))(a1, a2);
		}
	};
}
