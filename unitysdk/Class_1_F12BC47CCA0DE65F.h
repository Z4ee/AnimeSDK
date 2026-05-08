#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F8D47E52A1FBE0C.h"
#include "unitysdk/Struct_2_02EF86795D3EB47B.h"
#include "unitysdk/Struct_2_186797E34BDAB9E2.h"
#include "unitysdk/Struct_2_9D13B292E62F3FA8.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/Object.h"

class Class_1_77D390C69A6D7A95;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { class Delegate; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F12BC47CCA0DE65F_METHOD_1_25B0F4C1236D40EA_OFFSET UNITYSDK_OFFSET(0x10FCF590)
#define CLASS_1_F12BC47CCA0DE65F_METHOD_1_638D86737F73B707_OFFSET UNITYSDK_OFFSET(0x10FCF680)
#define CLASS_1_F12BC47CCA0DE65F_METHOD_1_6A49CF4F3D0AF985_OFFSET UNITYSDK_OFFSET(0x10FCF750)
#define CLASS_1_F12BC47CCA0DE65F_METHOD_1_B43AD773BD26A837_OFFSET UNITYSDK_OFFSET(0x10FCF540)
#define CLASS_1_F12BC47CCA0DE65F_METHOD_1_D6D14152C16FFE53_OFFSET UNITYSDK_OFFSET(0x10FCF440)
#define CLASS_1_F12BC47CCA0DE65F_METHOD_1_FF61BC5EC29243DE_OFFSET UNITYSDK_OFFSET(0x10FCF360)
#define CLASS_1_F12BC47CCA0DE65F__CTOR_OFFSET UNITYSDK_OFFSET(0x10FCF350)

inline static constexpr unsigned int Class_1_F12BC47CCA0DE65F_TypeDefinitionIndex = 49130;

class Class_1_F12BC47CCA0DE65F : public ::System::Object
{
public:
	::Struct_2_186797E34BDAB9E2 Field_1_6; // 0x10
	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Field_1_1; // 0x20
	::Class_1_77D390C69A6D7A95* Field_1_7; // 0x28
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_1_0; // 0x30
	::Struct_2_9D13B292E62F3FA8 Field_1_5; // 0x38
	::Struct_2_9E75F47F2670B678 Field_1_4; // 0xC0
	::Enum_3_9F8D47E52A1FBE0C Field_1_2; // 0x100
	::System::Boolean Field_1_3; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F__CTOR_OFFSET))(this);
	}

	static ::Class_1_F12BC47CCA0DE65F* Method_1_FF61BC5EC29243DE(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678& a3, ::Struct_2_186797E34BDAB9E2& a4)
	{
		return ((::Class_1_F12BC47CCA0DE65F*(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678&, ::Struct_2_186797E34BDAB9E2&))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F_METHOD_1_FF61BC5EC29243DE_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_F12BC47CCA0DE65F* Method_1_D6D14152C16FFE53(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678& a3, ::Struct_2_9D13B292E62F3FA8& a4)
	{
		return ((::Class_1_F12BC47CCA0DE65F*(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678&, ::Struct_2_9D13B292E62F3FA8&))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F_METHOD_1_D6D14152C16FFE53_OFFSET))(a1, a2, a3, a4);
	}

	::System::Delegate* Method_1_B43AD773BD26A837()
	{
		return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F_METHOD_1_B43AD773BD26A837_OFFSET))(this);
	}

	::Struct_2_02EF86795D3EB47B Method_1_25B0F4C1236D40EA()
	{
		return ((::Struct_2_02EF86795D3EB47B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F_METHOD_1_25B0F4C1236D40EA_OFFSET))(this);
	}

	static ::Class_1_F12BC47CCA0DE65F* Method_1_638D86737F73B707(::Enum_3_9F8D47E52A1FBE0C a1, ::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a2, ::Struct_2_9E75F47F2670B678& a3)
	{
		return ((::Class_1_F12BC47CCA0DE65F*(*)(::Enum_3_9F8D47E52A1FBE0C, ::System::Action_1<::Class_1_B7E341C5F1A6F199*>*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F_METHOD_1_638D86737F73B707_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_F12BC47CCA0DE65F* Method_1_6A49CF4F3D0AF985(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678& a3, ::Struct_2_186797E34BDAB9E2& a4)
	{
		return ((::Class_1_F12BC47CCA0DE65F*(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678&, ::Struct_2_186797E34BDAB9E2&))((::PBYTE)hIl2Cpp + CLASS_1_F12BC47CCA0DE65F_METHOD_1_6A49CF4F3D0AF985_OFFSET))(a1, a2, a3, a4);
	}
};
