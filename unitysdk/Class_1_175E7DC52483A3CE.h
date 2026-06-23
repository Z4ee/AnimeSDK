#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_059F428F86556789.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_175E7DC52483A3CE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134A0B90)
#define CLASS_1_175E7DC52483A3CE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134A0ED0)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x134A0B00)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x134A11C0)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x134A0F50)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x134A10F0)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x134A0D50)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x134A0E60)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x134A0BF0)
#define CLASS_1_175E7DC52483A3CE_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x134A0D60)
#define CLASS_1_175E7DC52483A3CE__CTOR_OFFSET UNITYSDK_OFFSET(0x134A10E0)

inline static constexpr unsigned int Class_1_175E7DC52483A3CE_TypeDefinitionIndex = 45645;

class Class_1_175E7DC52483A3CE : public ::System::Object
{
public:
	::Enum_3_059F428F86556789 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

	::System::Int32 Method_1_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D32A5475BAED534D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_D32A5475BAED534D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	static ::Class_1_175E7DC52483A3CE* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	static ::Class_1_175E7DC52483A3CE* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_175E7DC52483A3CE_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}
};
