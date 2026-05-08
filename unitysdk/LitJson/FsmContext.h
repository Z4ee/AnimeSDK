#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class Lexer; }

#define LITJSON_FSMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A026FD0)

namespace LitJson
{
	inline static constexpr unsigned int FsmContext_TypeDefinitionIndex = 7798;

	class FsmContext : public ::System::Object
	{
	public:
		::LitJson::Lexer* L; // 0x10
		::System::Int32 NextState; // 0x18
		::System::Int32 StateStack; // 0x1C
		::System::Boolean Return; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_FSMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
