#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByProperty.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_2E498F5C884DEBC4_OFFSET UNITYSDK_OFFSET(0x1D4F4FA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_6244E980ADA7C645_OFFSET UNITYSDK_OFFSET(0x1D4F51A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPropertyClientOnly_TypeDefinitionIndex = 23311;

	class SetDynamicValueByPropertyClientOnly : public ::RPG::GameCore::SetDynamicValueByProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6244E980ADA7C645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_6244E980ADA7C645_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2E498F5C884DEBC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPropertyClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPROPERTYCLIENTONLY_METHOD_5_2E498F5C884DEBC4_OFFSET))(a1, a2);
		}
	};
}
