#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_2_839AA5AAC790CCDA;
class Class_4_DA19DD65175B97CF;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_4_7022B0E8C582B6B1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x187B7590)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_2038CB603E452C23_OFFSET UNITYSDK_OFFSET(0x187B7830)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x187B7780)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x187B7820)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x187B7790)
#define CLASS_4_7022B0E8C582B6B1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x187B7660)
#define CLASS_4_7022B0E8C582B6B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x187B75E0)
#define CLASS_4_7022B0E8C582B6B1__CTOR_OFFSET UNITYSDK_OFFSET(0x187B76C0)

inline static constexpr unsigned int Class_4_7022B0E8C582B6B1_TypeDefinitionIndex = 71033;

class Class_4_7022B0E8C582B6B1 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x204; // 0x0
	::Class_2_839AA5AAC790CCDA* Field_4_1; // 0x50
	::Class_4_DA19DD65175B97CF* Field_4_7; // 0x58
	::MoleMole::UIHollowChessPieceParticle* Field_4_6; // 0x60
	::MoleMole::UIHollowChessPieceParticle* Field_4_4; // 0x68
	::MoleMole::UIHollowChessPieceParticle* Field_4_5; // 0x70
	::MoleMole::HollowChessboard::HollowEntity* Field_4_8; // 0x78
	::System::Boolean Field_4_3; // 0x80
	::System::Boolean Field_4_2; // 0x81

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_ONCLEAN_OFFSET))(this);
	}

	::Class_2_839AA5AAC790CCDA* Method_4_43A46E5F9FAC62B8()
	{
		return ((::Class_2_839AA5AAC790CCDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_4_58BA0C8308C8127F(::Class_2_839AA5AAC790CCDA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_839AA5AAC790CCDA*))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	static ::Class_4_7022B0E8C582B6B1* Method_4_2038CB603E452C23()
	{
		return ((::Class_4_7022B0E8C582B6B1*(*)())((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_2038CB603E452C23_OFFSET))();
	}
};
