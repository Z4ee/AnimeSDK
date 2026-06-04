#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueSetSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO_METHOD_2_8552AABC54F650A7_OFFSET UNITYSDK_OFFSET(0x19C4EA70)
#define RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4F770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomValueExtraInfo_TypeDefinitionIndex = 19545;

	class SetFloorCustomValueExtraInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Lock; // 0x10
		::RPG::GameCore::FloorCustomValueSetSource Source; // 0x14
		::System::Boolean RecoverWhenUnLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8552AABC54F650A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomValueExtraInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomValueExtraInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO_METHOD_2_8552AABC54F650A7_OFFSET))(a1, a2);
		}
	};
}
