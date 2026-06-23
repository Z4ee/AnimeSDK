#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_260.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define CLASS_3_D31C27CCD9665615_METHOD_3_B0A0448CAF43BDB2_OFFSET UNITYSDK_OFFSET(0x134B1420)
#define CLASS_3_D31C27CCD9665615_METHOD_3_DCE0A903A9E7E199_OFFSET UNITYSDK_OFFSET(0x134B1480)
#define CLASS_3_D31C27CCD9665615__CTOR_1_OFFSET UNITYSDK_OFFSET(0x134B13F0)
#define CLASS_3_D31C27CCD9665615__CTOR_OFFSET UNITYSDK_OFFSET(0x134B13C0)

inline static constexpr unsigned int Class_3_D31C27CCD9665615_TypeDefinitionIndex = 68860;

class Class_3_D31C27CCD9665615 : public ::Class_2_534AF681CC2BD5FD_260<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>
{
public:
	::System::Int32 Field_3_1; // 0x28
	::System::Int32 Field_3_0; // 0x2C

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D31C27CCD9665615__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D31C27CCD9665615__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B0A0448CAF43BDB2(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_D31C27CCD9665615_METHOD_3_B0A0448CAF43BDB2_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCE0A903A9E7E199(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_D31C27CCD9665615_METHOD_3_DCE0A903A9E7E199_OFFSET))(this, a1);
	}
};
