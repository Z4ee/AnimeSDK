#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESOURCEOVERALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3A7750)
#define RPG_GAMECORE_RESOURCEOVERALLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A7D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResourceOverallRow_TypeDefinitionIndex = 14489;

	class ResourceOverallRow : public ::System::Object
	{
	public:
		::System::String* PageKey; // 0x10
		::Il2CppArray<::System::UInt32>* CurrencyIDList; // 0x18
		::System::Boolean IsDetailButton; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResourceOverallRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResourceOverallRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
