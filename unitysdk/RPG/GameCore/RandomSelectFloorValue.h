#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_RANDOMSELECTFLOORVALUE_METHOD_3_1CACD0FC53D3EA34_OFFSET UNITYSDK_OFFSET(0x175805B0)
#define RPG_GAMECORE_RANDOMSELECTFLOORVALUE_METHOD_3_DFBFA383242A104F_OFFSET UNITYSDK_OFFSET(0x17580530)
#define RPG_GAMECORE_RANDOMSELECTFLOORVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17580580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectFloorValue_TypeDefinitionIndex = 19510;

	class RandomSelectFloorValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicString*>* FloorValueKeyList; // 0x18
		::System::Boolean IsClientValue; // 0x20
		::System::Boolean RandomZero; // 0x21
		::RPG::GameCore::DynamicString* CustomStringPrefix; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTFLOORVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DFBFA383242A104F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectFloorValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectFloorValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTFLOORVALUE_METHOD_3_DFBFA383242A104F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CACD0FC53D3EA34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectFloorValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectFloorValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTFLOORVALUE_METHOD_3_1CACD0FC53D3EA34_OFFSET))(a1, a2);
		}
	};
}
