#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EAF7984A8FAD6BE4.h"

class Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A;
namespace EnviromentSystemV2Space { class BlendingValBase; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_2CD72A7067203FFF_METHOD_2_DA1A441CB0E4DAC7_OFFSET UNITYSDK_OFFSET(0x1427BD80)
#define CLASS_2_2CD72A7067203FFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1427C340)
#define CLASS_2_2CD72A7067203FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1427C310)

inline static constexpr unsigned int Class_2_2CD72A7067203FFF_TypeDefinitionIndex = 46714;

class Class_2_2CD72A7067203FFF : public ::Class_1_EAF7984A8FAD6BE4
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2CD72A7067203FFF_TypeDefinitionIndex)->GetStaticField(0x25540);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CD72A7067203FFF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2CD72A7067203FFF__CCTOR_OFFSET))();
	}

	static ::Class_1_EAF7984A8FAD6BE4* Method_2_DA1A441CB0E4DAC7(::EnviromentSystemV2Space::BlendingValBase* a1)
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::EnviromentSystemV2Space::BlendingValBase*))((::PBYTE)hIl2Cpp + CLASS_2_2CD72A7067203FFF_METHOD_2_DA1A441CB0E4DAC7_OFFSET))(a1);
	}
};
