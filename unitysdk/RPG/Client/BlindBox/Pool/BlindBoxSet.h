#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class BlindBox; }
namespace RPG::Client::BlindBox::Pool { class IBlindBox; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_FULLUPDATEOPENED_OFFSET UNITYSDK_OFFSET(0xC880600)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_GET_BLINDBOXES_OFFSET UNITYSDK_OFFSET(0xC885D00)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xC886050)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0xC8860A0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_UPDATEOPENED_OFFSET UNITYSDK_OFFSET(0xC8804C0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC8803B0)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxSet_TypeDefinitionIndex = 74917;

	class BlindBoxSet : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::BlindBox::Pool::BlindBox*>* _BlindBoxes; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateOpened(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_UPDATEOPENED_OFFSET))(this, a1, a2);
		}

		::System::Void FullUpdateOpened(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_FULLUPDATEOPENED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Pool::IBlindBox*>* get_BlindBoxes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Pool::IBlindBox*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_GET_BLINDBOXES_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_GET_COUNT_OFFSET))(this);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
