#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B3C1E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3C220)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C___CCTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x12B3C230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveFireEffect___c_TypeDefinitionIndex = 64409;

	class ConfigHollowChessboard_BigTVMoveFireEffect___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_BigTVMoveFireEffect___c_TypeDefinitionIndex)->GetStaticField(0x39BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* __cctor_b__12_0()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT___C___CCTOR_B__12_0_OFFSET))(this);
		}
	};
}
