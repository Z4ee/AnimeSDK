#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5BE590)
#define RPG_GAMECORE_GOTOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BEC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoConfigRow_TypeDefinitionIndex = 12831;

	class GotoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ParamStringList; // 0x10
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 UnlockMainMission; // 0x28
		::System::UInt32 GotoType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GotoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GotoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
