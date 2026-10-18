#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RandomSelectorCase; }

#define RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_9EBF21532F55130A_OFFSET UNITYSDK_OFFSET(0x1D96CA40)
#define RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_EF6F3A9F134330BF_OFFSET UNITYSDK_OFFSET(0x1D96CA80)
#define RPG_GAMECORE_RANDOMSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D96CA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelector_TypeDefinitionIndex = 23777;

	class RandomSelector : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RandomSelectorCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Default; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9EBF21532F55130A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_9EBF21532F55130A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF6F3A9F134330BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_EF6F3A9F134330BF_OFFSET))(a1, a2);
		}
	};
}
