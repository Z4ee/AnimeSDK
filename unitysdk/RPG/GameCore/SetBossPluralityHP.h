#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_0D839C3ECD9777A9_OFFSET UNITYSDK_OFFSET(0x176ABC40)
#define RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_BEC26B70E33779F3_OFFSET UNITYSDK_OFFSET(0x176ABD60)
#define RPG_GAMECORE_SETBOSSPLURALITYHP__CTOR_OFFSET UNITYSDK_OFFSET(0x176ABCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBossPluralityHP_TypeDefinitionIndex = 21141;

	class SetBossPluralityHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::DynamicFloat* PluralityValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D839C3ECD9777A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBossPluralityHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBossPluralityHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_0D839C3ECD9777A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC26B70E33779F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSPLURALITYHP_METHOD_3_BEC26B70E33779F3_OFFSET))(a1, a2);
		}
	};
}
