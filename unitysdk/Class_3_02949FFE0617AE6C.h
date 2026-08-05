#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_02949FFE0617AE6C_METHOD_3_305BA812E29C43AF_1_OFFSET UNITYSDK_OFFSET(0x1671F430)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_305BA812E29C43AF_OFFSET UNITYSDK_OFFSET(0x1671E7D0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x1671E3A0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1671E310)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_C4697BD0C46DB624_OFFSET UNITYSDK_OFFSET(0x1671F040)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1671E680)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_E93744A7535D83DF_OFFSET UNITYSDK_OFFSET(0x1671E8A0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1671E300)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1671E2F0)
#define CLASS_3_02949FFE0617AE6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1671E2B0)

inline static constexpr unsigned int Class_3_02949FFE0617AE6C_TypeDefinitionIndex = 80729;

class Class_3_02949FFE0617AE6C : public ::Class_2_1158E557A8EC08C4<::MoleMole::HollowChessboard::SceneAnimRenderSection*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_3_0; // 0x28
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_1; // 0x30
	::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType> Field_3_2; // 0x40

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

	::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689 Method_3_E93744A7535D83DF()
	{
		return ((::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_E93744A7535D83DF_OFFSET))(this);
	}

	::System::Void Method_3_305BA812E29C43AF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_305BA812E29C43AF_OFFSET))(this);
	}

	::System::Void Method_3_C4697BD0C46DB624(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_C4697BD0C46DB624_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_50CCDD1FE0CC143C_OFFSET))(this);
	}

	::System::Void Method_3_305BA812E29C43AF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_305BA812E29C43AF_1_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}
};
