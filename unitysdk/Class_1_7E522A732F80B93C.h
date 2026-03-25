#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_7E522A732F80B93C_METHOD_1_9A97CC9BA4751B18_OFFSET UNITYSDK_OFFSET(0x16B84550)
#define CLASS_1_7E522A732F80B93C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B84820)

inline static constexpr unsigned int Class_1_7E522A732F80B93C_TypeDefinitionIndex = 12971;

class Class_1_7E522A732F80B93C : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_3; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::RPG::Client::TextID Field_1_4; // 0x28
	::RPG::GameCore::FixPoint Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E522A732F80B93C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_9A97CC9BA4751B18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_7E522A732F80B93C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_7E522A732F80B93C*&))((::PBYTE)hIl2Cpp + CLASS_1_7E522A732F80B93C_METHOD_1_9A97CC9BA4751B18_OFFSET))(a1, a2);
	}
};
