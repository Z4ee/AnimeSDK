#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWBARRIERENTITYPARAMCOMPARE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15829880)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWBARRIERENTITYPARAMCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x15829A10)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowBarrierEntityParamCompare_TypeDefinitionIndex = 53239;

	class ConfigHollowBarrierEntityParamCompare : public ::System::Object
	{
	public:
		::System::String* KeyParam; // 0x10
		::System::Int32 ValParam; // 0x18
		::MoleMole::Config::ValueCompareType CompareType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWBARRIERENTITYPARAMCOMPARE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWBARRIERENTITYPARAMCOMPARE_EVALUATE_OFFSET))(this, entity);
		}
	};
}
