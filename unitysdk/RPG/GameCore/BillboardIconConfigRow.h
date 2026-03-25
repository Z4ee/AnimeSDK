#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BILLBOARDICONCONFIGROW_COMPARETO_OFFSET UNITYSDK_OFFSET(0x16FE6440)
#define RPG_GAMECORE_BILLBOARDICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE5E90)
#define RPG_GAMECORE_BILLBOARDICONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardIconConfigRow_TypeDefinitionIndex = 11443;

	class BillboardIconConfigRow : public ::System::Object
	{
	public:
		::System::String* BillboardIconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Priority; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BillboardIconConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BillboardIconConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Int32 CompareTo(::RPG::GameCore::BillboardIconConfigRow* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BillboardIconConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGROW_COMPARETO_OFFSET))(this, other);
		}
	};
}
