#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDBUFFPERFORM_METHOD_3_BB3A687FA067993D_OFFSET UNITYSDK_OFFSET(0x1BE042A0)
#define RPG_GAMECORE_ADDBUFFPERFORM_METHOD_3_C40441C0B0DEFCCA_OFFSET UNITYSDK_OFFSET(0x1BE041A0)
#define RPG_GAMECORE_ADDBUFFPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE04230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddBuffPerform_TypeDefinitionIndex = 22708;

	class AddBuffPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::RPG::GameCore::DynamicFloat* AddPerformTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBUFFPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C40441C0B0DEFCCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddBuffPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddBuffPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBUFFPERFORM_METHOD_3_C40441C0B0DEFCCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB3A687FA067993D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddBuffPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddBuffPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBUFFPERFORM_METHOD_3_BB3A687FA067993D_OFFSET))(a1, a2);
		}
	};
}
