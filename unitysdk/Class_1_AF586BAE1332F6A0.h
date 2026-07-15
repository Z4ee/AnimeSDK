#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CatGod { class CatGodGetShelfWindow; }

#define CLASS_1_AF586BAE1332F6A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145682E0)
#define CLASS_1_AF586BAE1332F6A0_METHOD_1_128A47F5D68CE99B_OFFSET UNITYSDK_OFFSET(0x14568380)
#define CLASS_1_AF586BAE1332F6A0_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x14568320)
#define CLASS_1_AF586BAE1332F6A0__CTOR_OFFSET UNITYSDK_OFFSET(0x145684B0)

inline static constexpr unsigned int Class_1_AF586BAE1332F6A0_TypeDefinitionIndex = 76687;

class Class_1_AF586BAE1332F6A0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF586BAE1332F6A0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF586BAE1332F6A0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF586BAE1332F6A0_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::RPG::Client::CatGod::CatGodGetShelfWindow* Method_1_128A47F5D68CE99B()
	{
		return ((::RPG::Client::CatGod::CatGodGetShelfWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF586BAE1332F6A0_METHOD_1_128A47F5D68CE99B_OFFSET))(this);
	}
};
