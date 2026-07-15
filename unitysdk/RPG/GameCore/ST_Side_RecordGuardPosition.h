#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_55FACA78510074A7_OFFSET UNITYSDK_OFFSET(0x1C2C4A60)
#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_FD1FEC780296FC0A_OFFSET UNITYSDK_OFFSET(0x1C2C4990)
#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C4A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RecordGuardPosition_TypeDefinitionIndex = 19331;

	class ST_Side_RecordGuardPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FD1FEC780296FC0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RecordGuardPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_FD1FEC780296FC0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55FACA78510074A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RecordGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_55FACA78510074A7_OFFSET))(a1, a2);
		}
	};
}
