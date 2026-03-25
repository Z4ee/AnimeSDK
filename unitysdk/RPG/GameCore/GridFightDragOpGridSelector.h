#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_METHOD_3_78444FBCC6C56E39_OFFSET UNITYSDK_OFFSET(0x17258A30)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_METHOD_3_9BC5B5D009AFC4D5_OFFSET UNITYSDK_OFFSET(0x17258A90)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17258A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpGridSelector_TypeDefinitionIndex = 18224;

	class GridFightDragOpGridSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 PosIndex; // 0x10
		::System::Boolean FindEmpty; // 0x14
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* EmptyGridRegion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78444FBCC6C56E39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpGridSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpGridSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_METHOD_3_78444FBCC6C56E39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BC5B5D009AFC4D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpGridSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpGridSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGRIDSELECTOR_METHOD_3_9BC5B5D009AFC4D5_OFFSET))(a1, a2);
		}
	};
}
