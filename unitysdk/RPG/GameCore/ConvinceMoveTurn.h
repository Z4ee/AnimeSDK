#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEMOVETURN_METHOD_3_0DCA672C0727989C_OFFSET UNITYSDK_OFFSET(0x1D003AD0)
#define RPG_GAMECORE_CONVINCEMOVETURN_METHOD_3_9A972AE33E6794EF_OFFSET UNITYSDK_OFFSET(0x1D003B10)
#define RPG_GAMECORE_CONVINCEMOVETURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D003B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMoveTurn_TypeDefinitionIndex = 21590;

	class ConvinceMoveTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 TurnIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVETURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DCA672C0727989C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMoveTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMoveTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVETURN_METHOD_3_0DCA672C0727989C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A972AE33E6794EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMoveTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMoveTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVETURN_METHOD_3_9A972AE33E6794EF_OFFSET))(a1, a2);
		}
	};
}
