#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GUIDERESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C68B0)
#define RPG_GAMECORE_GUIDERESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C6ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideResRow_TypeDefinitionIndex = 13604;

	class GuideResRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Int32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GuideResRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideResRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
