#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PRELOADITEM_METHOD_2_67F09D5620D01F05_OFFSET UNITYSDK_OFFSET(0x175116B0)
#define RPG_GAMECORE_PRELOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x175117B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItem_TypeDefinitionIndex = 14970;

	class PreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_67F09D5620D01F05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEM_METHOD_2_67F09D5620D01F05_OFFSET))(a1, a2);
		}
	};
}
