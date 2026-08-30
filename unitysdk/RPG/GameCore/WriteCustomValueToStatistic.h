#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_38581A4D5E864A9B_OFFSET UNITYSDK_OFFSET(0x1EFADC50)
#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_852ADB526A6D52D2_OFFSET UNITYSDK_OFFSET(0x1EFADC90)
#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFADC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WriteCustomValueToStatistic_TypeDefinitionIndex = 23386;

	class WriteCustomValueToStatistic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CustomKey; // 0x18
		::RPG::GameCore::DynamicFloat* CustomValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38581A4D5E864A9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WriteCustomValueToStatistic*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WriteCustomValueToStatistic*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_38581A4D5E864A9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_852ADB526A6D52D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WriteCustomValueToStatistic* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WriteCustomValueToStatistic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_METHOD_3_852ADB526A6D52D2_OFFSET))(a1, a2);
		}
	};
}
