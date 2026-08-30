#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SCENETVMENUDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4D5910)
#define RPG_GAMECORE_SCENETVMENUDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D5C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SceneTVMenuDataRow_TypeDefinitionIndex = 14397;

	class SceneTVMenuDataRow : public ::System::Object
	{
	public:
		::System::String* Asset; // 0x10
		::System::String* SoundEvent; // 0x18
		::System::String* IfAnAsset; // 0x20
		::System::Int32 Order; // 0x28
		::System::Int32 PlayType; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::Int32 ProgramGroupID; // 0x34
		::System::Single Duration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENETVMENUDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SceneTVMenuDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SceneTVMenuDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENETVMENUDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
