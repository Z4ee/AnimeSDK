#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CD07D1B229C77250_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18093A20)
#define CLASS_3_CD07D1B229C77250_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18094260)
#define CLASS_3_CD07D1B229C77250_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x180942E0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x18094CD0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_4B45CF3CF3BF3EEE_OFFSET UNITYSDK_OFFSET(0x18093950)
#define CLASS_3_CD07D1B229C77250_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x18094E80)
#define CLASS_3_CD07D1B229C77250_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x180940F0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x18094BF0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x18094030)
#define CLASS_3_CD07D1B229C77250_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x180941F0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18093A10)
#define CLASS_3_CD07D1B229C77250_METHOD_3_FDFE9AC64A706A16_OFFSET UNITYSDK_OFFSET(0x18093A80)
#define CLASS_3_CD07D1B229C77250__CTOR_OFFSET UNITYSDK_OFFSET(0x18094BE0)

inline static constexpr unsigned int Class_3_CD07D1B229C77250_TypeDefinitionIndex = 46030;

class Class_3_CD07D1B229C77250 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::System::String* Field_3_1; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_3_2; // 0x40
	::MoleMole::Config::ColliderLayerType Field_3_5; // 0x48
	::System::Boolean Field_3_0; // 0x4C
	::System::Boolean Field_3_3; // 0x4D
	::System::Boolean Field_3_4; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4B45CF3CF3BF3EEE(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_4B45CF3CF3BF3EEE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_CD07D1B229C77250* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_CD07D1B229C77250*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_FDFE9AC64A706A16(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_FDFE9AC64A706A16_OFFSET))(this, a1, a2);
	}

	static ::Class_3_CD07D1B229C77250* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_CD07D1B229C77250*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
