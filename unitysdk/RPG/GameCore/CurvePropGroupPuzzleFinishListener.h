#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_METHOD_3_2A2C8B9FBAAEF828_OFFSET UNITYSDK_OFFSET(0x19686D50)
#define RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_METHOD_3_F7C41823419043C1_OFFSET UNITYSDK_OFFSET(0x19686CD0)
#define RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19686D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurvePropGroupPuzzleFinishListener_TypeDefinitionIndex = 21031;

	class CurvePropGroupPuzzleFinishListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7C41823419043C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_METHOD_3_F7C41823419043C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A2C8B9FBAAEF828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_METHOD_3_2A2C8B9FBAAEF828_OFFSET))(a1, a2);
		}
	};
}
