#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUECLIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1712F040)
#define RPG_GAMECORE_CONSTVALUECLIENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17130070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueClientRow_TypeDefinitionIndex = 11934;

	class ConstValueClientRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::RPG::GameCore::DynamicValue* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ConstValueClientRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstValueClientRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
