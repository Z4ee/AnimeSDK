#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOX_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC87E4C0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOX_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xC87E4D0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOX_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xC87E4E0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOX__CTOR_OFFSET UNITYSDK_OFFSET(0xC87E4B0)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBox_TypeDefinitionIndex = 74906;

	class BlindBox : public ::System::Object
	{
	public:
		::System::Boolean _IsOpened_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOX__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOX_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOX_GET_ISOPENED_OFFSET))(this);
		}

		::System::Void set_IsOpened(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOX_SET_ISOPENED_OFFSET))(this, a1);
		}
	};
}
