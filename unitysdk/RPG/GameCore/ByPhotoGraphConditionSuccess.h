#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_0CF89C403BDFC8C9_OFFSET UNITYSDK_OFFSET(0x1875D060)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_103E160E6A34D415_OFFSET UNITYSDK_OFFSET(0x1875CF90)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1875D010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphConditionSuccess_TypeDefinitionIndex = 20478;

	class ByPhotoGraphConditionSuccess : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* PhotoGraphName; // 0x20
		::System::String* CustomEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_103E160E6A34D415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_103E160E6A34D415_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CF89C403BDFC8C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_0CF89C403BDFC8C9_OFFSET))(a1, a2);
		}
	};
}
