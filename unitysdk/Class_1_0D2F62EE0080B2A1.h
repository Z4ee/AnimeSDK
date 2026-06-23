#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8C5B5B31A78ED626.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class LightRenderConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0D2F62EE0080B2A1_METHOD_1_29B768535CA8988F_OFFSET UNITYSDK_OFFSET(0x12803B10)
#define CLASS_1_0D2F62EE0080B2A1__CTOR_OFFSET UNITYSDK_OFFSET(0x12803A80)

inline static constexpr unsigned int Class_1_0D2F62EE0080B2A1_TypeDefinitionIndex = 81192;

class Class_1_0D2F62EE0080B2A1 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::LightRenderConfig* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_8C5B5B31A78ED626, ::MoleMole::HollowChessboard::LightRenderConfig*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D2F62EE0080B2A1__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::LightRenderConfig* Method_1_29B768535CA8988F(::Enum_3_8C5B5B31A78ED626 a1)
	{
		return ((::MoleMole::HollowChessboard::LightRenderConfig*(*)(::PVOID, ::Enum_3_8C5B5B31A78ED626))((::PBYTE)hIl2Cpp + CLASS_1_0D2F62EE0080B2A1_METHOD_1_29B768535CA8988F_OFFSET))(this, a1);
	}
};
