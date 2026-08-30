#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB0450)
#define RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB0630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEffectProgressRow_TypeDefinitionIndex = 11021;

	class ChenLingEffectProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ActionIDList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Progress; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingEffectProgressRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEffectProgressRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTPROGRESSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
