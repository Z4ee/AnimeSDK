#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_2_73836654F8931C75;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_7F26247A2BD4E5F4_METHOD_3_3A985CE13188C42B_OFFSET UNITYSDK_OFFSET(0x14320800)
#define CLASS_3_7F26247A2BD4E5F4_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x14320520)
#define CLASS_3_7F26247A2BD4E5F4_METHOD_3_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x143202C0)
#define CLASS_3_7F26247A2BD4E5F4_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14320770)
#define CLASS_3_7F26247A2BD4E5F4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143206E0)
#define CLASS_3_7F26247A2BD4E5F4__CTOR_OFFSET UNITYSDK_OFFSET(0x14320180)

inline static constexpr unsigned int Class_3_7F26247A2BD4E5F4_TypeDefinitionIndex = 38982;

class Class_3_7F26247A2BD4E5F4 : public ::Class_2_BCA32DB678A03168
{
public:
	::Class_2_73836654F8931C75* Field_3_1; // 0x38
	::MoleMole::Config::ValueCompareType Field_3_0; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7F26247A2BD4E5F4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F26247A2BD4E5F4_METHOD_3_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F26247A2BD4E5F4_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F26247A2BD4E5F4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F26247A2BD4E5F4_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_3A985CE13188C42B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_7F26247A2BD4E5F4_METHOD_3_3A985CE13188C42B_OFFSET))(this, a1);
	}
};
