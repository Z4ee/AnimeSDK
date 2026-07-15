#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_D47ED7BCED4913BA_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0xBBE7530)
#define CLASS_3_D47ED7BCED4913BA_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0xBBE7570)
#define CLASS_3_D47ED7BCED4913BA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE7560)

inline static constexpr unsigned int Class_3_D47ED7BCED4913BA_TypeDefinitionIndex = 9919;

class Class_3_D47ED7BCED4913BA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D47ED7BCED4913BA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D47ED7BCED4913BA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D47ED7BCED4913BA*&))((::PBYTE)hIl2Cpp + CLASS_3_D47ED7BCED4913BA_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D47ED7BCED4913BA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D47ED7BCED4913BA*))((::PBYTE)hIl2Cpp + CLASS_3_D47ED7BCED4913BA_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
