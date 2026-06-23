#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class FlowControlNode; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB5E87689475A1A2_METHOD_1_8081ECC1D3DDDCF3_OFFSET UNITYSDK_OFFSET(0x102DC320)
#define CLASS_1_BB5E87689475A1A2_METHOD_1_A43864EE76717EBC_OFFSET UNITYSDK_OFFSET(0x102DBEB0)
#define CLASS_1_BB5E87689475A1A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x102DBEA0)

inline static constexpr unsigned int Class_1_BB5E87689475A1A2_TypeDefinitionIndex = 53481;

class Class_1_BB5E87689475A1A2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB5E87689475A1A2_TypeDefinitionIndex)->GetStaticField(0xD0C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB5E87689475A1A2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A43864EE76717EBC(::FlowCanvas::Nodes::FlowControlNode* a1, ::MoleMole::Config::InteractEntry* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a4, ::System::Func_1<::Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C*>* a5)
	{
		return ((::System::Void(*)(::FlowCanvas::Nodes::FlowControlNode*, ::MoleMole::Config::InteractEntry*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Func_1<::Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB5E87689475A1A2_METHOD_1_A43864EE76717EBC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_8081ECC1D3DDDCF3(::MoleMole::EntityHandle a1, ::Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C*))((::PBYTE)hIl2Cpp + CLASS_1_BB5E87689475A1A2_METHOD_1_8081ECC1D3DDDCF3_OFFSET))(a1, a2);
	}
};
