#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWUINODES_METHOD_3_2F00BFE9CD514313_OFFSET UNITYSDK_OFFSET(0x1D532F90)
#define RPG_GAMECORE_SHOWUINODES_METHOD_3_869EFF385A70986C_OFFSET UNITYSDK_OFFSET(0x1D532F50)
#define RPG_GAMECORE_SHOWUINODES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D532F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowUINodes_TypeDefinitionIndex = 24053;

	class ShowUINodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* Nodes; // 0x18
		::System::Boolean Open; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_869EFF385A70986C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUINodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUINodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_METHOD_3_869EFF385A70986C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F00BFE9CD514313(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUINodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUINodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_METHOD_3_2F00BFE9CD514313_OFFSET))(a1, a2);
		}
	};
}
