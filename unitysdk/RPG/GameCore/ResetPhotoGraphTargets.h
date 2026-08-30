#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_5A958CDEB54967CA_OFFSET UNITYSDK_OFFSET(0x1D3A4FE0)
#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_D2465DB21DC23B71_OFFSET UNITYSDK_OFFSET(0x1D3A5020)
#define RPG_GAMECORE_RESETPHOTOGRAPHTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetPhotoGraphTargets_TypeDefinitionIndex = 21395;

	class ResetPhotoGraphTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* BindName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A958CDEB54967CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetPhotoGraphTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetPhotoGraphTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_5A958CDEB54967CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2465DB21DC23B71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetPhotoGraphTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetPhotoGraphTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETPHOTOGRAPHTARGETS_METHOD_3_D2465DB21DC23B71_OFFSET))(a1, a2);
		}
	};
}
