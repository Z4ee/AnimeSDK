#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIPAGEBGMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61C260)
#define RPG_GAMECORE_UIPAGEBGMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61CC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIPageBGMRow_TypeDefinitionIndex = 15229;

	class UIPageBGMRow : public ::System::Object
	{
	public:
		::System::String* BGMEvent; // 0x10
		::System::String* PagePrefab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIPageBGMRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIPageBGMRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
