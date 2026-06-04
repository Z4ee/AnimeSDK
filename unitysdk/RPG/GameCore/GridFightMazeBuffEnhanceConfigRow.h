#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTMAZEBUFFENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197E7A10)
#define RPG_GAMECORE_GRIDFIGHTMAZEBUFFENHANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197E7D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightMazeBuffEnhanceConfigRow_TypeDefinitionIndex = 13017;

	class GridFightMazeBuffEnhanceConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x28
		::RPG::Client::TextID EnhanceName; // 0x38
		::RPG::Client::TextID EnhanceDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMAZEBUFFENHANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMAZEBUFFENHANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
