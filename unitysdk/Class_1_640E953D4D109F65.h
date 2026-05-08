#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_99CEB9374FC46B1A;
class Class_3_5F8DAA47ACDB7251;
class Class_3_E89408D1986EAEAF;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }

#define CLASS_1_640E953D4D109F65_METHOD_1_61C4747286BDC5DC_OFFSET UNITYSDK_OFFSET(0x118AFBA0)
#define CLASS_1_640E953D4D109F65_METHOD_1_675C0FD50C07F350_OFFSET UNITYSDK_OFFSET(0x118AF850)
#define CLASS_1_640E953D4D109F65_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x118AFB30)
#define CLASS_1_640E953D4D109F65_METHOD_1_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x118AFA40)
#define CLASS_1_640E953D4D109F65_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x118AF7C0)
#define CLASS_1_640E953D4D109F65_METHOD_1_EE9120726E2D89FC_OFFSET UNITYSDK_OFFSET(0x118AFFD0)
#define CLASS_1_640E953D4D109F65__CCTOR_OFFSET UNITYSDK_OFFSET(0x118AF7B0)
#define CLASS_1_640E953D4D109F65__CTOR_OFFSET UNITYSDK_OFFSET(0x118AF7A0)

inline static constexpr unsigned int Class_1_640E953D4D109F65_TypeDefinitionIndex = 52094;

class Class_1_640E953D4D109F65 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65_TypeDefinitionIndex)->GetStaticField(0x97F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_675C0FD50C07F350(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_675C0FD50C07F350_OFFSET))(this, a1);
	}

	::Class_2_99CEB9374FC46B1A* Method_1_DCEC38F05597CB7D()
	{
		return ((::Class_2_99CEB9374FC46B1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_DCEC38F05597CB7D_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::MoleMole::InLevelAvatarDataItem* Method_1_61C4747286BDC5DC(::Class_3_5F8DAA47ACDB7251* a1, ::MoleMole::AvatarInitData* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::Class_3_5F8DAA47ACDB7251*, ::MoleMole::AvatarInitData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_61C4747286BDC5DC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_EE9120726E2D89FC(::Class_3_E89408D1986EAEAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E89408D1986EAEAF*))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65_METHOD_1_EE9120726E2D89FC_OFFSET))(this, a1);
	}
};
