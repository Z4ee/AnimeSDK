#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_COMMITCD_METHOD_4_0252DC9640A9BF89_OFFSET UNITYSDK_OFFSET(0x1DB41380)
#define RPG_GAMECORE_ST_SIDE_COMMITCD_METHOD_4_3CC611E15DD90F1C_OFFSET UNITYSDK_OFFSET(0x1DB41340)
#define RPG_GAMECORE_ST_SIDE_COMMITCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_CommitCD_TypeDefinitionIndex = 19899;

	class ST_Side_CommitCD : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* VariableName; // 0x18
		::System::Single Duration; // 0x20
		::System::Boolean CommitOnEnter; // 0x24
		::System::Boolean CommitOnExit; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_COMMITCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3CC611E15DD90F1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_CommitCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_CommitCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_COMMITCD_METHOD_4_3CC611E15DD90F1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0252DC9640A9BF89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_CommitCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_CommitCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_COMMITCD_METHOD_4_0252DC9640A9BF89_OFFSET))(a1, a2);
		}
	};
}
