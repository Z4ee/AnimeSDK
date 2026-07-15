#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_7994A30F7F8DFC8C_OFFSET UNITYSDK_OFFSET(0x1C6050E0)
#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_A1014443D5BDA5E7_OFFSET UNITYSDK_OFFSET(0x1C605120)
#define RPG_GAMECORE_SETPHAINONACTIONCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C605110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPhainonActionCount_TypeDefinitionIndex = 22329;

	class SetPhainonActionCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7994A30F7F8DFC8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonActionCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonActionCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_7994A30F7F8DFC8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1014443D5BDA5E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonActionCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonActionCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_A1014443D5BDA5E7_OFFSET))(a1, a2);
		}
	};
}
