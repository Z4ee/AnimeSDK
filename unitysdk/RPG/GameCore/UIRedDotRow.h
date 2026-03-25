#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIREDDOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178E27D0)
#define RPG_GAMECORE_UIREDDOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178E2E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIRedDotRow_TypeDefinitionIndex = 14143;

	class UIRedDotRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Weight; // 0x10
		::System::String* RedDot; // 0x18
		::Il2CppArray<::System::String*>* RedDotChildren; // 0x20
		::System::UInt32 Type; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::UInt32 RedDotID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::UIRedDotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIRedDotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
