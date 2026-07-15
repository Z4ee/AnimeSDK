#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARKAWARDTARGETUSED_METHOD_3_908137597B01E721_OFFSET UNITYSDK_OFFSET(0x1BD23E30)
#define RPG_GAMECORE_MARKAWARDTARGETUSED_METHOD_3_EFB8BF158325FDA4_OFFSET UNITYSDK_OFFSET(0x1BD23D60)
#define RPG_GAMECORE_MARKAWARDTARGETUSED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD23E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarkAwardTargetUsed_TypeDefinitionIndex = 19382;

	class MarkAwardTargetUsed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKAWARDTARGETUSED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFB8BF158325FDA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarkAwardTargetUsed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarkAwardTargetUsed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKAWARDTARGETUSED_METHOD_3_EFB8BF158325FDA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_908137597B01E721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarkAwardTargetUsed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarkAwardTargetUsed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKAWARDTARGETUSED_METHOD_3_908137597B01E721_OFFSET))(a1, a2);
		}
	};
}
