#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D96A0)
#define RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D9990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageNodeDisplayConfigRow_TypeDefinitionIndex = 12906;

	class GridFightStageNodeDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* NodePic; // 0x10
		::RPG::GameCore::GridFightNodeType NodeType; // 0x18
		::RPG::Client::TextID NodeName; // 0x20
		::RPG::Client::TextID NodeDetailName; // 0x30
		::RPG::Client::TextID NodeDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
