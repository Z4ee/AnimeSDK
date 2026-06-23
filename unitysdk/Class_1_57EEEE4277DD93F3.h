#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_57EEEE4277DD93F3_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x14F3B900)
#define CLASS_1_57EEEE4277DD93F3_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x14F3B960)
#define CLASS_1_57EEEE4277DD93F3__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3B9D0)

inline static constexpr unsigned int Class_1_57EEEE4277DD93F3_TypeDefinitionIndex = 50893;

class Class_1_57EEEE4277DD93F3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::UIHollowChessPieceParticle_AttachPointType Field_1_2; // 0x18
	::MoleMole::UIHollowChessPieceParticle_TransformType Field_1_4; // 0x1C
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_1; // 0x21
	::System::Nullable_1<::Foundation::Unreal::FTransform> Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57EEEE4277DD93F3__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57EEEE4277DD93F3_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57EEEE4277DD93F3_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
