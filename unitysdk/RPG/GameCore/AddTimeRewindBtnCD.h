#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADDTIMEREWINDBTNCD_METHOD_3_3A85B19702FD669D_OFFSET UNITYSDK_OFFSET(0x1CDB72B0)
#define RPG_GAMECORE_ADDTIMEREWINDBTNCD_METHOD_3_5D6D1015A5B7E4BE_OFFSET UNITYSDK_OFFSET(0x1CDB7270)
#define RPG_GAMECORE_ADDTIMEREWINDBTNCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB72A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTimeRewindBtnCD_TypeDefinitionIndex = 20443;

	class AddTimeRewindBtnCD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMEREWINDBTNCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D6D1015A5B7E4BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimeRewindBtnCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimeRewindBtnCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMEREWINDBTNCD_METHOD_3_5D6D1015A5B7E4BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A85B19702FD669D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimeRewindBtnCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimeRewindBtnCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMEREWINDBTNCD_METHOD_3_3A85B19702FD669D_OFFSET))(a1, a2);
		}
	};
}
