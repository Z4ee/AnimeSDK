#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterAtlasFaceEyeBlink; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERATLASFACESET_METHOD_2_B5348D1B7C36E62E_OFFSET UNITYSDK_OFFSET(0x1D11A6D0)
#define RPG_GAMECORE_CHARACTERATLASFACESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11A880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceSet_TypeDefinitionIndex = 17260;

	class CharacterAtlasFaceSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshName; // 0x10
		::System::Int32 DefaultIndex; // 0x18
		::Il2CppArray<::System::Int32>* IndexList; // 0x20
		::RPG::GameCore::CharacterAtlasFaceEyeBlink* EyeBlink; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B5348D1B7C36E62E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAtlasFaceSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAtlasFaceSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACESET_METHOD_2_B5348D1B7C36E62E_OFFSET))(a1, a2);
		}
	};
}
