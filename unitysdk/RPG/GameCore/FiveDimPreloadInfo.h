#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPRELOADINFO_METHOD_2_6F0B68A23C34D7F7_OFFSET UNITYSDK_OFFSET(0x1D0F9FF0)
#define RPG_GAMECORE_FIVEDIMPRELOADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FA120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPreloadInfo_TypeDefinitionIndex = 16550;

	class FiveDimPreloadInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PreloadViewPaths; // 0x10
		::Il2CppArray<::System::String*>* PreloadEffectPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRELOADINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6F0B68A23C34D7F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPreloadInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPreloadInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPRELOADINFO_METHOD_2_6F0B68A23C34D7F7_OFFSET))(a1, a2);
		}
	};
}
