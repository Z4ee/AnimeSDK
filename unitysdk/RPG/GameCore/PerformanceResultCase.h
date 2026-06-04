#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PERFORMANCERESULTCASE_METHOD_2_1A327C4B68710952_OFFSET UNITYSDK_OFFSET(0x199FA3D0)
#define RPG_GAMECORE_PERFORMANCERESULTCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x199FA580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceResultCase_TypeDefinitionIndex = 20073;

	class PerformanceResultCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Case; // 0x10
		::System::Boolean ForceCloseBlack; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERESULTCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1A327C4B68710952(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceResultCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceResultCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERESULTCASE_METHOD_2_1A327C4B68710952_OFFSET))(a1, a2);
		}
	};
}
