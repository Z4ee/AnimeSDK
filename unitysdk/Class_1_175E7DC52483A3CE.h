#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_059F428F86556789.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_175E7DC52483A3CE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E69220)
#define CLASS_1_175E7DC52483A3CE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E69500)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x17E69580)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x17E69190)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x17E69710)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x17E69860)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x17E693E0)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17E694F0)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x17E69280)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x17E693F0)
#define CLASS_1_175E7DC52483A3CE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E69700)

inline static constexpr unsigned int Class_1_175E7DC52483A3CE_TypeDefinitionIndex = 62395;

class Class_1_175E7DC52483A3CE : public ::System::Object
{
public:
	::Enum_3_059F428F86556789 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_175E7DC52483A3CE* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_1_175E7DC52483A3CE* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	static ::Class_1_175E7DC52483A3CE* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_D32A5475BAED534D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_D32A5475BAED534D_OFFSET))(this, a1, a2);
	}
};
