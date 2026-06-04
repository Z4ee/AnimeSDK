#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEVIDEOSEQUENCE_METHOD_3_20E789A6A4C57088_OFFSET UNITYSDK_OFFSET(0x19ACAC30)
#define RPG_GAMECORE_REMOVEVIDEOSEQUENCE_METHOD_3_C1892E798CA7AB7E_OFFSET UNITYSDK_OFFSET(0x19ACABB0)
#define RPG_GAMECORE_REMOVEVIDEOSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACAC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveVideoSequence_TypeDefinitionIndex = 20703;

	class RemoveVideoSequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BlockAlias; // 0x18
		::System::String* PrefabAlias; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIDEOSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1892E798CA7AB7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveVideoSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveVideoSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIDEOSEQUENCE_METHOD_3_C1892E798CA7AB7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20E789A6A4C57088(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveVideoSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEVIDEOSEQUENCE_METHOD_3_20E789A6A4C57088_OFFSET))(a1, a2);
		}
	};
}
