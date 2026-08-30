#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVENODETYPEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A1A10)
#define RPG_GAMECORE_IDLELIVENODETYPEDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A1BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveNodeTypeDataRow_TypeDefinitionIndex = 11678;

	class IdleLiveNodeTypeDataRow : public ::System::Object
	{
	public:
		::System::String* NodeIcon; // 0x10
		::RPG::GameCore::IdleLiveNodeType Type; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODETYPEDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveNodeTypeDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveNodeTypeDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODETYPEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
