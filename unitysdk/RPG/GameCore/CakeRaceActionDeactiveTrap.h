#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_METHOD_3_153304F89DBFAD98_OFFSET UNITYSDK_OFFSET(0x1B2CB090)
#define RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_METHOD_3_2401394A6A134DFD_OFFSET UNITYSDK_OFFSET(0x1B2CB130)
#define RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CB120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionDeactiveTrap_TypeDefinitionIndex = 17618;

	class CakeRaceActionDeactiveTrap : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_153304F89DBFAD98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionDeactiveTrap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionDeactiveTrap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_METHOD_3_153304F89DBFAD98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2401394A6A134DFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionDeactiveTrap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionDeactiveTrap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_METHOD_3_2401394A6A134DFD_OFFSET))(a1, a2);
		}
	};
}
