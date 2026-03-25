#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEBPFEATURE_METHOD_3_64E9329FA7DA5E9B_OFFSET UNITYSDK_OFFSET(0x17596E80)
#define RPG_GAMECORE_REMOVEBPFEATURE_METHOD_3_F5363556402178F2_OFFSET UNITYSDK_OFFSET(0x17596F00)
#define RPG_GAMECORE_REMOVEBPFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x17596ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveBpFeature_TypeDefinitionIndex = 21444;

	class RemoveBpFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ModifierNameOfSpeicalBp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBPFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_64E9329FA7DA5E9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBpFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBpFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBPFEATURE_METHOD_3_64E9329FA7DA5E9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5363556402178F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBpFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBPFEATURE_METHOD_3_F5363556402178F2_OFFSET))(a1, a2);
		}
	};
}
