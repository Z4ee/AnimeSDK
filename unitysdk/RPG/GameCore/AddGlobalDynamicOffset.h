#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_1FFCB0A55231ECCC_OFFSET UNITYSDK_OFFSET(0x1863F140)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_FC8F6F468AFED625_OFFSET UNITYSDK_OFFSET(0x1863F1C0)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1863F190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffset_TypeDefinitionIndex = 21392;

	class AddGlobalDynamicOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FFCB0A55231ECCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_1FFCB0A55231ECCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC8F6F468AFED625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_METHOD_3_FC8F6F468AFED625_OFFSET))(a1, a2);
		}
	};
}
