#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMISSIONINFO_METHOD_3_197CFE3A026AD1D0_OFFSET UNITYSDK_OFFSET(0x17700420)
#define RPG_GAMECORE_SHOWMISSIONINFO_METHOD_3_78A05FB8431E3059_OFFSET UNITYSDK_OFFSET(0x177004A0)
#define RPG_GAMECORE_SHOWMISSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17700470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMissionInfo_TypeDefinitionIndex = 22312;

	class ShowMissionInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMISSIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_197CFE3A026AD1D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMissionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMissionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMISSIONINFO_METHOD_3_197CFE3A026AD1D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78A05FB8431E3059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMissionInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMissionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMISSIONINFO_METHOD_3_78A05FB8431E3059_OFFSET))(a1, a2);
		}
	};
}
