#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_7DE0EF93A7A82564_OFFSET UNITYSDK_OFFSET(0x1CDC8640)
#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_C2B2C0D03881FAAB_OFFSET UNITYSDK_OFFSET(0x1CDC8680)
#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC8670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityModifyCameraRootTransform_TypeDefinitionIndex = 20803;

	class AdvEntityModifyCameraRootTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DE0EF93A7A82564(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_7DE0EF93A7A82564_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2B2C0D03881FAAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_C2B2C0D03881FAAB_OFFSET))(a1, a2);
		}
	};
}
