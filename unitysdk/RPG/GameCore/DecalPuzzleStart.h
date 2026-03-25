#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DECALPUZZLESTART_METHOD_3_0A511B9FFF6626A7_OFFSET UNITYSDK_OFFSET(0x17150090)
#define RPG_GAMECORE_DECALPUZZLESTART_METHOD_3_BF52ABBFF77B30F2_OFFSET UNITYSDK_OFFSET(0x1714FFF0)
#define RPG_GAMECORE_DECALPUZZLESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x17150050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalPuzzleStart_TypeDefinitionIndex = 19506;

	class DecalPuzzleStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* DecalConfigIDs; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::RPG::GameCore::TargetEvaluator* IdentifyLookAt; // 0x30
		::System::Single Scale; // 0x38
		::System::Single DecalWidth; // 0x3C
		::System::Single DecalHeight; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF52ABBFF77B30F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalPuzzleStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalPuzzleStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLESTART_METHOD_3_BF52ABBFF77B30F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A511B9FFF6626A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalPuzzleStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalPuzzleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLESTART_METHOD_3_0A511B9FFF6626A7_OFFSET))(a1, a2);
		}
	};
}
