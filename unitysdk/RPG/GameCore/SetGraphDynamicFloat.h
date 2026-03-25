#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_64E3530435C22FAA_OFFSET UNITYSDK_OFFSET(0x176CFE50)
#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_D2C851B4AAAF2E58_OFFSET UNITYSDK_OFFSET(0x176CFED0)
#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x176CFEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGraphDynamicFloat_TypeDefinitionIndex = 19028;

	class SetGraphDynamicFloat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean TargetSelf; // 0x20
		::Il2CppArray<::System::UInt32>* TargetIDs; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_64E3530435C22FAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGraphDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_64E3530435C22FAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2C851B4AAAF2E58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_D2C851B4AAAF2E58_OFFSET))(a1, a2);
		}
	};
}
