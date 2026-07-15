#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63D18ECF87218619.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameNetMode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_44EC5CE538089376.h"
#include "unitysdk/Struct_2_6E318F2AEABB84CB.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_49;
class Class_1_1C06EB7D3B64779A;
class Class_1_57B0727320B17159;
class Class_1_ACEF39B7952CA17D;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_BEDC597CF9F6E647_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x13EDB0F0)
#define CLASS_2_BEDC597CF9F6E647_GET_LOGICDELTATIMEMS_OFFSET UNITYSDK_OFFSET(0x13EDB120)
#define CLASS_2_BEDC597CF9F6E647_GET_NETMODE_OFFSET UNITYSDK_OFFSET(0x13EDB0D0)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_0443CEBB7C313290_OFFSET UNITYSDK_OFFSET(0x13EDB210)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_06A01C19E6394C34_OFFSET UNITYSDK_OFFSET(0x13EDB220)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13EDAE00)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13EDAC50)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_2CAAA58EB429FD63_1_OFFSET UNITYSDK_OFFSET(0x13EDB200)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x13EDB1F0)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_376506FFEF229849_OFFSET UNITYSDK_OFFSET(0x13EDBA10)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_376C9020E20CBA2F_OFFSET UNITYSDK_OFFSET(0x13EDAE70)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x13EDA920)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_572994740C9C0FDA_OFFSET UNITYSDK_OFFSET(0x13EDB130)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_783DA64ED5EB41BC_OFFSET UNITYSDK_OFFSET(0x13EDAE10)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_7FD9AF65E5D65DC4_OFFSET UNITYSDK_OFFSET(0x13EDB060)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_938C529C9C7EFDF3_OFFSET UNITYSDK_OFFSET(0x13EDB500)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x13EDACB0)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_C8DA4F2135C5B6AA_OFFSET UNITYSDK_OFFSET(0x13EDB890)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_CE0CB83609ED8121_OFFSET UNITYSDK_OFFSET(0x13EDB7E0)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_E5A2FF297C2B7A4E_OFFSET UNITYSDK_OFFSET(0x13EDAED0)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_E8911671C67B4868_1_OFFSET UNITYSDK_OFFSET(0x13EDBBD0)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_E8911671C67B4868_2_OFFSET UNITYSDK_OFFSET(0x13EDBC90)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_E8911671C67B4868_OFFSET UNITYSDK_OFFSET(0x13EDBB10)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x13EDAF30)
#define CLASS_2_BEDC597CF9F6E647_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13EDB110)
#define CLASS_2_BEDC597CF9F6E647_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x13EDB100)
#define CLASS_2_BEDC597CF9F6E647_SET_NETMODE_OFFSET UNITYSDK_OFFSET(0x13EDB0E0)
#define CLASS_2_BEDC597CF9F6E647__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EDBD50)
#define CLASS_2_BEDC597CF9F6E647__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEB3C0)

inline static constexpr unsigned int Class_2_BEDC597CF9F6E647_TypeDefinitionIndex = 35322;

class Class_2_BEDC597CF9F6E647 : public ::Class_1_63D18ECF87218619
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_44EC5CE538089376, ::Class_0_16E4307DCC419505_49*>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_44EC5CE538089376, ::Class_0_16E4307DCC419505_49*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BEDC597CF9F6E647_TypeDefinitionIndex)->GetStaticField(0x4CD30);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_49*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_49*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BEDC597CF9F6E647_TypeDefinitionIndex)->GetStaticField(0x4CD38);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_49*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BEDC597CF9F6E647_TypeDefinitionIndex)->GetStaticField(0x4CD40);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_2_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BEDC597CF9F6E647_TypeDefinitionIndex)->GetStaticField(0x4CD48);
	}
	// static const ::System::Int32 Field_2_4 = 0x19000; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_5; // 0x10
	::Class_1_ACEF39B7952CA17D* Field_2_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>* Field_2_7; // 0x20
	::Class_1_1C06EB7D3B64779A* Field_2_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_49*>* Field_2_9; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_10; // 0x38
	::System::UInt64 Field_2_11; // 0x40
	::System::Single Field_2_12; // 0x48
	::RPG::Client::LittleGameShare::LittleGameNetMode _NetMode_k__BackingField; // 0x4C
	::System::Boolean _IsServer_k__BackingField; // 0x4D
	::System::Int32 Field_2_15; // 0x50
	::System::UInt32 Field_2_16; // 0x54
	::System::UInt32 _LogicDeltaTimeMs_k__BackingField; // 0x58
	::System::UInt64 Field_2_18; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4ED5A32649C8BEBA(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::Class_1_ACEF39B7952CA17D* Method_2_24748FC20F375725()
	{
		return ((::Class_1_ACEF39B7952CA17D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>* Method_2_783DA64ED5EB41BC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_783DA64ED5EB41BC_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_44EC5CE538089376, ::Class_0_16E4307DCC419505_49*>*>* Method_2_376C9020E20CBA2F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_44EC5CE538089376, ::Class_0_16E4307DCC419505_49*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_376C9020E20CBA2F_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_49*, ::Il2CppArray<::System::Object*>*>*>* Method_2_E5A2FF297C2B7A4E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_49*, ::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_E5A2FF297C2B7A4E_OFFSET))(this);
	}

	::System::Void Method_2_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_49*))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>* Method_2_7FD9AF65E5D65DC4()
	{
		return ((::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_7FD9AF65E5D65DC4_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameNetMode get_NetMode()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_GET_NETMODE_OFFSET))(this);
	}

	::System::Void set_NetMode(::RPG::Client::LittleGameShare::LittleGameNetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameNetMode))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_SET_NETMODE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsServer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_GET_ISSERVER_OFFSET))(this);
	}

	::System::Void set_IsServer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_SET_ISSERVER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 get_LogicDeltaTimeMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_GET_LOGICDELTATIMEMS_OFFSET))(this);
	}

	::System::Single Method_2_572994740C9C0FDA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_572994740C9C0FDA_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_2CAAA58EB429FD63_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>* Method_2_0443CEBB7C313290()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_0443CEBB7C313290_OFFSET))(this);
	}

	::System::Void Method_2_06A01C19E6394C34(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_06A01C19E6394C34_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_938C529C9C7EFDF3(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_938C529C9C7EFDF3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CE0CB83609ED8121(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_CE0CB83609ED8121_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8DA4F2135C5B6AA(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_C8DA4F2135C5B6AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_376506FFEF229849(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_376506FFEF229849_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_E8911671C67B4868(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_E8911671C67B4868_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_E8911671C67B4868_1(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_E8911671C67B4868_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_E8911671C67B4868_2(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEDC597CF9F6E647_METHOD_2_E8911671C67B4868_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
