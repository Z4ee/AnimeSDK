#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUECOMMONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17130980)
#define RPG_GAMECORE_CONSTVALUECOMMONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17131080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueCommonRow_TypeDefinitionIndex = 11936;

	class ConstValueCommonRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ConstValueCommonRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstValueCommonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECOMMONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
