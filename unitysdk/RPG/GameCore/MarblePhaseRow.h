#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA27E0)
#define RPG_GAMECORE_MARBLEPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA2E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePhaseRow_TypeDefinitionIndex = 11308;

	class MarblePhaseRow : public ::System::Object
	{
	public:
		::RPG::GameCore::MarblePhaseType ID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarblePhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
