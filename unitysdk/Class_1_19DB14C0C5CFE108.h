#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1315;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_916A609943E0EE80_2;
class Class_1_A78CE7582CF7C10E;
class Class_1_D40936EF3BF54118_4;
class Class_1_DFB5A9B3A6CD66C9;
class Class_1_F963C9FA5FC80637;
class Class_1_FB0633E85BD6CF8E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19DB14C0C5CFE108_METHOD_1_02915DAC169AEDDE_OFFSET UNITYSDK_OFFSET(0x17A825F0)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_06181E61C55063BC_OFFSET UNITYSDK_OFFSET(0x17A82A10)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_0C294C27CCD9DF92_OFFSET UNITYSDK_OFFSET(0x17A82500)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_2CCADD2D3710F5C5_OFFSET UNITYSDK_OFFSET(0x17A81990)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_5A940B218C2967B4_OFFSET UNITYSDK_OFFSET(0x17A827A0)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_71E8F8B0169A90B3_OFFSET UNITYSDK_OFFSET(0x17A814B0)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_8B64B394FA0DAB86_OFFSET UNITYSDK_OFFSET(0x17A82B20)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_9D1F8CFFF275DC9F_OFFSET UNITYSDK_OFFSET(0x17A83A40)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_9D644DC5CD52D0F3_OFFSET UNITYSDK_OFFSET(0x17A817A0)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_AE708351A8814D91_OFFSET UNITYSDK_OFFSET(0x17A83100)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_AED46D7B92E4EFD7_OFFSET UNITYSDK_OFFSET(0x17A81E20)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_BD7717831C571DA5_OFFSET UNITYSDK_OFFSET(0x17A818A0)
#define CLASS_1_19DB14C0C5CFE108_METHOD_1_E033A06753E617A6_OFFSET UNITYSDK_OFFSET(0x17A83C30)
#define CLASS_1_19DB14C0C5CFE108__CTOR_OFFSET UNITYSDK_OFFSET(0x17A814A0)
#define CLASS_1_19DB14C0C5CFE108___FILLCONFLICTSTAGEINDICESTO_B__12_1_OFFSET UNITYSDK_OFFSET(0x17A842B0)

inline static constexpr unsigned int Class_1_19DB14C0C5CFE108_TypeDefinitionIndex = 76548;

class Class_1_19DB14C0C5CFE108 : public ::System::Object
{
public:
	::Class_1_7D46F1066EF90FA6_3* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_7D46F1066EF90FA6_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D46F1066EF90FA6_3*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_71E8F8B0169A90B3(::Class_1_DFB5A9B3A6CD66C9* a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_71E8F8B0169A90B3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_2CCADD2D3710F5C5(::Class_1_DFB5A9B3A6CD66C9* a1, ::Class_1_F963C9FA5FC80637* a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*, ::Class_1_F963C9FA5FC80637*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_2CCADD2D3710F5C5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_0C294C27CCD9DF92(::Class_1_DFB5A9B3A6CD66C9* a1, ::Class_1_F963C9FA5FC80637* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_0C294C27CCD9DF92_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5A940B218C2967B4(::Class_1_A78CE7582CF7C10E* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A78CE7582CF7C10E*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_5A940B218C2967B4_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_BD7717831C571DA5(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_BD7717831C571DA5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_02915DAC169AEDDE()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_02915DAC169AEDDE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_8B64B394FA0DAB86(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_8B64B394FA0DAB86_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_06181E61C55063BC(::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_06181E61C55063BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AED46D7B92E4EFD7(::Class_1_DFB5A9B3A6CD66C9* a1, ::Class_1_F963C9FA5FC80637* a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*, ::Class_1_F963C9FA5FC80637*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_AED46D7B92E4EFD7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_9D644DC5CD52D0F3(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_916A609943E0EE80_2*>* a2, ::Class_0_16E4307DCC419505_1315* a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Class_1_916A609943E0EE80_2*>*, ::Class_0_16E4307DCC419505_1315*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_9D644DC5CD52D0F3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AE708351A8814D91(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_916A609943E0EE80_2*>* a2, ::Class_0_16E4307DCC419505_1315* a3, ::System::Collections::Generic::ICollection_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Class_1_916A609943E0EE80_2*>*, ::Class_0_16E4307DCC419505_1315*, ::System::Collections::Generic::ICollection_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_AE708351A8814D91_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_9D1F8CFFF275DC9F(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_D40936EF3BF54118_4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_D40936EF3BF54118_4*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_9D1F8CFFF275DC9F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E033A06753E617A6(::Class_1_FB0633E85BD6CF8E* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108_METHOD_1_E033A06753E617A6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 __FillConflictStageIndicesTo_b__12_1(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___FILLCONFLICTSTAGEINDICESTO_B__12_1_OFFSET))(this, a1);
	}
};
