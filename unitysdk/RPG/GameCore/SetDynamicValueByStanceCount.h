#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F7350)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_METHOD_4_8D0660D3225287B9_OFFSET UNITYSDK_OFFSET(0x1D4F71A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_METHOD_4_D04A97F608FDA254_OFFSET UNITYSDK_OFFSET(0x1D4F7160)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStanceCount_TypeDefinitionIndex = 22825;

	class SetDynamicValueByStanceCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D04A97F608FDA254(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStanceCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_METHOD_4_D04A97F608FDA254_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D0660D3225287B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStanceCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_METHOD_4_8D0660D3225287B9_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
