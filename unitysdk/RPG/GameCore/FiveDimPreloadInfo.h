#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPRELOADINFO_METHOD_2_7B27258F9759C2D5_OFFSET UNITYSDK_OFFSET(0x17203980)
#define RPG_GAMECORE_FIVEDIMPRELOADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17203AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPreloadInfo_TypeDefinitionIndex = 15327;

	class FiveDimPreloadInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PreloadViewPaths; // 0x10
		::Il2CppArray<::System::String*>* PreloadEffectPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRELOADINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7B27258F9759C2D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPreloadInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPreloadInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRELOADINFO_METHOD_2_7B27258F9759C2D5_OFFSET))(a1, a2);
		}
	};
}
