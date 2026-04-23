#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVSETPETDYNAMICVALUE_METHOD_3_3ABE7252D9116C99_OFFSET UNITYSDK_OFFSET(0x186646F0)
#define RPG_GAMECORE_ADVSETPETDYNAMICVALUE_METHOD_3_5D9597096717F5E0_OFFSET UNITYSDK_OFFSET(0x18664770)
#define RPG_GAMECORE_ADVSETPETDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18664740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetPetDynamicValue_TypeDefinitionIndex = 19929;

	class AdvSetPetDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SummonUnitIDKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETPETDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3ABE7252D9116C99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetPetDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetPetDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETPETDYNAMICVALUE_METHOD_3_3ABE7252D9116C99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D9597096717F5E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetPetDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetPetDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETPETDYNAMICVALUE_METHOD_3_5D9597096717F5E0_OFFSET))(a1, a2);
		}
	};
}
