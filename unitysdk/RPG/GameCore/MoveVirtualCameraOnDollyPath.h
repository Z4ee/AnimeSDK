#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_METHOD_3_46C8677378DA12F1_OFFSET UNITYSDK_OFFSET(0x1B1D1250)
#define RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_METHOD_3_915D9B70A7E2DF39_OFFSET UNITYSDK_OFFSET(0x1B1D1200)
#define RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D1240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveVirtualCameraOnDollyPath_TypeDefinitionIndex = 21103;

	class MoveVirtualCameraOnDollyPath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::Single StartPoint; // 0x28
		::System::Single EndPoint; // 0x2C
		::System::String* CurveName; // 0x30
		::System::Single Duration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_915D9B70A7E2DF39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_METHOD_3_915D9B70A7E2DF39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46C8677378DA12F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveVirtualCameraOnDollyPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_METHOD_3_46C8677378DA12F1_OFFSET))(a1, a2);
		}
	};
}
