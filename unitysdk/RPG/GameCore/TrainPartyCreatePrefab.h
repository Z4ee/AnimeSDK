#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_55B129CFF445A7D2_OFFSET UNITYSDK_OFFSET(0x1C15F9C0)
#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_CF18F1BDFC64377F_OFFSET UNITYSDK_OFFSET(0x1C15FA50)
#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15FA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCreatePrefab_TypeDefinitionIndex = 21553;

	class TrainPartyCreatePrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::RPG::MVector3 Position; // 0x20
		::RPG::MVector3 Rotation; // 0x2C
		::RPG::MVector3 Scale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55B129CFF445A7D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreatePrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreatePrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_55B129CFF445A7D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF18F1BDFC64377F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreatePrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreatePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_CF18F1BDFC64377F_OFFSET))(a1, a2);
		}
	};
}
