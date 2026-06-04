#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C479E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_07AFA37E2D96CF3B_OFFSET UNITYSDK_OFFSET(0x19C477A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_96BA95DFB99846A4_OFFSET UNITYSDK_OFFSET(0x19C47870)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C47820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWaveStageCount_TypeDefinitionIndex = 21921;

	class SetDynamicValueByWaveStageCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* WriteToKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_07AFA37E2D96CF3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_07AFA37E2D96CF3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96BA95DFB99846A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_96BA95DFB99846A4_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
