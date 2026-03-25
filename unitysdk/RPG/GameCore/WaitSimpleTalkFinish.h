#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_61135BAD6E3BB0D5_OFFSET UNITYSDK_OFFSET(0x17904D40)
#define RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_D531DF1594445BC1_OFFSET UNITYSDK_OFFSET(0x17904C30)
#define RPG_GAMECORE_WAITSIMPLETALKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x17904D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSimpleTalkFinish_TypeDefinitionIndex = 19170;

	class WaitSimpleTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D531DF1594445BC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSimpleTalkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSimpleTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_D531DF1594445BC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61135BAD6E3BB0D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSIMPLETALKFINISH_METHOD_3_61135BAD6E3BB0D5_OFFSET))(a1, a2);
		}
	};
}
