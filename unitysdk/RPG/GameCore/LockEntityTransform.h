#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKENTITYTRANSFORM_METHOD_3_B2512780E17E32AD_OFFSET UNITYSDK_OFFSET(0x198ABDD0)
#define RPG_GAMECORE_LOCKENTITYTRANSFORM_METHOD_3_C793415FD13BE741_OFFSET UNITYSDK_OFFSET(0x198ABD00)
#define RPG_GAMECORE_LOCKENTITYTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x198ABD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockEntityTransform_TypeDefinitionIndex = 22453;

	class LockEntityTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean LockPosition; // 0x20
		::System::Boolean LockRotation; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKENTITYTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C793415FD13BE741(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockEntityTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockEntityTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKENTITYTRANSFORM_METHOD_3_C793415FD13BE741_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2512780E17E32AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockEntityTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockEntityTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKENTITYTRANSFORM_METHOD_3_B2512780E17E32AD_OFFSET))(a1, a2);
		}
	};
}
