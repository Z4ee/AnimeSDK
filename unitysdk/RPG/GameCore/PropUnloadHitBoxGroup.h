#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPUNLOADHITBOXGROUP_METHOD_3_6F804EACBCA5C1D9_OFFSET UNITYSDK_OFFSET(0x17572330)
#define RPG_GAMECORE_PROPUNLOADHITBOXGROUP_METHOD_3_F971C0CBAAFE6D97_OFFSET UNITYSDK_OFFSET(0x175721E0)
#define RPG_GAMECORE_PROPUNLOADHITBOXGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x175722A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropUnloadHitBoxGroup_TypeDefinitionIndex = 18685;

	class PropUnloadHitBoxGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOXGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F971C0CBAAFE6D97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropUnloadHitBoxGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropUnloadHitBoxGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOXGROUP_METHOD_3_F971C0CBAAFE6D97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F804EACBCA5C1D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropUnloadHitBoxGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropUnloadHitBoxGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOXGROUP_METHOD_3_6F804EACBCA5C1D9_OFFSET))(a1, a2);
		}
	};
}
