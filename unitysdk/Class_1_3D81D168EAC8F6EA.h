#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }

#define CLASS_1_3D81D168EAC8F6EA_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x158E2DE0)
#define CLASS_1_3D81D168EAC8F6EA_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x158E2E30)
#define CLASS_1_3D81D168EAC8F6EA__CTOR_OFFSET UNITYSDK_OFFSET(0x158E2EA0)

inline static constexpr unsigned int Class_1_3D81D168EAC8F6EA_TypeDefinitionIndex = 77337;

class Class_1_3D81D168EAC8F6EA : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::MoleMole::TextureSheetSkipFrameParam* Field_1_6; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::MoleMole::HollowPieceBlendMode Field_1_7; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Boolean Field_1_0; // 0x2C
	::System::Nullable_1<::System::Single> Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D81D168EAC8F6EA__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D81D168EAC8F6EA_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D81D168EAC8F6EA_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
