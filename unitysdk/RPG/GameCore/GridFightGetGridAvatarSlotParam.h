#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_1E1F40060D29F55C_OFFSET UNITYSDK_OFFSET(0x189AEE20)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_F78B4F0BCEB047C3_OFFSET UNITYSDK_OFFSET(0x189AEE60)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x189AEE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGetGridAvatarSlotParam_TypeDefinitionIndex = 18868;

	class GridFightGetGridAvatarSlotParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* GridRegionList; // 0x10
		::System::UInt32 RoleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E1F40060D29F55C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_1E1F40060D29F55C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F78B4F0BCEB047C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGetGridAvatarSlotParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_F78B4F0BCEB047C3_OFFSET))(a1, a2);
		}
	};
}
