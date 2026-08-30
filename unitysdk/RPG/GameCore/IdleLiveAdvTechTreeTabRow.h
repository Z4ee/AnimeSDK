#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEADVTECHTREETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D19B8E0)
#define RPG_GAMECORE_IDLELIVEADVTECHTREETABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19BB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAdvTechTreeTabRow_TypeDefinitionIndex = 11708;

	class IdleLiveAdvTechTreeTabRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendAvatarList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 StartPoint; // 0x24
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEADVTECHTREETABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEADVTECHTREETABROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
