#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_METHOD_4_0100194C786A9970_OFFSET UNITYSDK_OFFSET(0x19BEDC80)
#define RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_METHOD_4_B51136D85938741C_OFFSET UNITYSDK_OFFSET(0x19BEDC40)
#define RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEDC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInstanceInfo_TypeDefinitionIndex = 16486;

	class RtLevelGroupInstanceInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* GroupPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B51136D85938741C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInstanceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInstanceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_METHOD_4_B51136D85938741C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0100194C786A9970(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInstanceInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_METHOD_4_0100194C786A9970_OFFSET))(a1, a2);
		}
	};
}
