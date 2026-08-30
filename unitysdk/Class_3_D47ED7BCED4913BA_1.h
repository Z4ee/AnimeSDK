#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_D47ED7BCED4913BA_1_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1C951B60)
#define CLASS_3_D47ED7BCED4913BA_1_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1C951BA0)
#define CLASS_3_D47ED7BCED4913BA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C951B90)

inline static constexpr unsigned int Class_3_D47ED7BCED4913BA_1_TypeDefinitionIndex = 19653;

class Class_3_D47ED7BCED4913BA_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single LNENLJCDGID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D47ED7BCED4913BA_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D47ED7BCED4913BA_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D47ED7BCED4913BA_1*&))((::PBYTE)hIl2Cpp + CLASS_3_D47ED7BCED4913BA_1_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D47ED7BCED4913BA_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D47ED7BCED4913BA_1*))((::PBYTE)hIl2Cpp + CLASS_3_D47ED7BCED4913BA_1_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
