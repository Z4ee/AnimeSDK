#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_7CF91E1ADBF31718_OFFSET UNITYSDK_OFFSET(0x19ACF850)
#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_D2465DB21DC23B71_OFFSET UNITYSDK_OFFSET(0x19ACF8D0)
#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACF8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetPhotoGraphTargets_TypeDefinitionIndex = 20424;

	class ResetPhotoGraphTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* BindName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7CF91E1ADBF31718(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetPhotoGraphTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetPhotoGraphTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_7CF91E1ADBF31718_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2465DB21DC23B71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetPhotoGraphTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetPhotoGraphTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_D2465DB21DC23B71_OFFSET))(a1, a2);
		}
	};
}
