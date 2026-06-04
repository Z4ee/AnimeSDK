#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }

#define CLASS_1_8CE6899CED4FD20C_METHOD_1_341C0C371CB85F17_OFFSET UNITYSDK_OFFSET(0xA6C8070)
#define CLASS_1_8CE6899CED4FD20C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6C8120)
#define CLASS_1_8CE6899CED4FD20C_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA6C7E00)
#define CLASS_1_8CE6899CED4FD20C_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xA6C7D20)
#define CLASS_1_8CE6899CED4FD20C_METHOD_1_792D5CCAFC2D1A65_OFFSET UNITYSDK_OFFSET(0xA6C7C70)
#define CLASS_1_8CE6899CED4FD20C_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xA6C7F90)
#define CLASS_1_8CE6899CED4FD20C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C7D10)

inline static constexpr unsigned int Class_1_8CE6899CED4FD20C_TypeDefinitionIndex = 62058;

class Class_1_8CE6899CED4FD20C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::NavMap::IMapDataSource* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::RPG::GameCore::CompareType Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C__CTOR_OFFSET))(this);
	}

	static ::Class_1_8CE6899CED4FD20C* Method_1_792D5CCAFC2D1A65(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2)
	{
		return ((::Class_1_8CE6899CED4FD20C*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C_METHOD_1_792D5CCAFC2D1A65_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_341C0C371CB85F17(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C_METHOD_1_341C0C371CB85F17_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CE6899CED4FD20C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
