#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_19AA049BF7E0F882_OFFSET UNITYSDK_OFFSET(0x1872E640)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_1F375432E521458A_OFFSET UNITYSDK_OFFSET(0x1872E570)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGraphDynamicString_TypeDefinitionIndex = 19689;

	class ByCompareGraphDynamicString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1F375432E521458A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_1F375432E521458A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19AA049BF7E0F882(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_19AA049BF7E0F882_OFFSET))(a1, a2);
		}
	};
}
