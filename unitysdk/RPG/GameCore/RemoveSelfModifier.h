#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_50A1375733FE71BE_OFFSET UNITYSDK_OFFSET(0x1D3A0190)
#define RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_7AD50BC0AB045E3D_OFFSET UNITYSDK_OFFSET(0x1D3A01D0)
#define RPG_GAMECORE_REMOVESELFMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A01C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveSelfModifier_TypeDefinitionIndex = 23214;

	class RemoveSelfModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MuteVisualStateRecover; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50A1375733FE71BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveSelfModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveSelfModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_50A1375733FE71BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7AD50BC0AB045E3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveSelfModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveSelfModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_7AD50BC0AB045E3D_OFFSET))(a1, a2);
		}
	};
}
