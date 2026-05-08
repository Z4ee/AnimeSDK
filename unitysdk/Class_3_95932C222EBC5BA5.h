#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_2_0114679E2864BD47;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsEntity; }

#define CLASS_3_95932C222EBC5BA5_AFTERCLEAN_OFFSET UNITYSDK_OFFSET(0x16A2D5E0)
#define CLASS_3_95932C222EBC5BA5_METHOD_3_6168B913122E45BF_OFFSET UNITYSDK_OFFSET(0x16A2D750)
#define CLASS_3_95932C222EBC5BA5_METHOD_3_888EAF38C5DF027B_OFFSET UNITYSDK_OFFSET(0x16A2D840)
#define CLASS_3_95932C222EBC5BA5_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x16A2D650)
#define CLASS_3_95932C222EBC5BA5_METHOD_3_BAC621C4B92C6604_OFFSET UNITYSDK_OFFSET(0x16A2D640)
#define CLASS_3_95932C222EBC5BA5_METHOD_3_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x16A2D6E0)
#define CLASS_3_95932C222EBC5BA5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A2D7A0)
#define CLASS_3_95932C222EBC5BA5_ONADD_OFFSET UNITYSDK_OFFSET(0x16A2D500)
#define CLASS_3_95932C222EBC5BA5__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2D630)

inline static constexpr unsigned int Class_3_95932C222EBC5BA5_TypeDefinitionIndex = 76195;

class Class_3_95932C222EBC5BA5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_ONADD_OFFSET))(this, a1);
	}

	::System::Void AfterClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_AFTERCLEAN_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_3_BAC621C4B92C6604()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_METHOD_3_BAC621C4B92C6604_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::Class_2_0114679E2864BD47* Method_3_BEBC8F4773DC82AA()
	{
		return ((::Class_2_0114679E2864BD47*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_METHOD_3_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_6168B913122E45BF()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_METHOD_3_6168B913122E45BF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_888EAF38C5DF027B(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_95932C222EBC5BA5_METHOD_3_888EAF38C5DF027B_OFFSET))(this, a1);
	}
};
