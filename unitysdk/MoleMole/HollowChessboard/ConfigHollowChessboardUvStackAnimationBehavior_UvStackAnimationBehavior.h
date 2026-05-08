#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_23878CD8648379FB.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSectionHelperType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_2_6D8377DB91A00B0F;

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_BUILD_OFFSET UNITYSDK_OFFSET(0x125CF020)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_TRYADDBLACKBOARDITEM_OFFSET UNITYSDK_OFFSET(0x125CF0B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x125CF010)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardUvStackAnimationBehavior_UvStackAnimationBehavior_TypeDefinitionIndex = 42942;

	class ConfigHollowChessboardUvStackAnimationBehavior_UvStackAnimationBehavior : public ::System::Object
	{
	public:
		::System::Boolean IsPre; // 0x10

		::System::Void _ctor(::System::Boolean pre)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR__CTOR_OFFSET))(this, pre);
		}

		::System::Boolean Build(::Class_2_6D8377DB91A00B0F* data, ::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_6D8377DB91A00B0F*, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_BUILD_OFFSET))(this, data, context);
		}

		::System::Boolean TryAddBlackBoardItem(::Class_2_6D8377DB91A00B0F* data, ::Class_1_1FCBF6F207BFD09E* context, ::Enum_3_23878CD8648379FB key, ::System::UInt16 lower16Bits, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType sectionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_6D8377DB91A00B0F*, ::Class_1_1FCBF6F207BFD09E*, ::Enum_3_23878CD8648379FB, ::System::UInt16, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_TRYADDBLACKBOARDITEM_OFFSET))(this, data, context, key, lower16Bits, sectionType);
		}
	};
}
