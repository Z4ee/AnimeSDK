#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0AAADAEEF9BF0611_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C4EE390)
#define CLASS_1_0AAADAEEF9BF0611_METHOD_1_D361174EDC1E004B_OFFSET UNITYSDK_OFFSET(0x1C4EE1E0)
#define CLASS_1_0AAADAEEF9BF0611__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EE410)

inline static constexpr unsigned int Class_1_0AAADAEEF9BF0611_TypeDefinitionIndex = 42074;

class Class_1_0AAADAEEF9BF0611 : public ::System::Object
{
public:
	::System::String* NMMKDFFHOLL; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* KBEPAIAFLHL; // 0x20
	::System::Boolean IEHMINGBCOH; // 0x28
	::System::Boolean HCBMABMLFPG; // 0x29
	::System::Single MJLPOEMDNHD; // 0x2C
	::RPG::GameCore::ChenLingFesToastStyleType KICGKFDELJP; // 0x30
	::System::Single KIPAGNCANAJ; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAADAEEF9BF0611__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D361174EDC1E004B(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::RPG::GameCore::ChenLingFesToastStyleType a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::RPG::GameCore::ChenLingFesToastStyleType, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AAADAEEF9BF0611_METHOD_1_D361174EDC1E004B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAADAEEF9BF0611_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
