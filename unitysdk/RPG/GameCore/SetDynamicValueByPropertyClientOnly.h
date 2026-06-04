#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByProperty.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_2E498F5C884DEBC4_OFFSET UNITYSDK_OFFSET(0x19C3E0C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_D9B3797665D60CA0_OFFSET UNITYSDK_OFFSET(0x19C42FA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3E070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPropertyClientOnly_TypeDefinitionIndex = 22293;

	class SetDynamicValueByPropertyClientOnly : public ::RPG::GameCore::SetDynamicValueByProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D9B3797665D60CA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_D9B3797665D60CA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2E498F5C884DEBC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_2E498F5C884DEBC4_OFFSET))(a1, a2);
		}
	};
}
