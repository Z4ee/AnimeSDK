#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PunkLordHonorRow; }

#define RPG_CLIENT_PUNKLORDHONOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17B4FB80)
#define RPG_CLIENT_PUNKLORDHONOR_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17B4FBF0)
#define RPG_CLIENT_PUNKLORDHONOR_GET_ROW_OFFSET UNITYSDK_OFFSET(0x17B4FB60)
#define RPG_CLIENT_PUNKLORDHONOR_SET_ROW_OFFSET UNITYSDK_OFFSET(0x17B4FB70)
#define RPG_CLIENT_PUNKLORDHONOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4FB20)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordHonor_TypeDefinitionIndex = 66752;

	class PunkLordHonor : public ::System::Object
	{
	public:
		::RPG::GameCore::PunkLordHonorRow* _Row_k__BackingField; // 0x10
		::System::UInt32 UID; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PunkLordHonorRow* get_Row()
		{
			return ((::RPG::GameCore::PunkLordHonorRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::PunkLordHonorRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PunkLordHonorRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDHONOR_SET_ROW_OFFSET))(this, a1);
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
