#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_DFC0757162C8CE99;
namespace MoleMole::HollowChessboard { class NpcTextureBehaviorSection; }

#define CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x11768350)
#define CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x11767F80)
#define CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x11768490)
#define CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x11768210)
#define CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x117682B0)
#define CLASS_3_0BD6CBEE7A7B8E96__CTOR_OFFSET UNITYSDK_OFFSET(0x11767F60)

inline static constexpr unsigned int Class_3_0BD6CBEE7A7B8E96_TypeDefinitionIndex = 64035;

class Class_3_0BD6CBEE7A7B8E96 : public ::Class_2_1158E557A8EC08C4<::MoleMole::HollowChessboard::NpcTextureBehaviorSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28
	::MoleMole::HollowChessboard::NpcTextureBehaviorSection* Field_3_1; // 0x38

	::System::Void _ctor(::MoleMole::HollowChessboard::NpcTextureBehaviorSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::NpcTextureBehaviorSection*))((::PBYTE)hIl2Cpp + CLASS_3_0BD6CBEE7A7B8E96__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_6516B39957C2E680(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_6516B39957C2E680_OFFSET))(this, a1);
	}

	::System::Void Method_3_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_3_A8458C1526636349(::Class_1_DFC0757162C8CE99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFC0757162C8CE99*))((::PBYTE)hIl2Cpp + CLASS_3_0BD6CBEE7A7B8E96_METHOD_3_A8458C1526636349_OFFSET))(this, a1);
	}
};
