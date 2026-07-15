#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FLOORSAVEDVALUECONFIG_METHOD_2_F2271CE222D36C8D_OFFSET UNITYSDK_OFFSET(0x1BEBCD80)
#define RPG_GAMECORE_FLOORSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBD070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSavedValueConfig_TypeDefinitionIndex = 17553;

	class FloorSavedValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt16 ID; // 0x10
		::System::Boolean IsDelete; // 0x12
		::System::String* Name; // 0x18
		::System::Int16 DefaultValue; // 0x20
		::Il2CppArray<::System::Int16>* AllowedValues; // 0x28
		::System::Int16 MaxValue; // 0x30
		::System::Int16 MinValue; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F2271CE222D36C8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUECONFIG_METHOD_2_F2271CE222D36C8D_OFFSET))(a1, a2);
		}
	};
}
