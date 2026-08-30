#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_4BB9EBAAE168F465;

#define CLASS_2_409B0D1663D08CF3_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x163DDA80)
#define CLASS_2_409B0D1663D08CF3_METHOD_2_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0x163DDF70)
#define CLASS_2_409B0D1663D08CF3_METHOD_2_6F2375DB88761C4E_OFFSET UNITYSDK_OFFSET(0x163DDA30)
#define CLASS_2_409B0D1663D08CF3_METHOD_2_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x163DDD70)
#define CLASS_2_409B0D1663D08CF3_METHOD_2_903A2E42AACC6EAB_OFFSET UNITYSDK_OFFSET(0x163DDE70)
#define CLASS_2_409B0D1663D08CF3_METHOD_2_EC8BD148390A52E1_OFFSET UNITYSDK_OFFSET(0x163DDF80)
#define CLASS_2_409B0D1663D08CF3__CTOR_OFFSET UNITYSDK_OFFSET(0x163DE110)

inline static constexpr unsigned int Class_2_409B0D1663D08CF3_TypeDefinitionIndex = 49748;

class Class_2_409B0D1663D08CF3 : public ::Class_1_952A7C560FC1CD4B
{
public:
	::Class_4_4BB9EBAAE168F465<::EnviromentSystemV2Space::LLGKeyValuePairs*>* ABJANJPBHEH; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KKHBIELEAOB; // 0x30
	::System::Boolean AMFHEJMFNJM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6F2375DB88761C4E(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3_METHOD_2_6F2375DB88761C4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3_METHOD_2_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_2_903A2E42AACC6EAB(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3_METHOD_2_903A2E42AACC6EAB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3_METHOD_2_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Single Method_2_EC8BD148390A52E1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_409B0D1663D08CF3_METHOD_2_EC8BD148390A52E1_OFFSET))(this, a1);
	}
};
