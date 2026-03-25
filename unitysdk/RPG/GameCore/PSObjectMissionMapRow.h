#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PSOBJECTMISSIONMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17485AC0)
#define RPG_GAMECORE_PSOBJECTMISSIONMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17485C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PSObjectMissionMapRow_TypeDefinitionIndex = 11928;

	class PSObjectMissionMapRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MissionIDList; // 0x10
		::System::UInt32 ObjectID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSOBJECTMISSIONMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PSObjectMissionMapRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PSObjectMissionMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSOBJECTMISSIONMAPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
