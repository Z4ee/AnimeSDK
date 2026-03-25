#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_METHOD_2_1898AA7628FA7EBD_OFFSET UNITYSDK_OFFSET(0x17258C70)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_METHOD_2_26B8CA4473F78B88_OFFSET UNITYSDK_OFFSET(0x172591F0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17258A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpParamBase_TypeDefinitionIndex = 18223;

	class GridFightDragOpParamBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1898AA7628FA7EBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpParamBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpParamBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_METHOD_2_1898AA7628FA7EBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_26B8CA4473F78B88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpParamBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPPARAMBASE_METHOD_2_26B8CA4473F78B88_OFFSET))(a1, a2);
		}
	};
}
