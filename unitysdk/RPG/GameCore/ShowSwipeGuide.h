#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWSWIPEGUIDE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x177049E0)
#define RPG_GAMECORE_SHOWSWIPEGUIDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17704940)
#define RPG_GAMECORE_SHOWSWIPEGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x177049A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSwipeGuide_TypeDefinitionIndex = 22385;

	class ShowSwipeGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::System::String* OriginNodeID; // 0x20
		::System::Single OriginScale; // 0x28
		::System::String* TargetNodeID; // 0x30
		::System::Single TargetScale; // 0x38
		::System::Boolean Show; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWIPEGUIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShowSwipeGuide*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSwipeGuide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWIPEGUIDE_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShowSwipeGuide* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSwipeGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSWIPEGUIDE_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
