#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_OPENCOCOON_METHOD_3_3BF9E5F25BCBCFA7_OFFSET UNITYSDK_OFFSET(0x18BC4C40)
#define RPG_GAMECORE_OPENCOCOON_METHOD_3_95896F15BD909E25_OFFSET UNITYSDK_OFFSET(0x18BC4DB0)
#define RPG_GAMECORE_OPENCOCOON__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC4D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenCocoon_TypeDefinitionIndex = 20948;

	class OpenCocoon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28
		::RPG::GameCore::DynamicFloat* BattleAreaConfigID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3BF9E5F25BCBCFA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenCocoon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenCocoon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_METHOD_3_3BF9E5F25BCBCFA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95896F15BD909E25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenCocoon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_METHOD_3_95896F15BD909E25_OFFSET))(a1, a2);
		}
	};
}
