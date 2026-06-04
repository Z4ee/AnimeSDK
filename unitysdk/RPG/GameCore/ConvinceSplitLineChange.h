#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCESPLITLINECHANGE_METHOD_3_17A6FCA5F11FFEFE_OFFSET UNITYSDK_OFFSET(0x1967E810)
#define RPG_GAMECORE_CONVINCESPLITLINECHANGE_METHOD_3_53F3197AEBBD416F_OFFSET UNITYSDK_OFFSET(0x1967E890)
#define RPG_GAMECORE_CONVINCESPLITLINECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1967E860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceSplitLineChange_TypeDefinitionIndex = 20613;

	class ConvinceSplitLineChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ChangeNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_17A6FCA5F11FFEFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceSplitLineChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceSplitLineChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINECHANGE_METHOD_3_17A6FCA5F11FFEFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53F3197AEBBD416F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceSplitLineChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceSplitLineChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINECHANGE_METHOD_3_53F3197AEBBD416F_OFFSET))(a1, a2);
		}
	};
}
