#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_DA7D9B4F9F375F67_OFFSET UNITYSDK_OFFSET(0x1C5FB350)
#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_FBA12263B9F9FB3E_OFFSET UNITYSDK_OFFSET(0x1C5FB3A0)
#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGraphDynamicFloat_TypeDefinitionIndex = 19925;

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

		static ::System::Void Method_3_DA7D9B4F9F375F67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGraphDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_DA7D9B4F9F375F67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBA12263B9F9FB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_METHOD_3_FBA12263B9F9FB3E_OFFSET))(a1, a2);
		}
	};
}
