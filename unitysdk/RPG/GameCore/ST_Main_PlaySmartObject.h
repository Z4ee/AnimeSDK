#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Params.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_METHOD_4_72F79F72D9800C2E_OFFSET UNITYSDK_OFFSET(0x1DB3FD00)
#define RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_METHOD_4_8F1EF31CD6C33B83_OFFSET UNITYSDK_OFFSET(0x1DB3FD40)
#define RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_PlaySmartObject_TypeDefinitionIndex = 19880;

	class ST_Main_PlaySmartObject : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::SO_Params ParamType; // 0x18
		::System::UInt32 GroupId; // 0x1C
		::System::UInt32 InstanceId; // 0x20
		::System::UInt32 SlotIndex; // 0x24
		::System::Boolean RecordContext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_72F79F72D9800C2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlaySmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlaySmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_METHOD_4_72F79F72D9800C2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F1EF31CD6C33B83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlaySmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlaySmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_METHOD_4_8F1EF31CD6C33B83_OFFSET))(a1, a2);
		}
	};
}
