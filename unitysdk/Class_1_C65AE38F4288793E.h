#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F425DCC0454CF821.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C65AE38F4288793E_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x7792430)
#define CLASS_1_C65AE38F4288793E_METHOD_1_524DAA84A84DF7B3_OFFSET UNITYSDK_OFFSET(0x7792470)
#define CLASS_1_C65AE38F4288793E_METHOD_1_63BD5138385D050A_OFFSET UNITYSDK_OFFSET(0x7792690)
#define CLASS_1_C65AE38F4288793E_METHOD_1_88BA70A9B47C43E4_OFFSET UNITYSDK_OFFSET(0x77928E0)
#define CLASS_1_C65AE38F4288793E__CTOR_OFFSET UNITYSDK_OFFSET(0x7792600)

inline static constexpr unsigned int Class_1_C65AE38F4288793E_TypeDefinitionIndex = 80137;

class Class_1_C65AE38F4288793E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C65AE38F4288793E__CTOR_OFFSET))(this);
	}

	::Enum_3_F425DCC0454CF821 Method_1_49AC00594530B714()
	{
		return ((::Enum_3_F425DCC0454CF821(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C65AE38F4288793E_METHOD_1_49AC00594530B714_OFFSET))(this);
	}

	::System::Void Method_1_524DAA84A84DF7B3(::MoleMole::UIBabeltowerContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + CLASS_1_C65AE38F4288793E_METHOD_1_524DAA84A84DF7B3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_63BD5138385D050A(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C65AE38F4288793E_METHOD_1_63BD5138385D050A_OFFSET))(this, a1);
	}

	::System::Void Method_1_88BA70A9B47C43E4(::MoleMole::UIBabeltowerContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + CLASS_1_C65AE38F4288793E_METHOD_1_88BA70A9B47C43E4_OFFSET))(this, a1);
	}
};
