#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONTABVIEWMODEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD67E440)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD67D6E0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronTabViewModel_TypeDefinitionIndex = 79612;

	class MechCraftDiyMechatronTabViewModel : public ::System::Object
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONTABVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONTABVIEWMODEL_GET_INDEX_OFFSET))(this);
		}
	};
}
