#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_B767065E66784854_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1B5E54F0)
#define CLASS_3_B767065E66784854_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1B5E54B0)
#define CLASS_3_B767065E66784854__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E54E0)

inline static constexpr unsigned int Class_3_B767065E66784854_TypeDefinitionIndex = 20693;

class Class_3_B767065E66784854 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B767065E66784854__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B767065E66784854*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B767065E66784854*&))((::PBYTE)hIl2Cpp + CLASS_3_B767065E66784854_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B767065E66784854* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B767065E66784854*))((::PBYTE)hIl2Cpp + CLASS_3_B767065E66784854_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
