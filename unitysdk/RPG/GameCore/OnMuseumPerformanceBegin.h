#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_8BB6B0C9984F1D7B_OFFSET UNITYSDK_OFFSET(0x18BC4630)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_B8598C5CE7EF5714_OFFSET UNITYSDK_OFFSET(0x18BC46B0)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC4680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnMuseumPerformanceBegin_TypeDefinitionIndex = 19891;

	class OnMuseumPerformanceBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformanceBegin; // 0x18
		::System::UInt32 AreaID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BB6B0C9984F1D7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnMuseumPerformanceBegin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnMuseumPerformanceBegin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_8BB6B0C9984F1D7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8598C5CE7EF5714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnMuseumPerformanceBegin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnMuseumPerformanceBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_B8598C5CE7EF5714_OFFSET))(a1, a2);
		}
	};
}
