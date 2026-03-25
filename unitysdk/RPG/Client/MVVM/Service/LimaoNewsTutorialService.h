#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A907E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0x9A90820)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0x9A8A9A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0x9A90830)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A90840)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A80870)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsTutorialService_TypeDefinitionIndex = 61050;

	class LimaoNewsTutorialService : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_TutorialForumNodeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsTutorialService_TypeDefinitionIndex)->GetStaticField(0xD6F0);
		}
		static ::System::UInt32* StaticGet_TutorialPostID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsTutorialService_TypeDefinitionIndex)->GetStaticField(0xD6F4);
		}
		::System::Boolean _FirstEnteredMainPageFlag_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshFirstEnteredMainPageFlag(::System::Boolean firstEntered)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, firstEntered);
		}

		::System::Boolean get_FirstEnteredMainPageFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this);
		}

		::System::Void set_FirstEnteredMainPageFlag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, value);
		}
	};
}
