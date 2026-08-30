#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_METHOD_3_988AF07AE0EB4E2B_OFFSET UNITYSDK_OFFSET(0x1D6A4B70)
#define RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_METHOD_3_C11ABAD43B559F2F_OFFSET UNITYSDK_OFFSET(0x1D6A4BC0)
#define RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddServerGameplayCounter_TypeDefinitionIndex = 20318;

	class AddServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_988AF07AE0EB4E2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddServerGameplayCounter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddServerGameplayCounter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_METHOD_3_988AF07AE0EB4E2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C11ABAD43B559F2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_METHOD_3_C11ABAD43B559F2F_OFFSET))(a1, a2);
		}
	};
}
