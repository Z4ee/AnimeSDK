#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IMGDANMUCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A5FF0)
#define RPG_GAMECORE_IMGDANMUCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A6120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ImgDanmuContentRow_TypeDefinitionIndex = 15020;

	class ImgDanmuContentRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IMGDANMUCONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ImgDanmuContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ImgDanmuContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IMGDANMUCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
