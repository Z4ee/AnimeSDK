#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessboardTextureSheetTagsData; }
namespace System { class Action; }

#define CLASS_1_521A1285DEACFBB3_CLASS_1_1F22BE64F5C0BC03_METHOD_1_1C53FEAEFC46020B_OFFSET UNITYSDK_OFFSET(0x128DFE90)
#define CLASS_1_521A1285DEACFBB3_CLASS_1_1F22BE64F5C0BC03__CTOR_OFFSET UNITYSDK_OFFSET(0x128DFE80)

inline static constexpr unsigned int Class_1_521A1285DEACFBB3_Class_1_1F22BE64F5C0BC03_TypeDefinitionIndex = 68903;

class Class_1_521A1285DEACFBB3_Class_1_1F22BE64F5C0BC03 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_CLASS_1_1F22BE64F5C0BC03__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C53FEAEFC46020B(::MoleMole::ChessboardTextureSheetTagsData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessboardTextureSheetTagsData*))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_CLASS_1_1F22BE64F5C0BC03_METHOD_1_1C53FEAEFC46020B_OFFSET))(this, a1);
	}
};
