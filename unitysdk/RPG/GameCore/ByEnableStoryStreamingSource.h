#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_6F059007F4EF9717_OFFSET UNITYSDK_OFFSET(0x170215B0)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_D7199B96FFE88BFD_OFFSET UNITYSDK_OFFSET(0x170214E0)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17021560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEnableStoryStreamingSource_TypeDefinitionIndex = 20075;

	class ByEnableStoryStreamingSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7199B96FFE88BFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEnableStoryStreamingSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEnableStoryStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_D7199B96FFE88BFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F059007F4EF9717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_6F059007F4EF9717_OFFSET))(a1, a2);
		}
	};
}
