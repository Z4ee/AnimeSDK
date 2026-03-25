#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPENTIMEREWINDPAGE_METHOD_3_C56BDF49FA4EFE6F_OFFSET UNITYSDK_OFFSET(0x1747CCF0)
#define RPG_GAMECORE_OPENTIMEREWINDPAGE_METHOD_3_DA4D061F7269624B_OFFSET UNITYSDK_OFFSET(0x1747CC70)
#define RPG_GAMECORE_OPENTIMEREWINDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1747CCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTimeRewindPage_TypeDefinitionIndex = 18961;

	class OpenTimeRewindPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean InverseUIProgress; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA4D061F7269624B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTimeRewindPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTimeRewindPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDPAGE_METHOD_3_DA4D061F7269624B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C56BDF49FA4EFE6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDPAGE_METHOD_3_C56BDF49FA4EFE6F_OFFSET))(a1, a2);
		}
	};
}
