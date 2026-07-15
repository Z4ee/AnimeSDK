#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C5F38F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_96BA95DFB99846A4_OFFSET UNITYSDK_OFFSET(0x1C5F3780)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_EF27C4582C8A0023_OFFSET UNITYSDK_OFFSET(0x1C5F3740)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F3770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWaveStageCount_TypeDefinitionIndex = 22350;

	class SetDynamicValueByWaveStageCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* WriteToKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EF27C4582C8A0023(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_METHOD_4_EF27C4582C8A0023_OFFSET))(a1, a2);
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
