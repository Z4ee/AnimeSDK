#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A422F8F3BB2FEE61_METHOD_1_92A43999FC3FD92F_OFFSET UNITYSDK_OFFSET(0x187924C0)
#define CLASS_1_A422F8F3BB2FEE61__CTOR_OFFSET UNITYSDK_OFFSET(0x18792A60)

inline static constexpr unsigned int Class_1_A422F8F3BB2FEE61_TypeDefinitionIndex = 13205;

class Class_1_A422F8F3BB2FEE61 : public ::System::Object
{
public:
	::System::String* Field_1_15; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_4; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_9; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x28
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_10; // 0x38
	::System::String* Field_1_14; // 0x40
	::Il2CppArray<::System::UInt32>* Field_1_11; // 0x48
	::Il2CppArray<::System::UInt32>* Field_1_12; // 0x50
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x58
	::System::UInt32 Field_1_13; // 0x60
	::System::UInt32 Field_1_3; // 0x64
	::RPG::GameCore::LimaoNewsOfficeSurveyType Field_1_1; // 0x68
	::System::UInt32 Field_1_7; // 0x6C
	::System::Boolean Field_1_8; // 0x70
	::System::UInt32 Field_1_0; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422F8F3BB2FEE61__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_92A43999FC3FD92F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A422F8F3BB2FEE61*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A422F8F3BB2FEE61*&))((::PBYTE)hIl2Cpp + CLASS_1_A422F8F3BB2FEE61_METHOD_1_92A43999FC3FD92F_OFFSET))(a1, a2);
	}
};
