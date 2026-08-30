#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORD_METHOD_3_32BBF2EA7F1B7B1D_OFFSET UNITYSDK_OFFSET(0x1E822190)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORD_METHOD_3_BE0FAD54E1714510_OFFSET UNITYSDK_OFFSET(0x1E8221D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8221C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueMiracleRecord_TypeDefinitionIndex = 21532;

	class SetDynamicValueByRogueMiracleRecord : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32BBF2EA7F1B7B1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecord*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecord*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORD_METHOD_3_32BBF2EA7F1B7B1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE0FAD54E1714510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecord* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORD_METHOD_3_BE0FAD54E1714510_OFFSET))(a1, a2);
		}
	};
}
