#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETFINISH_METHOD_3_6771130C752EB8FA_OFFSET UNITYSDK_OFFSET(0x198DAA50)
#define RPG_GAMECORE_MARBLESETFINISH_METHOD_3_E51B65F6FDEE6E91_OFFSET UNITYSDK_OFFSET(0x198DA910)
#define RPG_GAMECORE_MARBLESETFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x198DAA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetFinish_TypeDefinitionIndex = 15994;

	class MarbleSetFinish : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E51B65F6FDEE6E91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_METHOD_3_E51B65F6FDEE6E91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6771130C752EB8FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_METHOD_3_6771130C752EB8FA_OFFSET))(a1, a2);
		}
	};
}
