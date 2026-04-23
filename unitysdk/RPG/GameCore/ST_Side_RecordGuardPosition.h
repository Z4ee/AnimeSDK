#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_55FACA78510074A7_OFFSET UNITYSDK_OFFSET(0x18DFB160)
#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_C781F9A157C524F8_OFFSET UNITYSDK_OFFSET(0x18DFAFF0)
#define RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFB110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RecordGuardPosition_TypeDefinitionIndex = 19034;

	class ST_Side_RecordGuardPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C781F9A157C524F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RecordGuardPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_C781F9A157C524F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55FACA78510074A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RecordGuardPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RecordGuardPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RECORDGUARDPOSITION_METHOD_4_55FACA78510074A7_OFFSET))(a1, a2);
		}
	};
}
