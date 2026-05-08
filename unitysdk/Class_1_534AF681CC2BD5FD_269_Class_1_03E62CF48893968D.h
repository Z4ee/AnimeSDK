#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_269_Enum_3_8A55E0BCBFEC0E78.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::HollowChessboard { class CellDiffusionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xF23CFE0)
#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D_METHOD_1_6E21175A57A8DF1F_OFFSET UNITYSDK_OFFSET(0xF23CFF0)
#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xF23D050)
#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D__CTOR_OFFSET UNITYSDK_OFFSET(0xF23D040)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_269_Class_1_03E62CF48893968D_TypeDefinitionIndex = 66825;

class Class_1_534AF681CC2BD5FD_269_Class_1_03E62CF48893968D : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::CellDiffusionConfig* Field_1_6; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x20
	::System::Single Field_1_7; // 0x28
	::System::Single Field_1_3; // 0x2C
	::MoleMole::Vector2Int Field_1_1; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType Field_1_4; // 0x3C
	::System::Single Field_1_8; // 0x40
	::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> Field_1_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_534AF681CC2BD5FD_269_Enum_3_8A55E0BCBFEC0E78 Method_1_6E21175A57A8DF1F()
	{
		return ((::Class_1_534AF681CC2BD5FD_269_Enum_3_8A55E0BCBFEC0E78(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D_METHOD_1_6E21175A57A8DF1F_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_03E62CF48893968D_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
