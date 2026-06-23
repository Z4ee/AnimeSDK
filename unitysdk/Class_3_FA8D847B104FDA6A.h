#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_828B2711AF58BA0B;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FA8D847B104FDA6A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17CDC650)
#define CLASS_3_FA8D847B104FDA6A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17CDCFB0)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x17CDD030)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x17CDDF80)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_2D08867FA34F8CAE_OFFSET UNITYSDK_OFFSET(0x17CDC6B0)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x17CDCDA0)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x17CDDE20)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x17CDCE40)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x17CDC5B0)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17CDCF40)
#define CLASS_3_FA8D847B104FDA6A_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x17CDE130)
#define CLASS_3_FA8D847B104FDA6A__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDDDC0)

inline static constexpr unsigned int Class_3_FA8D847B104FDA6A_TypeDefinitionIndex = 82313;

class Class_3_FA8D847B104FDA6A : public ::Class_2_0F138252A5783001
{
public:
	::System::String* Field_3_7; // 0x20
	::System::String* Field_3_6; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_3_3; // 0x30
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_4; // 0x38
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_5; // 0x40
	::Enum_3_1003E4A6E5149B9E Field_3_2; // 0x48
	::System::Int32 Field_3_0; // 0x4C
	::System::Int32 Field_3_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_FA8D847B104FDA6A* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_FA8D847B104FDA6A*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_2D08867FA34F8CAE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_2D08867FA34F8CAE_OFFSET))(this, a1, a2);
	}

	static ::Class_3_FA8D847B104FDA6A* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_FA8D847B104FDA6A*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_FA8D847B104FDA6A_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}
};
