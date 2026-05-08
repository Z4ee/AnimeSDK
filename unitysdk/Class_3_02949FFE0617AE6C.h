#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Class_2_7D1C3866B99AF44C.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_1_OFFSET UNITYSDK_OFFSET(0x122A57E0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x122A4B90)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x122A4760)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x122A46D0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_C4697BD0C46DB624_OFFSET UNITYSDK_OFFSET(0x122A53F0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x122A4A40)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x122A46C0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x122A46B0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F8D2832D7446090E_OFFSET UNITYSDK_OFFSET(0x122A4C60)
#define CLASS_3_02949FFE0617AE6C__CTOR_OFFSET UNITYSDK_OFFSET(0x122A4670)

inline static constexpr unsigned int Class_3_02949FFE0617AE6C_TypeDefinitionIndex = 38215;

class Class_3_02949FFE0617AE6C : public ::Class_2_7D1C3866B99AF44C<::MoleMole::HollowChessboard::SceneAnimRenderSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_3_2; // 0x38
	::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType> Field_3_0; // 0x40

	::System::Void _ctor(::MoleMole::HollowChessboard::SceneAnimRenderSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689 Method_3_F8D2832D7446090E()
	{
		return ((::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_F8D2832D7446090E_OFFSET))(this);
	}

	::System::Void Method_3_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_3_C4697BD0C46DB624(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_C4697BD0C46DB624_OFFSET))(this, a1);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_06A2B758FCB8A24E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_1_OFFSET))(this);
	}

	::System::Boolean Method_3_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_50CCDD1FE0CC143C_OFFSET))(this);
	}
};
