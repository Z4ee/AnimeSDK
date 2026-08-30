#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OptionTalkInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_METHOD_3_01BB248D0D76712E_OFFSET UNITYSDK_OFFSET(0x1D309390)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_METHOD_3_46A4FECB7A1AA71C_OFFSET UNITYSDK_OFFSET(0x1D309430)
#define RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3093F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LimaoNewsDutyCheckOptionTalkInfo_TypeDefinitionIndex = 10228;

	class LimaoNewsDutyCheckOptionTalkInfo : public ::RPG::GameCore::OptionTalkInfo
	{
	public:
		::System::UInt32 OptionID; // 0x68
		::System::Boolean IsOneTime; // 0x6C
		::System::Boolean ExcelResolved; // 0x6D
		::Il2CppArray<::System::UInt32>* NeedOptionIDList; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01BB248D0D76712E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_METHOD_3_01BB248D0D76712E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46A4FECB7A1AA71C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWSDUTYCHECKOPTIONTALKINFO_METHOD_3_46A4FECB7A1AA71C_OFFSET))(a1, a2);
		}
	};
}
