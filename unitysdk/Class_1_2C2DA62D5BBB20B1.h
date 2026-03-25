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

#define CLASS_1_2C2DA62D5BBB20B1_CLEAR_OFFSET UNITYSDK_OFFSET(0xCB1FE60)
#define CLASS_1_2C2DA62D5BBB20B1_COMPARETO_OFFSET UNITYSDK_OFFSET(0xCB20070)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_03169D758A5F0291_OFFSET UNITYSDK_OFFSET(0xCB1FAD0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0xCB20150)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0xCB1FEF0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_A27D39E06AC34DD9_OFFSET UNITYSDK_OFFSET(0xCB1F510)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0xCB1F430)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xCB1F4F0)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xCB1F500)
#define CLASS_1_2C2DA62D5BBB20B1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCB1F4E0)
#define CLASS_1_2C2DA62D5BBB20B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCB1F620)
#define CLASS_1_2C2DA62D5BBB20B1__CTOR_OFFSET UNITYSDK_OFFSET(0xCB201D0)
#define CLASS_1_2C2DA62D5BBB20B1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCB20230)

inline static constexpr unsigned int Class_1_2C2DA62D5BBB20B1_TypeDefinitionIndex = 48327;

class Class_1_2C2DA62D5BBB20B1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	::System::String* Field_1_8; // 0x10
	::System::Action* Field_1_11; // 0x18
	::System::String* Field_1_3; // 0x20
	::Collections::Pooled::PooledList_1<::Class_1_F860364065044F08*>* Field_1_4; // 0x28
	::RPG::Client::PreloadItemFlag Field_1_7; // 0x30
	::Class_1_2C2DA62D5BBB20B1_PreloadItemState Field_1_5; // 0x34
	::Class_1_2C2DA62D5BBB20B1_PreloadType Field_1_6; // 0x38
	::Class_1_2C2DA62D5BBB20B1_PreloadType Field_1_9; // 0x3C
	::RPG::GameCore::PreloadGroupType Field_1_1; // 0x40
	::System::Single Field_1_10; // 0x44
	::System::UInt32 Field_1_2; // 0x48

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

	::System::String* Method_1_03169D758A5F0291()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1_METHOD_1_03169D758A5F0291_OFFSET))(this);
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

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2DA62D5BBB20B1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
