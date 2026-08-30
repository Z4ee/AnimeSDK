#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEENVIRONMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D268690)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D268DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeEnvironmentRow_TypeDefinitionIndex = 11878;

	class MatchThreeEnvironmentRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* ImagePath; // 0x18
		::Il2CppArray<::System::String*>* ParamList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 EnvironmentID; // 0x38
		::RPG::Client::TextID Desc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeEnvironmentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeEnvironmentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
