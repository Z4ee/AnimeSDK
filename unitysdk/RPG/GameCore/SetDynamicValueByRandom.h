#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E26440)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_METHOD_4_90F561B106F30766_OFFSET UNITYSDK_OFFSET(0x18E260E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_METHOD_4_C2DB25C86BAFAF87_OFFSET UNITYSDK_OFFSET(0x18E261B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRandom_TypeDefinitionIndex = 22827;

	class SetDynamicValueByRandom : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Boolean IsInt; // 0x24
		::RPG::GameCore::DynamicFloat* Min; // 0x28
		::RPG::GameCore::DynamicFloat* Max; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90F561B106F30766(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRandom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRandom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_METHOD_4_90F561B106F30766_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2DB25C86BAFAF87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRandom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRandom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_METHOD_4_C2DB25C86BAFAF87_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
