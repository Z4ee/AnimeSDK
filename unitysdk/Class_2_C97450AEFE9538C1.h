#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_950C34EC5D7CBA37.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_17E0E0442218CD79.h"
#include "unitysdk/Struct_2_217EE568A28FAED7.h"
#include "unitysdk/Struct_2_64E2BDD85DD544FC.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_379;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C97450AEFE9538C1_METHOD_2_32D87BF73E555DF0_OFFSET UNITYSDK_OFFSET(0x10A02C60)
#define CLASS_2_C97450AEFE9538C1_METHOD_2_83078A6C4C5ADF2B_OFFSET UNITYSDK_OFFSET(0x10A02A60)
#define CLASS_2_C97450AEFE9538C1_METHOD_2_92DA7411D21CC04E_OFFSET UNITYSDK_OFFSET(0x10A03090)
#define CLASS_2_C97450AEFE9538C1_METHOD_2_A6515003BBC9AD15_OFFSET UNITYSDK_OFFSET(0x10A032D0)
#define CLASS_2_C97450AEFE9538C1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A032C0)

inline static constexpr unsigned int Class_2_C97450AEFE9538C1_TypeDefinitionIndex = 86096;

class Class_2_C97450AEFE9538C1 : public ::Class_1_950C34EC5D7CBA37
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C97450AEFE9538C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_83078A6C4C5ADF2B(::Struct_2_17E0E0442218CD79& a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_0_16E4307DCC419505_379*, ::Struct_2_217EE568A28FAED7>>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_17E0E0442218CD79&, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_0_16E4307DCC419505_379*, ::Struct_2_217EE568A28FAED7>>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C97450AEFE9538C1_METHOD_2_83078A6C4C5ADF2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_32D87BF73E555DF0(::Struct_2_17E0E0442218CD79& a1, ::System::Collections::Generic::List_1<::Struct_2_217EE568A28FAED7>* a2, ::Struct_2_64E2BDD85DD544FC<::MoleMole::HollowChessboard::RenderDataHandle> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_17E0E0442218CD79&, ::System::Collections::Generic::List_1<::Struct_2_217EE568A28FAED7>*, ::Struct_2_64E2BDD85DD544FC<::MoleMole::HollowChessboard::RenderDataHandle>))((::PBYTE)hIl2Cpp + CLASS_2_C97450AEFE9538C1_METHOD_2_32D87BF73E555DF0_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_379* Method_2_92DA7411D21CC04E(::Struct_2_17E0E0442218CD79& a1, ::Struct_2_217EE568A28FAED7 a2)
	{
		return ((::Class_0_16E4307DCC419505_379*(*)(::PVOID, ::Struct_2_17E0E0442218CD79&, ::Struct_2_217EE568A28FAED7))((::PBYTE)hIl2Cpp + CLASS_2_C97450AEFE9538C1_METHOD_2_92DA7411D21CC04E_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_379* Method_2_A6515003BBC9AD15(::Struct_2_17E0E0442218CD79& a1)
	{
		return ((::Class_0_16E4307DCC419505_379*(*)(::PVOID, ::Struct_2_17E0E0442218CD79&))((::PBYTE)hIl2Cpp + CLASS_2_C97450AEFE9538C1_METHOD_2_A6515003BBC9AD15_OFFSET))(this, a1);
	}
};
