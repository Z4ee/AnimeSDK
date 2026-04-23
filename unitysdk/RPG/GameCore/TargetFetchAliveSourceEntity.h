#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_C668D31E242F9EB8_OFFSET UNITYSDK_OFFSET(0x18EE2E00)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_FF6AEC36767BC469_OFFSET UNITYSDK_OFFSET(0x18EE2D40)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE2DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAliveSourceEntity_TypeDefinitionIndex = 22958;

	class TargetFetchAliveSourceEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF6AEC36767BC469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAliveSourceEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_FF6AEC36767BC469_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C668D31E242F9EB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_METHOD_3_C668D31E242F9EB8_OFFSET))(a1, a2);
		}
	};
}
