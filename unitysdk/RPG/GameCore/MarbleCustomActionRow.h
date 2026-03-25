#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLECUSTOMACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1738CDD0)
#define RPG_GAMECORE_MARBLECUSTOMACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1738CF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleCustomActionRow_TypeDefinitionIndex = 10929;

	class MarbleCustomActionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* LaunchParamList; // 0x10
		::System::UInt32 SealInsID; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECUSTOMACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleCustomActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleCustomActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECUSTOMACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
