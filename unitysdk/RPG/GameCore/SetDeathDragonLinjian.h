#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETDEATHDRAGONLINJIAN_METHOD_3_72AFD09EE3D819BD_OFFSET UNITYSDK_OFFSET(0x176B1C20)
#define RPG_GAMECORE_SETDEATHDRAGONLINJIAN_METHOD_3_912E10BFC86D4376_OFFSET UNITYSDK_OFFSET(0x176B1CA0)
#define RPG_GAMECORE_SETDEATHDRAGONLINJIAN__CTOR_OFFSET UNITYSDK_OFFSET(0x176B1C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDeathDragonLinjian_TypeDefinitionIndex = 21054;

	class SetDeathDragonLinjian : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::RPG::GameCore::DynamicFloat* ShowNum; // 0x20
		::RPG::GameCore::DynamicFloat* PreviewNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONLINJIAN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72AFD09EE3D819BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDeathDragonLinjian*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDeathDragonLinjian*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONLINJIAN_METHOD_3_72AFD09EE3D819BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_912E10BFC86D4376(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDeathDragonLinjian* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDeathDragonLinjian*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONLINJIAN_METHOD_3_912E10BFC86D4376_OFFSET))(a1, a2);
		}
	};
}
