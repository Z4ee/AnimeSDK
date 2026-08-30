#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_METHOD_3_44096114D910DC6E_OFFSET UNITYSDK_OFFSET(0x1CE98380)
#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_METHOD_3_85F2DC3D559FCBBF_OFFSET UNITYSDK_OFFSET(0x1CE983C0)
#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE983B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTimeRewindSnapPage_TypeDefinitionIndex = 20411;

	class OpenTimeRewindSnapPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* StartRatio; // 0x20
		::RPG::GameCore::DynamicFloat* EndRatio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44096114D910DC6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTimeRewindSnapPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTimeRewindSnapPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_METHOD_3_44096114D910DC6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85F2DC3D559FCBBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTimeRewindSnapPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTimeRewindSnapPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_METHOD_3_85F2DC3D559FCBBF_OFFSET))(a1, a2);
		}
	};
}
