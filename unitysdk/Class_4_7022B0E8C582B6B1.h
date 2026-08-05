#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"

class Class_2_839AA5AAC790CCDA_1;
class Class_4_AC6D98911872E0CE;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_4_7022B0E8C582B6B1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17035CA0)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x17035F40)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x170360E0)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x170360F0)
#define CLASS_4_7022B0E8C582B6B1_METHOD_4_C9796185EB79C68E_OFFSET UNITYSDK_OFFSET(0x17035F50)
#define CLASS_4_7022B0E8C582B6B1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17035D70)
#define CLASS_4_7022B0E8C582B6B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17035CF0)
#define CLASS_4_7022B0E8C582B6B1__CTOR_OFFSET UNITYSDK_OFFSET(0x17035DD0)

inline static constexpr unsigned int Class_4_7022B0E8C582B6B1_TypeDefinitionIndex = 49731;

class Class_4_7022B0E8C582B6B1 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x204; // 0x0
	::Class_4_AC6D98911872E0CE* Field_4_9; // 0x50
	::MoleMole::HollowChessboard::HollowEntity* Field_4_8; // 0x58
	::MoleMole::UIHollowChessPieceParticle* Field_4_10; // 0x60
	::MoleMole::UIHollowChessPieceParticle* Field_4_4; // 0x68
	::Class_2_839AA5AAC790CCDA_1* Field_4_7; // 0x70
	::MoleMole::UIHollowChessPieceParticle* Field_4_11; // 0x78
	::System::Boolean Field_4_5; // 0x80
	::System::Boolean Field_4_6; // 0x81

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

	::Class_2_839AA5AAC790CCDA_1* Method_4_43A46E5F9FAC62B8()
	{
		return ((::Class_2_839AA5AAC790CCDA_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_43A46E5F9FAC62B8_OFFSET))(this);
	}

	static ::Class_4_7022B0E8C582B6B1* Method_4_C9796185EB79C68E()
	{
		return ((::Class_4_7022B0E8C582B6B1*(*)())((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_C9796185EB79C68E_OFFSET))();
	}

	::System::Void Method_4_58BA0C8308C8127F(::Class_2_839AA5AAC790CCDA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_839AA5AAC790CCDA_1*))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7022B0E8C582B6B1_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
