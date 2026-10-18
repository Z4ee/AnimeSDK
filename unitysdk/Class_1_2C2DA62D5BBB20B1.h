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

#define CLASS_1_2C2DA62D5BBB20B1_CLEAR_OFFSET UNITYSDK_OFFSET(0xC1F9580)
#define CLASS_1_2C2DA62D5BBB20B1_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC1F97A0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0xC1F9880)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0xC1F9610)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_A27D39E06AC34DD9_OFFSET UNITYSDK_OFFSET(0xC1F8D80)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0xC1F8CA0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_E0BE53945D089B15_OFFSET UNITYSDK_OFFSET(0xC1F9270)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xC1F8D60)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xC1F8D70)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC1F8D50)
#define CLASS_1_2C2DA62D5BBB20B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC1F8E90)
#define CLASS_1_2C2DA62D5BBB20B1__CTOR_OFFSET UNITYSDK_OFFSET(0xC1F9900)

inline static constexpr unsigned int Class_1_2C2DA62D5BBB20B1_TypeDefinitionIndex = 59692;

class Class_1_2C2DA62D5BBB20B1 : public ::System::Object
{
public:
	// static const ::System::Int32 BNNKNPFADJA = 0x2; // 0x0
	::System::String* KNJEFFPKCFD; // 0x10
	::System::Action* DPANHIICMLD; // 0x18
	::Collections::Pooled::PooledList_1<::Class_1_F860364065044F08*>* NPENGFBHFJN; // 0x20
	::System::String* AGNDDHOLJNL; // 0x28
	::Class_1_2C2DA62D5BBB20B1_PreloadItemState MEPFOEEGBEA; // 0x30
	::Class_1_2C2DA62D5BBB20B1_PreloadType IJCGJAGCGMO; // 0x34
	::System::Single MNAKIEOGPDK; // 0x38
	::RPG::GameCore::PreloadGroupType HBEDCNGOIMI; // 0x3C
	::RPG::Client::PreloadItemFlag FNPGDNFLMPC; // 0x40
	::Class_1_2C2DA62D5BBB20B1_PreloadType KGJAPOONHOD; // 0x44
	::System::UInt32 AJCPOOCBNNH; // 0x48

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
