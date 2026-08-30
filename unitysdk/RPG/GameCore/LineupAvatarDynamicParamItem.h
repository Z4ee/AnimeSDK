#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LineupAvatarDynamicParamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicParam; }

#define RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM_METHOD_2_DE324ECF67CEB45D_OFFSET UNITYSDK_OFFSET(0x1D1F75B0)
#define RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupAvatarDynamicParamItem_TypeDefinitionIndex = 17913;

	class LineupAvatarDynamicParamItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LineupAvatarDynamicParamType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicParam*>* DynamicParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE324ECF67CEB45D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LineupAvatarDynamicParamItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LineupAvatarDynamicParamItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM_METHOD_2_DE324ECF67CEB45D_OFFSET))(a1, a2);
		}
	};
}
