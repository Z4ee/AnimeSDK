#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAKESUCCESS_METHOD_3_3F5313BCF2B1A69B_OFFSET UNITYSDK_OFFSET(0x1D21E300)
#define RPG_GAMECORE_MAKESUCCESS_METHOD_3_B08F6817697E40C8_OFFSET UNITYSDK_OFFSET(0x1D21E2C0)
#define RPG_GAMECORE_MAKESUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21E2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MakeSuccess_TypeDefinitionIndex = 22256;

	class MakeSuccess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TaskConfig* Task; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B08F6817697E40C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MakeSuccess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MakeSuccess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_METHOD_3_B08F6817697E40C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F5313BCF2B1A69B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MakeSuccess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MakeSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_METHOD_3_3F5313BCF2B1A69B_OFFSET))(a1, a2);
		}
	};
}
