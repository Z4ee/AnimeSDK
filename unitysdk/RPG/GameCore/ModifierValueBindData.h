#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierValueBindType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFIERVALUEBINDDATA_METHOD_2_7394BA234853589D_OFFSET UNITYSDK_OFFSET(0x1994DF30)
#define RPG_GAMECORE_MODIFIERVALUEBINDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1994E0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierValueBindData_TypeDefinitionIndex = 17328;

	class ModifierValueBindData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierValueBindType BindType; // 0x10
		::RPG::GameCore::StringHash DynamicKey; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERVALUEBINDDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7394BA234853589D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierValueBindData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierValueBindData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERVALUEBINDDATA_METHOD_2_7394BA234853589D_OFFSET))(a1, a2);
		}
	};
}
