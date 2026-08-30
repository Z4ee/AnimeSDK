#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_METHOD_3_A537EBD75BB65C27_OFFSET UNITYSDK_OFFSET(0x1D876910)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_METHOD_3_E2F8B46CFC6F486C_OFFSET UNITYSDK_OFFSET(0x1D876950)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D876940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRemoveGlobalTimeScale_TypeDefinitionIndex = 21200;

	class FiveDimRemoveGlobalTimeScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TimeScaleKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A537EBD75BB65C27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_METHOD_3_A537EBD75BB65C27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2F8B46CFC6F486C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALE_METHOD_3_E2F8B46CFC6F486C_OFFSET))(a1, a2);
		}
	};
}
