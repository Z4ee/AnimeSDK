#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_POSSESSIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B49D0)
#define RPG_GAMECORE_POSSESSIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B4C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PossessionConfigRow_TypeDefinitionIndex = 14390;

	class PossessionConfigRow : public ::System::Object
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::String* PossessionPrefabPath; // 0x18
		::System::String* PossessionName; // 0x20
		::Il2CppArray<::System::Single>* LocalScale; // 0x28
		::Il2CppArray<::System::Single>* LocalPosition; // 0x30
		::Il2CppArray<::System::Single>* LocalRotation; // 0x38
		::System::Boolean IsEffect; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSSESSIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PossessionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PossessionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSSESSIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
