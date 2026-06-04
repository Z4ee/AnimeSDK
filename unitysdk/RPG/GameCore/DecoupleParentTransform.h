#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_METHOD_3_7967D0837B4F86F0_OFFSET UNITYSDK_OFFSET(0x196977F0)
#define RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_METHOD_3_81CBBFDC309F3B4B_OFFSET UNITYSDK_OFFSET(0x19697870)
#define RPG_GAMECORE_DECOUPLEPARENTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19697840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecoupleParentTransform_TypeDefinitionIndex = 21603;

	class DecoupleParentTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TargetAttachPoint; // 0x20
		::System::Boolean IsEnable; // 0x28
		::System::Single TransitionTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECOUPLEPARENTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7967D0837B4F86F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecoupleParentTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecoupleParentTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_METHOD_3_7967D0837B4F86F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81CBBFDC309F3B4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecoupleParentTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecoupleParentTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_METHOD_3_81CBBFDC309F3B4B_OFFSET))(a1, a2);
		}
	};
}
