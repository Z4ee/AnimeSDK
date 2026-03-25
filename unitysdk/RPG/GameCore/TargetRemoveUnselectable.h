#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_37993F1E318B082C_OFFSET UNITYSDK_OFFSET(0x177C4AE0)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_61F362D73B8DE975_OFFSET UNITYSDK_OFFSET(0x177C4A20)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x177C4AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetRemoveUnselectable_TypeDefinitionIndex = 22181;

	class TargetRemoveUnselectable : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61F362D73B8DE975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetRemoveUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetRemoveUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_61F362D73B8DE975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37993F1E318B082C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_METHOD_3_37993F1E318B082C_OFFSET))(a1, a2);
		}
	};
}
