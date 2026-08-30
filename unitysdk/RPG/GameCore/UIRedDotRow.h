#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIREDDOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61D1B0)
#define RPG_GAMECORE_UIREDDOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61DC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIRedDotRow_TypeDefinitionIndex = 15231;

	class UIRedDotRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Weight; // 0x10
		::System::String* RedDot; // 0x18
		::Il2CppArray<::System::String*>* RedDotChildren; // 0x20
		::System::UInt32 RedDotID; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::UInt32 Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIRedDotRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIRedDotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
