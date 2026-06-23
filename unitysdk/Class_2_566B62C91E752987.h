#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_175E7DC52483A3CE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_566B62C91E752987_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A38A50)
#define CLASS_2_566B62C91E752987_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A38E90)
#define CLASS_2_566B62C91E752987_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13A39240)
#define CLASS_2_566B62C91E752987_METHOD_2_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x13A393F0)
#define CLASS_2_566B62C91E752987_METHOD_2_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x13A38AB0)
#define CLASS_2_566B62C91E752987_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x13A38F10)
#define CLASS_2_566B62C91E752987_METHOD_2_9F6562E4BC8EC00A_OFFSET UNITYSDK_OFFSET(0x13A38840)
#define CLASS_2_566B62C91E752987_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x13A38CD0)
#define CLASS_2_566B62C91E752987_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13A38E20)
#define CLASS_2_566B62C91E752987_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13A394D0)
#define CLASS_2_566B62C91E752987_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13A38D20)
#define CLASS_2_566B62C91E752987__CTOR_OFFSET UNITYSDK_OFFSET(0x13A38830)

inline static constexpr unsigned int Class_2_566B62C91E752987_TypeDefinitionIndex = 60875;

class Class_2_566B62C91E752987 : public ::Class_1_175E7DC52483A3CE
{
public:
	::System::String* Field_2_1; // 0x18
	::MoleMole::Config::BaseProperty Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_9F6562E4BC8EC00A(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_9F6562E4BC8EC00A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_175E7DC52483A3CE* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	static ::Class_2_566B62C91E752987* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_566B62C91E752987*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::String* Method_2_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_566B62C91E752987* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_566B62C91E752987*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_566B62C91E752987_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
