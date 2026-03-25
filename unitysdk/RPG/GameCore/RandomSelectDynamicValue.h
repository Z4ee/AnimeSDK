#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_METHOD_3_3304993DCF94BE18_OFFSET UNITYSDK_OFFSET(0x175802F0)
#define RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_METHOD_3_419FEB55404B44EB_OFFSET UNITYSDK_OFFSET(0x17580370)
#define RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17580340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectDynamicValue_TypeDefinitionIndex = 21097;

	class RandomSelectDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueList; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3304993DCF94BE18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_METHOD_3_3304993DCF94BE18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_419FEB55404B44EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_METHOD_3_419FEB55404B44EB_OFFSET))(a1, a2);
		}
	};
}
