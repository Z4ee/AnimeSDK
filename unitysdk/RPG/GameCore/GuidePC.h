#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GUIDEPC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189E39E0)
#define RPG_GAMECORE_GUIDEPC__CTOR_OFFSET UNITYSDK_OFFSET(0x189E3D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuidePC_TypeDefinitionIndex = 23350;

	class GuidePC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UsePCGuide; // 0x10
		::System::Boolean Skip; // 0x11
		::System::Int32 GuideResID; // 0x14
		::System::String* Path; // 0x18
		::System::Boolean CopyAnchorAndSale; // 0x20
		::System::Single OffsetX; // 0x24
		::System::Single OffsetY; // 0x28
		::System::Single Scale; // 0x2C
		::System::String* Animation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEPC__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GuidePC*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuidePC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEPC_FROMBINARY_OFFSET))(array, val);
		}
	};
}
