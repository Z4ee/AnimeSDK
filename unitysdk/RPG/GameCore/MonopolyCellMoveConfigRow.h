#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17436AA0)
#define RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17436C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCellMoveConfigRow_TypeDefinitionIndex = 11071;

	class MonopolyCellMoveConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* MoveParam; // 0x10
		::System::UInt32 CellID; // 0x18
		::System::UInt32 MapID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyCellMoveConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCellMoveConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
