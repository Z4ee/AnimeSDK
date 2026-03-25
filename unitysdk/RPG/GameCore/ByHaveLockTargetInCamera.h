#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_13E8DEB4CBAB4382_OFFSET UNITYSDK_OFFSET(0x170269E0)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_24FD661479F1A8A8_OFFSET UNITYSDK_OFFSET(0x17026910)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17026990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveLockTargetInCamera_TypeDefinitionIndex = 19106;

	class ByHaveLockTargetInCamera : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_24FD661479F1A8A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveLockTargetInCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveLockTargetInCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_24FD661479F1A8A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13E8DEB4CBAB4382(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_METHOD_4_13E8DEB4CBAB4382_OFFSET))(a1, a2);
		}
	};
}
