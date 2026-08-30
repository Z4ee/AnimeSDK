#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODELICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2A9D90)
#define RPG_GAMECORE_MODELICONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A9E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModelIconConfigRow_TypeDefinitionIndex = 12488;

	class ModelIconConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODELICONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModelIconConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModelIconConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODELICONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
