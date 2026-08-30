#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM_METHOD_2_95599F5F0732F94D_OFFSET UNITYSDK_OFFSET(0x1D1600F0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1603B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialSetGoldNumParam_TypeDefinitionIndex = 19739;

	class GridFightPrepTutorialSetGoldNumParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsDelta; // 0x10
		::System::Int32 Value; // 0x14
		::System::Boolean LockRefresh; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_95599F5F0732F94D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialSetGoldNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialSetGoldNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALSETGOLDNUMPARAM_METHOD_2_95599F5F0732F94D_OFFSET))(a1, a2);
		}
	};
}
