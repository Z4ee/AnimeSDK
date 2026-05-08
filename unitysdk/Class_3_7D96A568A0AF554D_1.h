#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_7D96A568A0AF554D_1_METHOD_3_5B81D4C788C5B0B8_OFFSET UNITYSDK_OFFSET(0x17852420)
#define CLASS_3_7D96A568A0AF554D_1_METHOD_3_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x17852010)
#define CLASS_3_7D96A568A0AF554D_1_METHOD_3_7E385430C9550361_OFFSET UNITYSDK_OFFSET(0x178526C0)
#define CLASS_3_7D96A568A0AF554D_1_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x178521D0)
#define CLASS_3_7D96A568A0AF554D_1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17852630)
#define CLASS_3_7D96A568A0AF554D_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17852390)
#define CLASS_3_7D96A568A0AF554D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17851ED0)

inline static constexpr unsigned int Class_3_7D96A568A0AF554D_1_TypeDefinitionIndex = 75303;

class Class_3_7D96A568A0AF554D_1 : public ::Class_2_BCA32DB678A03168
{
public:
	::MoleMole::Config::ValueCompareType Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1_METHOD_3_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5B81D4C788C5B0B8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1_METHOD_3_5B81D4C788C5B0B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_7E385430C9550361(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_7D96A568A0AF554D_1_METHOD_3_7E385430C9550361_OFFSET))(this, a1);
	}
};
