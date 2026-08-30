#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_BEC26B70E33779F3_OFFSET UNITYSDK_OFFSET(0x1D4E4EF0)
#define RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_E4584CCF3A8C97E0_OFFSET UNITYSDK_OFFSET(0x1D4E4E00)
#define RPG_GAMECORE_SETBOSSPLURALITYHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E4E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBossPluralityHP_TypeDefinitionIndex = 22682;

	class SetBossPluralityHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::DynamicFloat* PluralityValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4584CCF3A8C97E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBossPluralityHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBossPluralityHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_E4584CCF3A8C97E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC26B70E33779F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_BEC26B70E33779F3_OFFSET))(a1, a2);
		}
	};
}
