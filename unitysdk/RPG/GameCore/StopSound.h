#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STOPSOUND_METHOD_3_1B372DFD1E0FD1C4_OFFSET UNITYSDK_OFFSET(0x1777E290)
#define RPG_GAMECORE_STOPSOUND_METHOD_3_4AD00847B2BDF5F5_OFFSET UNITYSDK_OFFSET(0x1777E320)
#define RPG_GAMECORE_STOPSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1777E2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSound_TypeDefinitionIndex = 18922;

	class StopSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::String* UniqueName; // 0x30
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Single StopTransitionDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B372DFD1E0FD1C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopSound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopSound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSOUND_METHOD_3_1B372DFD1E0FD1C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AD00847B2BDF5F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopSound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSOUND_METHOD_3_4AD00847B2BDF5F5_OFFSET))(a1, a2);
		}
	};
}
