#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_99CEB9374FC46B1A;
class Class_3_5F8DAA47ACDB7251;
class Class_3_E89408D1986EAEAF;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }

#define CLASS_1_640E953D4D109F65_METHOD_1_61C4747286BDC5DC_OFFSET UNITYSDK_OFFSET(0x19521DA0)
#define CLASS_1_640E953D4D109F65_METHOD_1_675C0FD50C07F350_OFFSET UNITYSDK_OFFSET(0x195221D0)
#define CLASS_1_640E953D4D109F65_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x19522540)
#define CLASS_1_640E953D4D109F65_METHOD_1_8E7D1357398C4F33_OFFSET UNITYSDK_OFFSET(0x195225B0)
#define CLASS_1_640E953D4D109F65_METHOD_1_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x195223C0)
#define CLASS_1_640E953D4D109F65_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x195224B0)
#define CLASS_1_640E953D4D109F65__CCTOR_OFFSET UNITYSDK_OFFSET(0x19521D90)
#define CLASS_1_640E953D4D109F65__CTOR_OFFSET UNITYSDK_OFFSET(0x19521D80)

inline static constexpr unsigned int Class_1_640E953D4D109F65_TypeDefinitionIndex = 45798;

class Class_1_640E953D4D109F65 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65_TypeDefinitionIndex)->GetStaticField(0xE9F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65__CCTOR_OFFSET))();
	}

	static ::MoleMole::InLevelAvatarDataItem* Method_1_61C4747286BDC5DC(::Class_3_5F8DAA47ACDB7251* a1, ::MoleMole::AvatarInitData* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::Class_3_5F8DAA47ACDB7251*, ::MoleMole::AvatarInitData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_61C4747286BDC5DC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_675C0FD50C07F350(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_675C0FD50C07F350_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_1_8E7D1357398C4F33(::Class_3_E89408D1986EAEAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E89408D1986EAEAF*))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_8E7D1357398C4F33_OFFSET))(this, a1);
	}

	::Class_2_99CEB9374FC46B1A* Method_1_DCEC38F05597CB7D()
	{
		return ((::Class_2_99CEB9374FC46B1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_DCEC38F05597CB7D_OFFSET))(this);
	}
};
