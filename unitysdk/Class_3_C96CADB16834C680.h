#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2703A0F8B5DB9328.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_9D8AC967EA14E5A2.h"

class Class_0_16E4307DCC419505_42;
class Class_1_0E9EED74A778662A;
class Class_1_455008579EB95638_34;
class Class_1_57B0727320B17159;
class Class_1_9AD828BA811E7C7A;
class Class_1_9AD828BA811E7C7A_1;
class Class_1_9AD828BA811E7C7A_3;
class Class_1_DDEA15C15400616B;
class Class_2_6DBE3FB0FE7D5079;
namespace Entitas { template <typename T> class Context_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C96CADB16834C680_GET_LEAVEPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x17C28080)
#define CLASS_3_C96CADB16834C680_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C28290)
#define CLASS_3_C96CADB16834C680_METHOD_3_0519D99971DE268F_OFFSET UNITYSDK_OFFSET(0x17C29AA0)
#define CLASS_3_C96CADB16834C680_METHOD_3_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0x17C29100)
#define CLASS_3_C96CADB16834C680_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x17C286E0)
#define CLASS_3_C96CADB16834C680_METHOD_3_118F0A9DE721CC4D_OFFSET UNITYSDK_OFFSET(0x17C29E10)
#define CLASS_3_C96CADB16834C680_METHOD_3_18FCC03564B88438_OFFSET UNITYSDK_OFFSET(0x17C29D80)
#define CLASS_3_C96CADB16834C680_METHOD_3_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x17C29A50)
#define CLASS_3_C96CADB16834C680_METHOD_3_2F89E4D24FE79498_OFFSET UNITYSDK_OFFSET(0x17C29090)
#define CLASS_3_C96CADB16834C680_METHOD_3_4A3AAA27F88537AE_OFFSET UNITYSDK_OFFSET(0x17C282A0)
#define CLASS_3_C96CADB16834C680_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x17C28990)
#define CLASS_3_C96CADB16834C680_METHOD_3_5E8C1E6069CBDEE6_OFFSET UNITYSDK_OFFSET(0x17C29170)
#define CLASS_3_C96CADB16834C680_METHOD_3_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x17C2A0E0)
#define CLASS_3_C96CADB16834C680_METHOD_3_621CEC88A9371968_OFFSET UNITYSDK_OFFSET(0x17C29C50)
#define CLASS_3_C96CADB16834C680_METHOD_3_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x17C28830)
#define CLASS_3_C96CADB16834C680_METHOD_3_793FFA9A76FE6840_1_OFFSET UNITYSDK_OFFSET(0x17C2A0F0)
#define CLASS_3_C96CADB16834C680_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17C2A070)
#define CLASS_3_C96CADB16834C680_METHOD_3_87F106A231D421A4_OFFSET UNITYSDK_OFFSET(0x17C29CA0)
#define CLASS_3_C96CADB16834C680_METHOD_3_9036CFAD14566A8D_OFFSET UNITYSDK_OFFSET(0x17C29490)
#define CLASS_3_C96CADB16834C680_METHOD_3_90E40848AF21BB07_OFFSET UNITYSDK_OFFSET(0x17C28AE0)
#define CLASS_3_C96CADB16834C680_METHOD_3_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x17C29430)
#define CLASS_3_C96CADB16834C680_METHOD_3_A3BE6C967DDABA96_OFFSET UNITYSDK_OFFSET(0x17C28190)
#define CLASS_3_C96CADB16834C680_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17C299D0)
#define CLASS_3_C96CADB16834C680_METHOD_3_A5A255EF949F38C7_OFFSET UNITYSDK_OFFSET(0x17C21A20)
#define CLASS_3_C96CADB16834C680_METHOD_3_B11753E6AD8AC78D_OFFSET UNITYSDK_OFFSET(0x17C280A0)
#define CLASS_3_C96CADB16834C680_METHOD_3_B793751D2A39A234_OFFSET UNITYSDK_OFFSET(0x17C28BF0)
#define CLASS_3_C96CADB16834C680_METHOD_3_B86FB61B32E1718F_OFFSET UNITYSDK_OFFSET(0x17C29D30)
#define CLASS_3_C96CADB16834C680_METHOD_3_C3115FC0F18C21CA_OFFSET UNITYSDK_OFFSET(0x17C28B70)
#define CLASS_3_C96CADB16834C680_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17C28770)
#define CLASS_3_C96CADB16834C680_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x17C287B0)
#define CLASS_3_C96CADB16834C680_METHOD_3_D82DA1AF317A9F34_OFFSET UNITYSDK_OFFSET(0x17C2A060)
#define CLASS_3_C96CADB16834C680_METHOD_3_D8618198BDAD0561_OFFSET UNITYSDK_OFFSET(0x17C28070)
#define CLASS_3_C96CADB16834C680_METHOD_3_E6129D5496948FC8_1_OFFSET UNITYSDK_OFFSET(0x17C2A170)
#define CLASS_3_C96CADB16834C680_METHOD_3_E6129D5496948FC8_OFFSET UNITYSDK_OFFSET(0x17C2A160)
#define CLASS_3_C96CADB16834C680_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17C293E0)
#define CLASS_3_C96CADB16834C680_SET_LEAVEPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x17C28090)
#define CLASS_3_C96CADB16834C680__CTOR_OFFSET UNITYSDK_OFFSET(0x17C28490)

