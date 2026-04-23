#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESTRINGVALUE_METHOD_4_55E432B5BF15EB34_OFFSET UNITYSDK_OFFSET(0x1873D6E0)
#define RPG_GAMECORE_BYCOMPARESTRINGVALUE_METHOD_4_6FFE7B90C24B7836_OFFSET UNITYSDK_OFFSET(0x1873D7B0)
#define RPG_GAMECORE_BYCOMPARESTRINGVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1873D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStringValue_TypeDefinitionIndex = 21909;

	class ByCompareStringValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 StringValueIndex; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::System::String* CompareValue; // 0x28
		::System::Boolean IgnoreCase; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTRINGVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_55E432B5BF15EB34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStringValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStringValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTRINGVALUE_METHOD_4_55E432B5BF15EB34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FFE7B90C24B7836(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStringValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStringValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTRINGVALUE_METHOD_4_6FFE7B90C24B7836_OFFSET))(a1, a2);
		}
	};
}
