#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessboardTextureSheetTagsData; }
namespace System { class Action; }

#define CLASS_1_521A1285DEACFBB3_CLASS_1_8816E1ACD705B033_METHOD_1_974DEB07D75F1FA0_OFFSET UNITYSDK_OFFSET(0x13F77DF0)
#define CLASS_1_521A1285DEACFBB3_CLASS_1_8816E1ACD705B033__CTOR_OFFSET UNITYSDK_OFFSET(0x13F77DE0)

inline static constexpr unsigned int Class_1_521A1285DEACFBB3_Class_1_8816E1ACD705B033_TypeDefinitionIndex = 77251;

class Class_1_521A1285DEACFBB3_Class_1_8816E1ACD705B033 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_CLASS_1_8816E1ACD705B033__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_974DEB07D75F1FA0(::MoleMole::ChessboardTextureSheetTagsData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessboardTextureSheetTagsData*))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_CLASS_1_8816E1ACD705B033_METHOD_1_974DEB07D75F1FA0_OFFSET))(this, a1);
	}
};
