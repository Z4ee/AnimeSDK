#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_AE36917A57939791.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_01A715AD62081B7F;
class Class_3_D53CAABC6A35163E;

#define CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09_METHOD_1_D91156C8F43A4C56_OFFSET UNITYSDK_OFFSET(0x12851DA0)
#define CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09__CCTOR_OFFSET UNITYSDK_OFFSET(0x12851D30)
#define CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12851C60)
#define CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09__CTOR_OFFSET UNITYSDK_OFFSET(0x12851A60)

inline static constexpr unsigned int Class_1_360A6A3FE351890B_Class_1_ED6627CA7A0EFA09_TypeDefinitionIndex = 65223;

class Class_1_360A6A3FE351890B_Class_1_ED6627CA7A0EFA09 : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::HollowCell* StaticGet_Field_1_0()
	{
		return (::MoleMole::HollowChessboard::HollowCell*)Il2CppClass::FromTypeDefinitionIndex(Class_1_360A6A3FE351890B_Class_1_ED6627CA7A0EFA09_TypeDefinitionIndex)->GetStaticField(0x11700);
	}
	::Class_3_01A715AD62081B7F* Field_1_11; // 0x10
	::Class_3_D53CAABC6A35163E* Field_1_10; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Single Field_1_8; // 0x24
	::System::Single Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_9; // 0x2C
	::System::Single Field_1_6; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Single Field_1_1; // 0x40
	::UnityEngine::Vector3 Field_1_3; // 0x44
	::Struct_2_AE36917A57939791 Field_1_12; // 0x50
	::UnityEngine::Quaternion Field_1_4; // 0x64

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09__CTOR_1_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D91156C8F43A4C56(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_ED6627CA7A0EFA09_METHOD_1_D91156C8F43A4C56_OFFSET))(this, a1, a2);
	}
};
