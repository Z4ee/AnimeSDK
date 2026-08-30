#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_024482936D15DA94_OFFSET UNITYSDK_OFFSET(0x1BBD7F90)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_6F059007F4EF9717_OFFSET UNITYSDK_OFFSET(0x1BBD7E20)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_E3349DDDE6C1BE5C_OFFSET UNITYSDK_OFFSET(0x1BBD7DE0)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_EFD0A768A7A6397D_OFFSET UNITYSDK_OFFSET(0x1BBD7F60)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD7E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEnableStoryStreamingSource_TypeDefinitionIndex = 21657;

	class ByEnableStoryStreamingSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E3349DDDE6C1BE5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEnableStoryStreamingSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEnableStoryStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_E3349DDDE6C1BE5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F059007F4EF9717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_6F059007F4EF9717_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFD0A768A7A6397D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_EFD0A768A7A6397D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_024482936D15DA94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_METHOD_4_024482936D15DA94_OFFSET))(a1, a2);
		}
	};
}