inline static constexpr unsigned int Class_3_C96CADB16834C680_TypeDefinitionIndex = 34376;

class Class_3_C96CADB16834C680 : public ::Class_2_2703A0F8B5DB9328
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_5; // 0x68
	::Class_1_9AD828BA811E7C7A_1* Field_3_0; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_3; // 0x78
	::RPG::Client::RPGProfilerMarker* Field_3_9; // 0x80
	::Class_2_6DBE3FB0FE7D5079* Field_3_2; // 0x88
	::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>* Field_3_1; // 0x90
	::System::Collections::Generic::List_1<::System::UInt32>* _LeavePlayerUidList_k__BackingField; // 0x98
	::Class_0_16E4307DCC419505_42* Field_3_7; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_3*>* Field_3_6; // 0xA8
	::RPG::Client::RPGProfilerMarker* Field_3_8; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* Method_3_D8618198BDAD0561()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_D8618198BDAD0561_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_LeavePlayerUidList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_GET_LEAVEPLAYERUIDLIST_OFFSET))(this);
	}

	::System::Void set_LeavePlayerUidList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_SET_LEAVEPLAYERUIDLIST_OFFSET))(this, value);
	}

	::System::Void Method_3_B11753E6AD8AC78D(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_B11753E6AD8AC78D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A5A255EF949F38C7(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_A5A255EF949F38C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A3BE6C967DDABA96(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_A3BE6C967DDABA96_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::Class_1_DDEA15C15400616B* Method_3_4A3AAA27F88537AE(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::Class_1_DDEA15C15400616B*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_4A3AAA27F88537AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_3_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_90E40848AF21BB07(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_90E40848AF21BB07_OFFSET))(this, a1);
	}

	::System::Void Method_3_C3115FC0F18C21CA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_C3115FC0F18C21CA_OFFSET))(this, a1);
	}

	::System::Void Method_3_B793751D2A39A234(::System::UInt32 a1, ::Class_1_9AD828BA811E7C7A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9AD828BA811E7C7A*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_B793751D2A39A234_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0A4B9B2045975F53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_0A4B9B2045975F53_OFFSET))(this, a1);
	}

	::System::Void Method_3_5E8C1E6069CBDEE6(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_5E8C1E6069CBDEE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_9AD828BA811E7C7A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_1*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_9AD828BA811E7C7A_1* Method_3_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_9AD828BA811E7C7A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_3_9036CFAD14566A8D(::Class_1_455008579EB95638_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_34*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_9036CFAD14566A8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_3*>* Method_3_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_3_0519D99971DE268F(::System::UInt32 a1, ::Google::Protobuf::IMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_0519D99971DE268F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_621CEC88A9371968(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_621CEC88A9371968_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2F89E4D24FE79498(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_2F89E4D24FE79498_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_87F106A231D421A4(::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_87F106A231D421A4_OFFSET))(this, a1);
	}

	::System::Void Method_3_B86FB61B32E1718F(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_B86FB61B32E1718F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_18FCC03564B88438(::System::UInt64 a1, ::System::UInt32 a2, ::Class_1_0E9EED74A778662A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::Class_1_0E9EED74A778662A*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_18FCC03564B88438_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_118F0A9DE721CC4D(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_118F0A9DE721CC4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D82DA1AF317A9F34(::Class_1_57B0727320B17159* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_D82DA1AF317A9F34_OFFSET))(this, P0);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_3_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840_1(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_793FFA9A76FE6840_1_OFFSET))(this, P0);
	}

	::System::Void Method_3_E6129D5496948FC8(::System::String* P0, ::RPG::LogTag P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_E6129D5496948FC8_OFFSET))(this, P0, P1);
	}

	::System::Void Method_3_E6129D5496948FC8_1(::System::String* P0, ::RPG::LogTag P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_C96CADB16834C680_METHOD_3_E6129D5496948FC8_1_OFFSET))(this, P0, P1);
	}
};
