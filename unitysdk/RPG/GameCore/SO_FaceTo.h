#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
#include "unitysdk/RPG/GameCore/SO_FaceToPositionType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SO_FACETO_METHOD_4_1529856C796B88E9_OFFSET UNITYSDK_OFFSET(0x1B776730)
#define RPG_GAMECORE_SO_FACETO_METHOD_4_F317D25149634860_OFFSET UNITYSDK_OFFSET(0x1B7753E0)
#define RPG_GAMECORE_SO_FACETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7753D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_FaceTo_TypeDefinitionIndex = 19286;

	class SO_FaceTo : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::SO_FaceToPositionType PositionType; // 0x18
		::System::UInt32 AnchorGroupId; // 0x1C
		::System::UInt32 AnchorPointId; // 0x20
		::System::UInt32 EntityInstanceId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_FACETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1529856C796B88E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_FaceTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_FaceTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_FACETO_METHOD_4_1529856C796B88E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F317D25149634860(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_FaceTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_FACETO_METHOD_4_F317D25149634860_OFFSET))(a1, a2);
		}
	};
}
