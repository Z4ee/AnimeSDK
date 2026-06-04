#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_METHOD_3_EC7B25E10AE7F8E9_OFFSET UNITYSDK_OFFSET(0x19C25AA0)
#define RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_METHOD_3_F30B6F70E3F074F9_OFFSET UNITYSDK_OFFSET(0x19C25B30)
#define RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C25B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerSetMainMissionCustomValue_TypeDefinitionIndex = 19300;

	class ServerSetMainMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC7B25E10AE7F8E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerSetMainMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerSetMainMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_METHOD_3_EC7B25E10AE7F8E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F30B6F70E3F074F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerSetMainMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerSetMainMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETMAINMISSIONCUSTOMVALUE_METHOD_3_F30B6F70E3F074F9_OFFSET))(a1, a2);
		}
	};
}
