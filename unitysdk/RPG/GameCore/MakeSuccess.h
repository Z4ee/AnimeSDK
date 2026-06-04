#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAKESUCCESS_METHOD_3_3F5313BCF2B1A69B_OFFSET UNITYSDK_OFFSET(0x198B9160)
#define RPG_GAMECORE_MAKESUCCESS_METHOD_3_9C14FE78756A5232_OFFSET UNITYSDK_OFFSET(0x198B90E0)
#define RPG_GAMECORE_MAKESUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x198B9130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MakeSuccess_TypeDefinitionIndex = 21278;

	class MakeSuccess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TaskConfig* Task; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C14FE78756A5232(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MakeSuccess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MakeSuccess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_METHOD_3_9C14FE78756A5232_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F5313BCF2B1A69B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MakeSuccess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MakeSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_METHOD_3_3F5313BCF2B1A69B_OFFSET))(a1, a2);
		}
	};
}
