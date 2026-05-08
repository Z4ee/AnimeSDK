#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;

#define CLASS_1_559882C201B3F60A_METHOD_1_182BA737D561CA10_OFFSET UNITYSDK_OFFSET(0x175110C0)
#define CLASS_1_559882C201B3F60A_METHOD_1_52523261B75F8095_OFFSET UNITYSDK_OFFSET(0x17511000)
#define CLASS_1_559882C201B3F60A_METHOD_1_83A6FE948E0549BB_OFFSET UNITYSDK_OFFSET(0x17511190)
#define CLASS_1_559882C201B3F60A__CTOR_OFFSET UNITYSDK_OFFSET(0x175110B0)

inline static constexpr unsigned int Class_1_559882C201B3F60A_TypeDefinitionIndex = 40466;

class Class_1_559882C201B3F60A : public ::System::Object
{
public:
	::Class_1_1EA8435E138F2E03* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559882C201B3F60A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52523261B75F8095(::Class_1_1EA8435E138F2E03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_559882C201B3F60A_METHOD_1_52523261B75F8095_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_182BA737D561CA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_559882C201B3F60A_METHOD_1_182BA737D561CA10_OFFSET))(this);
	}

	::System::Void Method_1_83A6FE948E0549BB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_559882C201B3F60A_METHOD_1_83A6FE948E0549BB_OFFSET))(this, a1);
	}
};
