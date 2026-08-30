#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_B3A86C68B4F5D00F_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1CC89D00)
#define CLASS_3_B3A86C68B4F5D00F_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x1CC89D40)
#define CLASS_3_B3A86C68B4F5D00F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC89D30)

inline static constexpr unsigned int Class_3_B3A86C68B4F5D00F_TypeDefinitionIndex = 10186;

class Class_3_B3A86C68B4F5D00F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KEHEFLHCENE; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* FENLJGPOGJP; // 0x20
	::System::Boolean DIOGHCPEMMB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A86C68B4F5D00F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B3A86C68B4F5D00F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B3A86C68B4F5D00F*&))((::PBYTE)hIl2Cpp + CLASS_3_B3A86C68B4F5D00F_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B3A86C68B4F5D00F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B3A86C68B4F5D00F*))((::PBYTE)hIl2Cpp + CLASS_3_B3A86C68B4F5D00F_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
