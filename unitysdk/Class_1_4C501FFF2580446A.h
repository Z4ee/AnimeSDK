#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define CLASS_1_4C501FFF2580446A_METHOD_1_0EB17942EB1D8738_OFFSET UNITYSDK_OFFSET(0xB8964B0)
#define CLASS_1_4C501FFF2580446A_METHOD_1_272D8737716D5C99_1_OFFSET UNITYSDK_OFFSET(0xB896460)
#define CLASS_1_4C501FFF2580446A_METHOD_1_272D8737716D5C99_2_OFFSET UNITYSDK_OFFSET(0xB896650)
#define CLASS_1_4C501FFF2580446A_METHOD_1_272D8737716D5C99_OFFSET UNITYSDK_OFFSET(0xB897580)
#define CLASS_1_4C501FFF2580446A_METHOD_1_3167F8AC2BACD9E1_OFFSET UNITYSDK_OFFSET(0xB896390)
#define CLASS_1_4C501FFF2580446A_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xB896850)
#define CLASS_1_4C501FFF2580446A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB896AC0)
#define CLASS_1_4C501FFF2580446A_METHOD_1_43BE3EFC78731B2A_OFFSET UNITYSDK_OFFSET(0xB8974A0)
#define CLASS_1_4C501FFF2580446A_METHOD_1_4BCD51618C77AD95_OFFSET UNITYSDK_OFFSET(0xB897410)
#define CLASS_1_4C501FFF2580446A_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xB897530)
#define CLASS_1_4C501FFF2580446A_METHOD_1_ACB515D94CF05080_OFFSET UNITYSDK_OFFSET(0xB896B20)
#define CLASS_1_4C501FFF2580446A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB896A20)
#define CLASS_1_4C501FFF2580446A_METHOD_1_B677D18EEB4764D3_OFFSET UNITYSDK_OFFSET(0xB896560)
#define CLASS_1_4C501FFF2580446A_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xB8969B0)
#define CLASS_1_4C501FFF2580446A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB896960)
#define CLASS_1_4C501FFF2580446A_METHOD_1_F8DF29599F19AAC4_OFFSET UNITYSDK_OFFSET(0xB8966A0)
#define CLASS_1_4C501FFF2580446A__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB896290)
#define CLASS_1_4C501FFF2580446A__CTOR_OFFSET UNITYSDK_OFFSET(0xB8961B0)

inline static constexpr unsigned int Class_1_4C501FFF2580446A_TypeDefinitionIndex = 57809;

class Class_1_4C501FFF2580446A : public ::System::Object
{
public:
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* GLFCGDLDLCO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*>* GIPEEJCLACO; // 0x18
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* JBIPKAENAMO; // 0x20
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* LMCCPIDGDBC; // 0x28
	::System::UInt32 OLEIDKBKEOE; // 0x30
	::System::UInt32 EKACELHACDK; // 0x34
	::System::Boolean JFECBEOOFCH; // 0x38
	::System::UInt32 BDKNDKADDOD; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3167F8AC2BACD9E1(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_3167F8AC2BACD9E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EB17942EB1D8738(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_0EB17942EB1D8738_OFFSET))(this, a1);
	}

	::System::Void Method_1_B677D18EEB4764D3(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_B677D18EEB4764D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8DF29599F19AAC4(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_F8DF29599F19AAC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_ACB515D94CF05080(::RPG::GameCore::GameWorld* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_ACB515D94CF05080_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Int32 Method_1_4BCD51618C77AD95()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_4BCD51618C77AD95_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* Method_1_43BE3EFC78731B2A()
	{
		return ((::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_43BE3EFC78731B2A_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* Method_1_272D8737716D5C99()
	{
		return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_272D8737716D5C99_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* Method_1_272D8737716D5C99_1()
	{
		return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_272D8737716D5C99_1_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* Method_1_272D8737716D5C99_2()
	{
		return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C501FFF2580446A_METHOD_1_272D8737716D5C99_2_OFFSET))(this);
	}
};
