#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1168CBF07B371EB6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10854920)
#define CLASS_3_1168CBF07B371EB6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10854F50)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x10854FD0)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x10855720)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_5419603D9DCFDEEB_OFFSET UNITYSDK_OFFSET(0x10854810)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x108558D0)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10854DE0)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x10855A30)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x10854D20)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10854EE0)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10854910)
#define CLASS_3_1168CBF07B371EB6_METHOD_3_FBDE5F9689FDEFFF_OFFSET UNITYSDK_OFFSET(0x10854980)
#define CLASS_3_1168CBF07B371EB6__CTOR_OFFSET UNITYSDK_OFFSET(0x10855710)

inline static constexpr unsigned int Class_3_1168CBF07B371EB6_TypeDefinitionIndex = 57593;

class Class_3_1168CBF07B371EB6 : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x40
	::System::Boolean Field_3_4; // 0x48
	::MoleMole::Config::EVariantElement Field_3_1; // 0x4C
	::MoleMole::Config::DamageElementType Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_5419603D9DCFDEEB(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_5419603D9DCFDEEB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	static ::Class_3_1168CBF07B371EB6* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_1168CBF07B371EB6*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_1168CBF07B371EB6* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_1168CBF07B371EB6*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_FBDE5F9689FDEFFF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1168CBF07B371EB6_METHOD_3_FBDE5F9689FDEFFF_OFFSET))(this, a1, a2);
	}
};
