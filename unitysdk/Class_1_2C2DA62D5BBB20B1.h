#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadItemState.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_F860364065044F08;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_2C2DA62D5BBB20B1_CLEAR_OFFSET UNITYSDK_OFFSET(0x163CAC30)
#define CLASS_1_2C2DA62D5BBB20B1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x163CAE50)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x163CAF30)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x163CACC0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_A27D39E06AC34DD9_OFFSET UNITYSDK_OFFSET(0x163CA4A0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0x163CA3C0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_E0BE53945D089B15_OFFSET UNITYSDK_OFFSET(0x163CA960)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x163CA480)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x163CA490)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x163CA470)
#define CLASS_1_2C2DA62D5BBB20B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163CA5B0)
#define CLASS_1_2C2DA62D5BBB20B1__CTOR_OFFSET UNITYSDK_OFFSET(0x163CAFB0)

inline static constexpr unsigned int Class_1_2C2DA62D5BBB20B1_TypeDefinitionIndex = 59837;

class Class_1_2C2DA62D5BBB20B1 : public ::System::Object
{
public:
	// static const ::System::Int32 BNNKNPFADJA = 0x2; // 0x0
	::System::Action* DPANHIICMLD; // 0x10
	::Collections::Pooled::PooledList_1<::Class_1_F860364065044F08*>* NPENGFBHFJN; // 0x18
	::System::String* KNJEFFPKCFD; // 0x20
	::System::String* AGNDDHOLJNL; // 0x28
	::System::UInt32 AJCPOOCBNNH; // 0x30
	::System::Single MNAKIEOGPDK; // 0x34
	::RPG::GameCore::PreloadGroupType HBEDCNGOIMI; // 0x38
	::Class_1_2C2DA62D5BBB20B1_PreloadType KGJAPOONHOD; // 0x3C
	::RPG::Client::PreloadItemFlag FNPGDNFLMPC; // 0x40
	::Class_1_2C2DA62D5BBB20B1_PreloadType IJCGJAGCGMO; // 0x44
	::Class_1_2C2DA62D5BBB20B1_PreloadItemState MEPFOEEGBEA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_D8BF40F27BE9947D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_D8BF40F27BE9947D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::String* Method_1_A27D39E06AC34DD9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_A27D39E06AC34DD9_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_E0BE53945D089B15()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_E0BE53945D089B15_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4D606E0EBD8E195C(::Class_1_F860364065044F08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F860364065044F08*))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_2C2DA62D5BBB20B1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_COMPARETO_OFFSET))(this, a1);
	}

	::System::Void Method_1_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_42D74E8C949A6883_OFFSET))(this, a1);
	}
};
