#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_5;
namespace RPG::Client { class LocalizedText; }

#define CLASS_2_D1E4B32B0CF1BCCC_METHOD_2_460F6ECCAA67A759_OFFSET UNITYSDK_OFFSET(0x141B2470)
#define CLASS_2_D1E4B32B0CF1BCCC__CTOR_OFFSET UNITYSDK_OFFSET(0x141B2580)
#define CLASS_2_D1E4B32B0CF1BCCC__ONBIND_OFFSET UNITYSDK_OFFSET(0x141B23F0)
#define CLASS_2_D1E4B32B0CF1BCCC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x141B25B0)

inline static constexpr unsigned int Class_2_D1E4B32B0CF1BCCC_TypeDefinitionIndex = 66924;

class Class_2_D1E4B32B0CF1BCCC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1E4B32B0CF1BCCC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1E4B32B0CF1BCCC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_460F6ECCAA67A759(::Class_1_6CE70F4211D79CD5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_5*))((::PBYTE)hIl2Cpp + CLASS_2_D1E4B32B0CF1BCCC_METHOD_2_460F6ECCAA67A759_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1E4B32B0CF1BCCC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
