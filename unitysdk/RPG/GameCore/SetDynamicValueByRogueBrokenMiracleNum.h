#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_METHOD_3_14972FE75897DD88_OFFSET UNITYSDK_OFFSET(0x176C3300)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_METHOD_3_2674FAEDDDD2066F_OFFSET UNITYSDK_OFFSET(0x176C3290)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x176C32D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBrokenMiracleNum_TypeDefinitionIndex = 19939;

	class SetDynamicValueByRogueBrokenMiracleNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2674FAEDDDD2066F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_METHOD_3_2674FAEDDDD2066F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14972FE75897DD88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_METHOD_3_14972FE75897DD88_OFFSET))(a1, a2);
		}
	};
}
