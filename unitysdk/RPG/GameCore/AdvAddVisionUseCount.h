#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_8621A750F817086E_OFFSET UNITYSDK_OFFSET(0x19415170)
#define RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_C3E87BD3F13F8AC1_OFFSET UNITYSDK_OFFSET(0x194150E0)
#define RPG_GAMECORE_ADVADDVISIONUSECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19415140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddVisionUseCount_TypeDefinitionIndex = 19934;

	class AdvAddVisionUseCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpecialVisionType VisionType; // 0x18
		::System::Int32 Count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3E87BD3F13F8AC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddVisionUseCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddVisionUseCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_C3E87BD3F13F8AC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8621A750F817086E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddVisionUseCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddVisionUseCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDVISIONUSECOUNT_METHOD_3_8621A750F817086E_OFFSET))(a1, a2);
		}
	};
}
