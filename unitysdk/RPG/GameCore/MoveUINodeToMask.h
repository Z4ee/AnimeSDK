#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18B65940)
#define RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B658C0)
#define RPG_GAMECORE_MOVEUINODETOMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x18B65910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveUINodeToMask_TypeDefinitionIndex = 23296;

	class MoveUINodeToMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* PathPC; // 0x20
		::System::String* NodeID; // 0x28
		::System::Boolean Reset; // 0x30
		::System::Boolean Follow; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEUINODETOMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MoveUINodeToMask*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveUINodeToMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MoveUINodeToMask* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveUINodeToMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEUINODETOMASK_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
