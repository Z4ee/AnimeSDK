#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5CDDB0)
#define RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CDFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightFormationWaveConfigRow_TypeDefinitionIndex = 13133;

	class GridFightFormationWaveConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* Ability; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 MaxTeammateCount; // 0x24
		::System::Boolean ClearPreviousAbility; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightFormationWaveConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightFormationWaveConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
