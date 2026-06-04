#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_A250797A2E6CFBDB_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0xAEE7DF0)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xAEE74F0)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAEE7D90)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0xAEE7B00)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0xAEE7860)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_70662636528151D7_OFFSET UNITYSDK_OFFSET(0xAEE74A0)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_8EA8401C43312610_OFFSET UNITYSDK_OFFSET(0xAEE7960)
#define CLASS_2_A250797A2E6CFBDB_METHOD_2_EC8BD148390A52E1_OFFSET UNITYSDK_OFFSET(0xAEE7B10)
#define CLASS_2_A250797A2E6CFBDB__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE7CA0)

inline static constexpr unsigned int Class_2_A250797A2E6CFBDB_TypeDefinitionIndex = 46503;

class Class_2_A250797A2E6CFBDB : public ::Class_1_952A7C560FC1CD4B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0x28
	::Class_4_77EB9B0502521934<::EnviromentSystemV2Space::LLGKeyValuePairs*>* Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_70662636528151D7(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_70662636528151D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_2_8EA8401C43312610(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_8EA8401C43312610_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Single Method_2_EC8BD148390A52E1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_EC8BD148390A52E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A250797A2E6CFBDB_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
	}
};
