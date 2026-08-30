#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_B767065E66784854_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1D670250)
#define CLASS_3_B767065E66784854_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1D670210)
#define CLASS_3_B767065E66784854__CTOR_OFFSET UNITYSDK_OFFSET(0x1D670240)

inline static constexpr unsigned int Class_3_B767065E66784854_TypeDefinitionIndex = 21249;

class Class_3_B767065E66784854 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GAILDDCMCHP; // 0x18
	::System::String* IHMDPDINEFL; // 0x20
	::System::Boolean JHLNDMMBMJP; // 0x28

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
