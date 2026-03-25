#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_5FF34AC5FCA918A0_OFFSET UNITYSDK_OFFSET(0x16F1D0B0)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_A3912DBEA2641659_OFFSET UNITYSDK_OFFSET(0x16F1D030)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1D080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffset_TypeDefinitionIndex = 20695;

	class AddGlobalDynamicOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ConfigName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3912DBEA2641659(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_A3912DBEA2641659_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FF34AC5FCA918A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_5FF34AC5FCA918A0_OFFSET))(a1, a2);
		}
	};
}
