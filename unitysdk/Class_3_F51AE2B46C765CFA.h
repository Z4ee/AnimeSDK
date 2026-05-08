#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F51AE2B46C765CFA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14E37300)
#define CLASS_3_F51AE2B46C765CFA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14E378B0)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x14E381C0)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x14E37930)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x14E38060)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x14E37740)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x14E38370)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x14E37840)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_CD415077098DAE87_OFFSET UNITYSDK_OFFSET(0x14E37200)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x14E37650)
#define CLASS_3_F51AE2B46C765CFA_METHOD_3_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x14E37360)
#define CLASS_3_F51AE2B46C765CFA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E37FF0)

inline static constexpr unsigned int Class_3_F51AE2B46C765CFA_TypeDefinitionIndex = 70979;

class Class_3_F51AE2B46C765CFA : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x38
	::Class_1_4ED21A115C97704D* Field_3_3; // 0x40
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x48
	::MoleMole::Config::DynamicString* Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CD415077098DAE87(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_CD415077098DAE87_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	static ::Class_3_F51AE2B46C765CFA* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_F51AE2B46C765CFA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_F51AE2B46C765CFA* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_F51AE2B46C765CFA*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F51AE2B46C765CFA_METHOD_3_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}
};
