#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEPARAMENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CAE0B0)
#define RPG_GAMECORE_STAGEPARAMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAE1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageParamEntry_TypeDefinitionIndex = 14407;

	class StageParamEntry : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPARAMENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageParamEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageParamEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPARAMENTRY_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
