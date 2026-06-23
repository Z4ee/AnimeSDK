#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C70A12CE5BBC6553.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_312;
class Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0;
namespace MoleMole::HollowChessboard { class AnyEffectExpressionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C23D24BE7E2EBAE_METHOD_1_6F663731A21DDF88_OFFSET UNITYSDK_OFFSET(0xFBCDCA0)
#define CLASS_1_4C23D24BE7E2EBAE_METHOD_1_813FE03866C4F157_OFFSET UNITYSDK_OFFSET(0xFBCDEC0)
#define CLASS_1_4C23D24BE7E2EBAE__CTOR_OFFSET UNITYSDK_OFFSET(0xFBCDA40)

inline static constexpr unsigned int Class_1_4C23D24BE7E2EBAE_TypeDefinitionIndex = 86764;

class Class_1_4C23D24BE7E2EBAE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_312*>* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::HollowChessboard::AnyEffectExpressionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::AnyEffectExpressionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C23D24BE7E2EBAE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6F663731A21DDF88(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0*))((::PBYTE)hIl2Cpp + CLASS_1_4C23D24BE7E2EBAE_METHOD_1_6F663731A21DDF88_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_813FE03866C4F157(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0*))((::PBYTE)hIl2Cpp + CLASS_1_4C23D24BE7E2EBAE_METHOD_1_813FE03866C4F157_OFFSET))(this, a1, a2, a3);
	}
};
