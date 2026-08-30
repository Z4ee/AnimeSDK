#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROTATELASERPUZZLERING_METHOD_3_C5DFAD580894F6A9_OFFSET UNITYSDK_OFFSET(0x1D494AD0)
#define RPG_GAMECORE_ROTATELASERPUZZLERING_METHOD_3_E48A1B7F47877FB0_OFFSET UNITYSDK_OFFSET(0x1D494A90)
#define RPG_GAMECORE_ROTATELASERPUZZLERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D494AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotateLaserPuzzleRing_TypeDefinitionIndex = 21898;

	class RotateLaserPuzzleRing : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupPropID; // 0x1C
		::System::Boolean TargetIsOwner; // 0x20
		::System::String* RingName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATELASERPUZZLERING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E48A1B7F47877FB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotateLaserPuzzleRing*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotateLaserPuzzleRing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATELASERPUZZLERING_METHOD_3_E48A1B7F47877FB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5DFAD580894F6A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotateLaserPuzzleRing* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotateLaserPuzzleRing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATELASERPUZZLERING_METHOD_3_C5DFAD580894F6A9_OFFSET))(a1, a2);
		}
	};
}
