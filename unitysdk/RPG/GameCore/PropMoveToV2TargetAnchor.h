#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropMoveToV2TargetBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_METHOD_3_358ECDB6E391D24B_OFFSET UNITYSDK_OFFSET(0x1D17EBA0)
#define RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_METHOD_3_F01174A16FE0624E_OFFSET UNITYSDK_OFFSET(0x1D17EC50)
#define RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17EC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveToV2TargetAnchor_TypeDefinitionIndex = 17317;

	class PropMoveToV2TargetAnchor : public ::RPG::GameCore::PropMoveToV2TargetBase
	{
	public:
		::RPG::GameCore::DynamicString* DynamicAnchor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_358ECDB6E391D24B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveToV2TargetAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveToV2TargetAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_METHOD_3_358ECDB6E391D24B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F01174A16FE0624E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveToV2TargetAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveToV2TargetAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_METHOD_3_F01174A16FE0624E_OFFSET))(a1, a2);
		}
	};
}
