#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BLOCKSUBMITEVENTS_METHOD_3_5DFE9CC7FDA56DA3_OFFSET UNITYSDK_OFFSET(0x1870D5B0)
#define RPG_GAMECORE_BLOCKSUBMITEVENTS_METHOD_3_F81D693FEF74729A_OFFSET UNITYSDK_OFFSET(0x1870D630)
#define RPG_GAMECORE_BLOCKSUBMITEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1870D600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockSubmitEvents_TypeDefinitionIndex = 23290;

	class BlockSubmitEvents : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSUBMITEVENTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5DFE9CC7FDA56DA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockSubmitEvents*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockSubmitEvents*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSUBMITEVENTS_METHOD_3_5DFE9CC7FDA56DA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F81D693FEF74729A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockSubmitEvents* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockSubmitEvents*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSUBMITEVENTS_METHOD_3_F81D693FEF74729A_OFFSET))(a1, a2);
		}
	};
}
