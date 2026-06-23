#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7045E8E99032C9B3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_AE36917A57939791.h"
#include "unitysdk/UnityEngine/Color.h"

#define CLASS_3_176E0550857A620F_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13196CB0)
#define CLASS_3_176E0550857A620F_METHOD_3_7CB79123E3F0EF3E_OFFSET UNITYSDK_OFFSET(0x13196C50)
#define CLASS_3_176E0550857A620F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13196B50)
#define CLASS_3_176E0550857A620F_METHOD_3_FCC6DA980660C020_OFFSET UNITYSDK_OFFSET(0x13196B90)
#define CLASS_3_176E0550857A620F__CTOR_OFFSET UNITYSDK_OFFSET(0x13196B40)

inline static constexpr unsigned int Class_3_176E0550857A620F_TypeDefinitionIndex = 66471;

class Class_3_176E0550857A620F : public ::Class_2_7045E8E99032C9B3
{
public:
	::Struct_2_AE36917A57939791 Field_3_0; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_176E0550857A620F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_176E0550857A620F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_FCC6DA980660C020(::Struct_2_AE36917A57939791& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AE36917A57939791&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_176E0550857A620F_METHOD_3_FCC6DA980660C020_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7CB79123E3F0EF3E(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_3_176E0550857A620F_METHOD_3_7CB79123E3F0EF3E_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_176E0550857A620F_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
