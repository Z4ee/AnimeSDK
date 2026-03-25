#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CellConfig; }

#define RPG_GAMECORE_CELLCONFIGLIST_METHOD_2_8E14A2FD90B3ACC2_OFFSET UNITYSDK_OFFSET(0x17055170)
#define RPG_GAMECORE_CELLCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17055240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CellConfigList_TypeDefinitionIndex = 17524;

	class CellConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CellConfig*>* Cells; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CELLCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8E14A2FD90B3ACC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CellConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CellConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CELLCONFIGLIST_METHOD_2_8E14A2FD90B3ACC2_OFFSET))(a1, a2);
		}
	};
}
