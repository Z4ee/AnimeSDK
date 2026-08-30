#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDSYNOPSIS_CREATE_OFFSET UNITYSDK_OFFSET(0x1A382760)
#define RPG_CLIENT_TEAMBUILDSYNOPSIS_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x1A3870B0)
#define RPG_CLIENT_TEAMBUILDSYNOPSIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3870C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildSynopsis_TypeDefinitionIndex = 68092;

	class TeamBuildSynopsis : public ::System::Object
	{
	public:
		// static const ::System::Int32 _AvatarIDCount = 0x4; // 0x0
		::Il2CppArray<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS__CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_GET_AVATARIDS_OFFSET))(this);
		}

		static ::RPG::Client::TeamBuildSynopsis* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::TeamBuildSynopsis*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDSYNOPSIS_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
