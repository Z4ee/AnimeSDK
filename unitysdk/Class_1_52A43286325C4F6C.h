#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_149C467017BF6C9E.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"
#include "unitysdk/Struct_2_A840136A4E657746_3.h"
#include "unitysdk/Struct_2_A840136A4E657746_4.h"
#include "unitysdk/Struct_2_FA0144622E908E66_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define CLASS_1_52A43286325C4F6C_METHOD_1_2B41E301723A7431_OFFSET UNITYSDK_OFFSET(0x11F03DB0)
#define CLASS_1_52A43286325C4F6C_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x11F02C70)
#define CLASS_1_52A43286325C4F6C_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x11F03210)
#define CLASS_1_52A43286325C4F6C_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x11F03B10)
#define CLASS_1_52A43286325C4F6C_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x11F03470)
#define CLASS_1_52A43286325C4F6C_METHOD_1_FBA744CE7479F95C_OFFSET UNITYSDK_OFFSET(0x11F02F70)
#define CLASS_1_52A43286325C4F6C_METHOD_1_FE8534065DD0DB46_OFFSET UNITYSDK_OFFSET(0x11F03CF0)
#define CLASS_1_52A43286325C4F6C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F03120)

inline static constexpr unsigned int Class_1_52A43286325C4F6C_TypeDefinitionIndex = 57721;

class Class_1_52A43286325C4F6C : public ::System::Object
{
public:
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_0; // 0x10
	::Struct_2_A840136A4E657746 Field_1_6; // 0x18
	::System::Single Field_1_9; // 0x24
	::Struct_2_A840136A4E657746_4 Field_1_5; // 0x28
	::Struct_2_11FD83788053949F Field_1_4; // 0x34
	::Struct_2_A840136A4E657746_3 Field_1_7; // 0x40
	::Struct_2_FA0144622E908E66_1 Field_1_1; // 0x4C
	::Struct_2_149C467017BF6C9E Field_1_3; // 0x58
	::System::Boolean Field_1_2; // 0x64
	::System::Single Field_1_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_FBA744CE7479F95C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_FBA744CE7479F95C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Boolean Method_1_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_B7592B2BDF345A00_OFFSET))(this);
	}

	::System::Void Method_1_FE8534065DD0DB46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_FE8534065DD0DB46_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2B41E301723A7431()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_2B41E301723A7431_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A43286325C4F6C_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}
};
