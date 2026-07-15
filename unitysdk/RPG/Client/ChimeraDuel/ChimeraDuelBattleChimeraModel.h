#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A502A50)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraModel_TypeDefinitionIndex = 76286;

	class ChimeraDuelBattleChimeraModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::String* InstanceDesc; // 0x18
		::System::String* InstanceName; // 0x20
		::System::UInt32 InstanceID; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERAMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
