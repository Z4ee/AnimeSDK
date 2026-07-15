#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_METHOD_3_6E79A6F935B5A10A_OFFSET UNITYSDK_OFFSET(0x1C5CE700)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_METHOD_3_F2F70EFE5B0A3D62_OFFSET UNITYSDK_OFFSET(0x1C5CE760)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CE750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGetGridEmptySlotParam_TypeDefinitionIndex = 19182;

	class GridFightGetGridEmptySlotParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::RPG::GameCore::GridFightRegion GridRegion; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E79A6F935B5A10A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGetGridEmptySlotParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGetGridEmptySlotParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_METHOD_3_6E79A6F935B5A10A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2F70EFE5B0A3D62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGetGridEmptySlotParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGetGridEmptySlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDEMPTYSLOTPARAM_METHOD_3_F2F70EFE5B0A3D62_OFFSET))(a1, a2);
		}
	};
}
