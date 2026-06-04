#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_METHOD_5_AE9168916630E401_OFFSET UNITYSDK_OFFSET(0x19C48430)
#define RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_METHOD_5_DF59490BAC43F26E_OFFSET UNITYSDK_OFFSET(0x19C48310)
#define RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C483B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueClientOnly_TypeDefinitionIndex = 22518;

	class SetDynamicValueClientOnly : public ::RPG::GameCore::SetDynamicValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DF59490BAC43F26E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_METHOD_5_DF59490BAC43F26E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AE9168916630E401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECLIENTONLY_METHOD_5_AE9168916630E401_OFFSET))(a1, a2);
		}
	};
}
