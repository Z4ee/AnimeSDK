#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUELITTLEGAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFFE1E0)
#define RPG_GAMECORE_CONSTVALUELITTLEGAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFE350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueLittleGameRow_TypeDefinitionIndex = 12985;

	class ConstValueLittleGameRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::RPG::GameCore::DynamicValue* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUELITTLEGAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConstValueLittleGameRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstValueLittleGameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUELITTLEGAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
