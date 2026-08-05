#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9876AE41D0DC17C7;
namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }

#define CLASS_3_5CAEC8A25D4CB154_METHOD_3_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0x156B9BA0)
#define CLASS_3_5CAEC8A25D4CB154_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x156B9A60)
#define CLASS_3_5CAEC8A25D4CB154_METHOD_3_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x156B9690)
#define CLASS_3_5CAEC8A25D4CB154_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x156B9920)
#define CLASS_3_5CAEC8A25D4CB154_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x156B99C0)
#define CLASS_3_5CAEC8A25D4CB154__CTOR_OFFSET UNITYSDK_OFFSET(0x156B9670)

inline static constexpr unsigned int Class_3_5CAEC8A25D4CB154_TypeDefinitionIndex = 65721;

class Class_3_5CAEC8A25D4CB154 : public ::Class_2_1158E557A8EC08C4<::MoleMole::HollowChessboard::NpcTextureBehaviorSection*>
{
public:
	::MoleMole::HollowChessboard::NpcTextureBehaviorSection* Field_3_7; // 0x28
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x30

	::System::Void _ctor(::MoleMole::HollowChessboard::NpcTextureBehaviorSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*))((::PBYTE)hIl2Cpp + CLASS_3_5CAEC8A25D4CB154__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5CAEC8A25D4CB154_METHOD_3_8608350DFEDEE4FD_OFFSET))(this, a1);
	}

	::System::Void Method_3_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CAEC8A25D4CB154_METHOD_3_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CAEC8A25D4CB154_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_04B5EDB18FECE00C(::Class_1_9876AE41D0DC17C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*))((::PBYTE)hIl2Cpp + CLASS_3_5CAEC8A25D4CB154_METHOD_3_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CAEC8A25D4CB154_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
