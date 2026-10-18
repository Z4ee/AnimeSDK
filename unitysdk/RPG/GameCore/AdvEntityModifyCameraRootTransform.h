#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_4D8ADC86D8B5D194_OFFSET UNITYSDK_OFFSET(0x1D370540)
#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_69EE57FC29F67955_OFFSET UNITYSDK_OFFSET(0x1D370500)
#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D370530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityModifyCameraRootTransform_TypeDefinitionIndex = 21041;

	class AdvEntityModifyCameraRootTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69EE57FC29F67955(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_69EE57FC29F67955_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D8ADC86D8B5D194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_METHOD_3_4D8ADC86D8B5D194_OFFSET))(a1, a2);
		}
	};
}
