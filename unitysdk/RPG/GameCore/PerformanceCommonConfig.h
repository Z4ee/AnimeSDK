#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PerformanceLoadType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCECOMMONCONFIG_METHOD_2_D66C438B4C0E021E_OFFSET UNITYSDK_OFFSET(0x1D41E1D0)
#define RPG_GAMECORE_PERFORMANCECOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41E920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceCommonConfig_TypeDefinitionIndex = 18814;

	class PerformanceCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PerformanceLoadType LoadType; // 0x10
		::System::Boolean EnableFastLoad; // 0x14
		::System::Boolean InvisibleEntityTickLowest; // 0x15
		::System::Boolean UnloadPlayerPreload; // 0x16
		::System::Boolean UnloadInvisibleMunicipal; // 0x17
		::System::Boolean UnloadInvisibleEntityArt; // 0x18
		::Il2CppArray<::RPG::GameCore::PerformanceIDPair*>* UnloadInvisibleEntityArtAffectList; // 0x20
		::System::Boolean AutoStreamingSource; // 0x28
		::System::Int32 AutoStreamingSourceMaxCount; // 0x2C
		::System::Boolean IsControlShadow; // 0x30
		::System::Boolean IsRefreshStencil; // 0x31
		::System::Boolean EnableOC; // 0x32
		::System::Boolean ForbidPerformanceActorOC; // 0x33
		::System::Boolean EnableForceUpdateOcclusionQuery; // 0x34
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* OptionIconTypeAutoSelectSortList; // 0x38
		::Il2CppArray<::System::String*>* UIInPerformanceWhiteList; // 0x40
		::Il2CppArray<::System::String*>* EnterPerformanceUIPageWhiteList; // 0x48
		::Il2CppArray<::System::String*>* ShiftPageWhiteList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D66C438B4C0E021E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECOMMONCONFIG_METHOD_2_D66C438B4C0E021E_OFFSET))(a1, a2);
		}
	};
}
