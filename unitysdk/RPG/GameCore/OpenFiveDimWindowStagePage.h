#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_METHOD_3_9F18E02315F9EF22_OFFSET UNITYSDK_OFFSET(0x1747BF00)
#define RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_METHOD_3_E576895061AB5487_OFFSET UNITYSDK_OFFSET(0x1747BE80)
#define RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1747BED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFiveDimWindowStagePage_TypeDefinitionIndex = 19586;

	class OpenFiveDimWindowStagePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::DynamicString* EntityID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E576895061AB5487(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFiveDimWindowStagePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFiveDimWindowStagePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_METHOD_3_E576895061AB5487_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F18E02315F9EF22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFiveDimWindowStagePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFiveDimWindowStagePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFIVEDIMWINDOWSTAGEPAGE_METHOD_3_9F18E02315F9EF22_OFFSET))(a1, a2);
		}
	};
}
