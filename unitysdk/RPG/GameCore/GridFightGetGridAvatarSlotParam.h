#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_A2359270CFBAE2E4_OFFSET UNITYSDK_OFFSET(0x1725E900)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_F78B4F0BCEB047C3_OFFSET UNITYSDK_OFFSET(0x1725E960)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1725E950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGetGridAvatarSlotParam_TypeDefinitionIndex = 18221;

	class GridFightGetGridAvatarSlotParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* GridRegionList; // 0x10
		::System::UInt32 RoleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2359270CFBAE2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_A2359270CFBAE2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F78B4F0BCEB047C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightGetGridAvatarSlotParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_METHOD_3_F78B4F0BCEB047C3_OFFSET))(a1, a2);
		}
	};
}
