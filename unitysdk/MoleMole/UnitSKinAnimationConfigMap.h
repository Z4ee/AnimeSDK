#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinAnimationMapConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UNITSKINANIMATIONCONFIGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1089F7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UnitSKinAnimationConfigMap_TypeDefinitionIndex = 58184;

	class UnitSKinAnimationConfigMap : public ::System::Object
	{
	public:
		::System::Int32 unitId; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SkinAnimationMapConfig*>* skinConfigMap; // 0x18

		::System::Void _ctor(::System::Int32 unitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UNITSKINANIMATIONCONFIGMAP__CTOR_OFFSET))(this, unitID);
		}
	};
}
