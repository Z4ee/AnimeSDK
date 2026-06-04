#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/System/Object.h"

class Class_1_F2415C7AC4F3ABF2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_ADDUSECOUNT_OFFSET UNITYSDK_OFFSET(0xC8FAD10)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_CHECKUSESPECIALVISION_OFFSET UNITYSDK_OFFSET(0xC8FA300)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8FA7B0)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_GETSPECIALVISIONAVAILABLETIME_OFFSET UNITYSDK_OFFSET(0xC8FA850)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_GETSPECIALVISIONMAXTIME_OFFSET UNITYSDK_OFFSET(0xC8FAA70)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC8FA770)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_ISSPECIALVISIONACTIVE_OFFSET UNITYSDK_OFFSET(0xC8FA980)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_ISSPECIALVISIONAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC8FABA0)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_USESPECIALVISION_OFFSET UNITYSDK_OFFSET(0xC8FA350)
#define RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8FAE70)

namespace RPG::Client
{
	inline static constexpr unsigned int SpecialVisionUseStateManager_TypeDefinitionIndex = 56962;

	class SpecialVisionUseStateManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialVisionType, ::Class_1_F2415C7AC4F3ABF2*>* _SpecialVisionUseState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Int32 GetSpecialVisionAvailableTime(::RPG::GameCore::SpecialVisionType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SpecialVisionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_GETSPECIALVISIONAVAILABLETIME_OFFSET))(this, a1);
		}

		::System::Boolean IsSpecialVisionActive(::RPG::GameCore::SpecialVisionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialVisionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_ISSPECIALVISIONACTIVE_OFFSET))(this, a1);
		}

		::System::Int32 GetSpecialVisionMaxTime(::RPG::GameCore::SpecialVisionType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SpecialVisionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_GETSPECIALVISIONMAXTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsSpecialVisionAvailable(::RPG::GameCore::SpecialVisionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialVisionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_ISSPECIALVISIONAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void UseSpecialVision(::RPG::GameCore::SpecialVisionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialVisionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_USESPECIALVISION_OFFSET))(this, a1);
		}

		::System::Boolean CheckUseSpecialVision(::RPG::GameCore::SpecialVisionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialVisionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_CHECKUSESPECIALVISION_OFFSET))(this, a1);
		}

		::System::Boolean AddUseCount(::RPG::GameCore::SpecialVisionType a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONUSESTATEMANAGER_ADDUSECOUNT_OFFSET))(this, a1, a2);
		}
	};
}
