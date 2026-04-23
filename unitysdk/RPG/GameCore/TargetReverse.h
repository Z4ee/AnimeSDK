#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_03858B82214BD0A1_OFFSET UNITYSDK_OFFSET(0x18EEA4D0)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_CEE87F8603B1E7E4_OFFSET UNITYSDK_OFFSET(0x18EEA410)
#define RPG_GAMECORE_TARGETREVERSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEA4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetReverse_TypeDefinitionIndex = 23023;

	class TargetReverse : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEE87F8603B1E7E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetReverse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_CEE87F8603B1E7E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_03858B82214BD0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_03858B82214BD0A1_OFFSET))(a1, a2);
		}
	};
}
