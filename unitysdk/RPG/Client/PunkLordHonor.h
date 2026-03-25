#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PunkLordHonorRow; }

#define RPG_CLIENT_PUNKLORDHONOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA238780)
#define RPG_CLIENT_PUNKLORDHONOR_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA2387B0)
#define RPG_CLIENT_PUNKLORDHONOR_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA238760)
#define RPG_CLIENT_PUNKLORDHONOR_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA238770)
#define RPG_CLIENT_PUNKLORDHONOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA238720)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordHonor_TypeDefinitionIndex = 54305;

	class PunkLordHonor : public ::System::Object
	{
	public:
		::RPG::GameCore::PunkLordHonorRow* _Row_k__BackingField; // 0x10
		::System::UInt32 UID; // 0x18

		::System::Void _ctor(::System::UInt32 honorConfigID, ::System::UInt32 userID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR__CTOR_OFFSET))(this, honorConfigID, userID);
		}

		::RPG::GameCore::PunkLordHonorRow* get_Row()
		{
			return ((::RPG::GameCore::PunkLordHonorRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::PunkLordHonorRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PunkLordHonorRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR_GET_PRIORITY_OFFSET))(this);
		}
	};
}
