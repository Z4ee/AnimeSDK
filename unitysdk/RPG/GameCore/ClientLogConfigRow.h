#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }

#define RPG_GAMECORE_CLIENTLOGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFDBFC0)
#define RPG_GAMECORE_CLIENTLOGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDC1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClientLogConfigRow_TypeDefinitionIndex = 13125;

	class ClientLogConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Params; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Actionid; // 0x1C
		::System::Boolean IsWhiteMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTLOGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClientLogConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClientLogConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTLOGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
