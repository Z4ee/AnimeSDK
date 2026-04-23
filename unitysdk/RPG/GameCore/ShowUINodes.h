#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWUINODES_METHOD_3_4412D9AC8C7B0047_OFFSET UNITYSDK_OFFSET(0x18E6AAF0)
#define RPG_GAMECORE_SHOWUINODES_METHOD_3_B7BDEEEC40FEC349_OFFSET UNITYSDK_OFFSET(0x18E6AB70)
#define RPG_GAMECORE_SHOWUINODES__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6AB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowUINodes_TypeDefinitionIndex = 23346;

	class ShowUINodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* Nodes; // 0x18
		::System::Boolean Open; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4412D9AC8C7B0047(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUINodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUINodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_METHOD_3_4412D9AC8C7B0047_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7BDEEEC40FEC349(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUINodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUINodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_METHOD_3_B7BDEEEC40FEC349_OFFSET))(a1, a2);
		}
	};
}
