#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_99CEB9374FC46B1A;
class Class_3_5F8DAA47ACDB7251;
class Class_3_DEC5D7C3880C577B;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }

#define CLASS_1_640E953D4D109F65_METHOD_1_61C4747286BDC5DC_OFFSET UNITYSDK_OFFSET(0x1570B2B0)
#define CLASS_1_640E953D4D109F65_METHOD_1_75F44C212D6D8352_OFFSET UNITYSDK_OFFSET(0x1570B750)
#define CLASS_1_640E953D4D109F65_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x1570BDA0)
#define CLASS_1_640E953D4D109F65_METHOD_1_87236773FA97AC36_OFFSET UNITYSDK_OFFSET(0x1570AFD0)
#define CLASS_1_640E953D4D109F65_METHOD_1_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x1570B1C0)
#define CLASS_1_640E953D4D109F65_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x1570B6C0)
#define CLASS_1_640E953D4D109F65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1570AFC0)
#define CLASS_1_640E953D4D109F65__CTOR_OFFSET UNITYSDK_OFFSET(0x1570AFB0)

inline static constexpr unsigned int Class_1_640E953D4D109F65_TypeDefinitionIndex = 70464;

class Class_1_640E953D4D109F65 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65_TypeDefinitionIndex)->GetStaticField(0xC3B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65__CCTOR_OFFSET))();
	}

	::System::Void Method_1_87236773FA97AC36(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_87236773FA97AC36_OFFSET))(this, a1);
	}

	static ::MoleMole::InLevelAvatarDataItem* Method_1_61C4747286BDC5DC(::Class_3_5F8DAA47ACDB7251* a1, ::MoleMole::AvatarInitData* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::Class_3_5F8DAA47ACDB7251*, ::MoleMole::AvatarInitData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_61C4747286BDC5DC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::Class_2_99CEB9374FC46B1A* Method_1_DCEC38F05597CB7D()
	{
		return ((::Class_2_99CEB9374FC46B1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_DCEC38F05597CB7D_OFFSET))(this);
	}

	::System::Void Method_1_75F44C212D6D8352(::Class_3_DEC5D7C3880C577B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DEC5D7C3880C577B*))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_75F44C212D6D8352_OFFSET))(this, a1);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}
};
