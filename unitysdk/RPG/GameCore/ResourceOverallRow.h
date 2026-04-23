#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESOURCEOVERALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CAD950)
#define RPG_GAMECORE_RESOURCEOVERALLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CADF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResourceOverallRow_TypeDefinitionIndex = 13854;

	class ResourceOverallRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CurrencyIDList; // 0x10
		::System::String* PageKey; // 0x18
		::System::Boolean IsDetailButton; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ResourceOverallRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResourceOverallRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
