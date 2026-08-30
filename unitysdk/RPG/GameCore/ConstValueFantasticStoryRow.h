#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9B4860)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B4DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueFantasticStoryRow_TypeDefinitionIndex = 11455;

	class ConstValueFantasticStoryRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConstValueFantasticStoryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConstValueFantasticStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
