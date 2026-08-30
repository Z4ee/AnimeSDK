#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_METHOD_3_5CE4F1FC600B848F_OFFSET UNITYSDK_OFFSET(0x1DB47540)
#define RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_METHOD_3_6B6614D9C7D13AAF_OFFSET UNITYSDK_OFFSET(0x1DB476A0)
#define RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScalePropByCollectionProgress_TypeDefinitionIndex = 20177;

	class ScalePropByCollectionProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MinScale; // 0x20
		::RPG::GameCore::DynamicFloat* MaxScale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CE4F1FC600B848F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScalePropByCollectionProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScalePropByCollectionProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_METHOD_3_5CE4F1FC600B848F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B6614D9C7D13AAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScalePropByCollectionProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScalePropByCollectionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_METHOD_3_6B6614D9C7D13AAF_OFFSET))(a1, a2);
		}
	};
}
