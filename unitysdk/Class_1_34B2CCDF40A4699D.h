#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34B2CCDF40A4699D_Struct_2_61F858A8001F7873.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_34B2CCDF40A4699D_METHOD_1_11F1035C414BFFEF_OFFSET UNITYSDK_OFFSET(0x12552530)
#define CLASS_1_34B2CCDF40A4699D_METHOD_1_72715DAE0A2D690E_OFFSET UNITYSDK_OFFSET(0x12552320)
#define CLASS_1_34B2CCDF40A4699D_METHOD_1_BDBD945D6462D86F_OFFSET UNITYSDK_OFFSET(0x125520B0)
#define CLASS_1_34B2CCDF40A4699D_METHOD_1_D84B674109BA6A52_OFFSET UNITYSDK_OFFSET(0x12551D70)

inline static constexpr unsigned int Class_1_34B2CCDF40A4699D_TypeDefinitionIndex = 70806;

class Class_1_34B2CCDF40A4699D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0

	static ::MoleMole::UIBubbleTips* Method_1_D84B674109BA6A52(::System::Boolean a1, ::System::Int32 a2, ::Class_1_34B2CCDF40A4699D_Struct_2_61F858A8001F7873 a3, ::System::Action* a4)
	{
		return ((::MoleMole::UIBubbleTips*(*)(::System::Boolean, ::System::Int32, ::Class_1_34B2CCDF40A4699D_Struct_2_61F858A8001F7873, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_34B2CCDF40A4699D_METHOD_1_D84B674109BA6A52_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_72715DAE0A2D690E(::MoleMole::UIBubbleTips* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::UIBubbleTips*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_34B2CCDF40A4699D_METHOD_1_72715DAE0A2D690E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_11F1035C414BFFEF(::MoleMole::UIBubbleTips* a1, ::Class_1_34B2CCDF40A4699D_Struct_2_61F858A8001F7873 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::UIBubbleTips*, ::Class_1_34B2CCDF40A4699D_Struct_2_61F858A8001F7873, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_34B2CCDF40A4699D_METHOD_1_11F1035C414BFFEF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BDBD945D6462D86F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_34B2CCDF40A4699D_METHOD_1_BDBD945D6462D86F_OFFSET))(a1);
	}
};
