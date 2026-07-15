#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MOTIONS_MONOTEXTMOTION_LINEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1955F420)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoTextMotion_LineInfo_TypeDefinitionIndex = 70137;

	class MonoTextMotion_LineInfo : public ::System::Object
	{
	public:
		::System::Int32 StartVisibleCharIndex; // 0x10
		::System::Int32 LineIndex; // 0x14
		::System::Int32 EndVisibleCharIndex; // 0x18
		::System::Int32 NoneRubyTopStrCharacterCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOTEXTMOTION_LINEINFO__CTOR_OFFSET))(this);
		}
	};
}
