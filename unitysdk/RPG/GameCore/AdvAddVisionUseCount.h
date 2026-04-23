#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_0EE09F7FBA8974F9_OFFSET UNITYSDK_OFFSET(0x18646190)
#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_9A216B599667E998_OFFSET UNITYSDK_OFFSET(0x18646100)
#define RPG_GAMECORE_ADVADDVISIONUSECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18646160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddVisionUseCount_TypeDefinitionIndex = 20075;

	class AdvAddVisionUseCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpecialVisionType VisionType; // 0x18
		::System::Int32 Count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A216B599667E998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddVisionUseCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddVisionUseCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_9A216B599667E998_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0EE09F7FBA8974F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddVisionUseCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddVisionUseCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_0EE09F7FBA8974F9_OFFSET))(a1, a2);
		}
	};
}
