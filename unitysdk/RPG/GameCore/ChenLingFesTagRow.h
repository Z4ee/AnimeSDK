#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB54F0)
#define RPG_GAMECORE_CHENLINGFESTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB56C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesTagRow_TypeDefinitionIndex = 11086;

	class ChenLingFesTagRow : public ::System::Object
	{
	public:
		::System::String* TagIconPath; // 0x10
		::RPG::Client::TextID TagTitle; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesTagRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
