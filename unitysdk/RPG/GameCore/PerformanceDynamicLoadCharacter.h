#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_247D277676C1B036_OFFSET UNITYSDK_OFFSET(0x1D41FA00)
#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_D04B452CD2B9FDF9_OFFSET UNITYSDK_OFFSET(0x1D41FA40)
#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41FA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDynamicLoadCharacter_TypeDefinitionIndex = 21610;

	class PerformanceDynamicLoadCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* DestroyUnqueNames; // 0x18
		::Il2CppArray<::System::String*>* CreateUnqueNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_247D277676C1B036(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_247D277676C1B036_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D04B452CD2B9FDF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_D04B452CD2B9FDF9_OFFSET))(a1, a2);
		}
	};
}
