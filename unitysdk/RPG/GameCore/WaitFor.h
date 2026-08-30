#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_WAITFOR_METHOD_3_2AD2A82E6EED7C82_OFFSET UNITYSDK_OFFSET(0x1D6A3820)
#define RPG_GAMECORE_WAITFOR_METHOD_3_E5AEE284FF312179_OFFSET UNITYSDK_OFFSET(0x1D6A37E0)
#define RPG_GAMECORE_WAITFOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A3810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFor_TypeDefinitionIndex = 23518;

	class WaitFor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5AEE284FF312179(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFOR_METHOD_3_E5AEE284FF312179_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2AD2A82E6EED7C82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFOR_METHOD_3_2AD2A82E6EED7C82_OFFSET))(a1, a2);
		}
	};
}
