#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_2E725623E21A6B05_OFFSET UNITYSDK_OFFSET(0x19E6D240)
#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_852ADB526A6D52D2_OFFSET UNITYSDK_OFFSET(0x19E6D2C0)
#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6D290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WriteCustomValueToStatistic_TypeDefinitionIndex = 22366;

	class WriteCustomValueToStatistic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CustomKey; // 0x18
		::RPG::GameCore::DynamicFloat* CustomValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E725623E21A6B05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WriteCustomValueToStatistic*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WriteCustomValueToStatistic*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_2E725623E21A6B05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_852ADB526A6D52D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WriteCustomValueToStatistic* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WriteCustomValueToStatistic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_852ADB526A6D52D2_OFFSET))(a1, a2);
		}
	};
}
