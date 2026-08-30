#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_A509A996D269C6F2_3;
class Class_2_781A24D57CD122C5;
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CA1217CF6D6791F0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBAF5D40)
#define CLASS_2_CA1217CF6D6791F0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBAF5E30)
#define CLASS_2_CA1217CF6D6791F0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBAF5360)
#define CLASS_2_CA1217CF6D6791F0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBAF5380)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_0701B0E9F618C30B_OFFSET UNITYSDK_OFFSET(0xBAF5900)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0xBAF5870)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_408185F9C93560D9_OFFSET UNITYSDK_OFFSET(0xBAF5BB0)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBAF53E0)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBAF5C50)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xBAF5570)
#define CLASS_2_CA1217CF6D6791F0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBAF5370)
#define CLASS_2_CA1217CF6D6791F0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAF5F00)
#define CLASS_2_CA1217CF6D6791F0__ONBIND_OFFSET UNITYSDK_OFFSET(0xBAF5160)
#define CLASS_2_CA1217CF6D6791F0__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBAF5810)

inline static constexpr unsigned int Class_2_CA1217CF6D6791F0_TypeDefinitionIndex = 72241;

class Class_2_CA1217CF6D6791F0 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::Client::RogueMagicScepterInfo* KMMGFKIGELG; // 0x60
	::UnityEngine::Animation* PMOJILOJEPE; // 0x68
	::Il2CppArray<::Class_2_781A24D57CD122C5*>* NLGGONAAPAH; // 0x70
	::System::Int32 _Index_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_METHOD_2_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0701B0E9F618C30B(::Class_1_A509A996D269C6F2_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A509A996D269C6F2_3*))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_METHOD_2_0701B0E9F618C30B_OFFSET))(this, a1);
	}

	::Class_2_781A24D57CD122C5* Method_2_408185F9C93560D9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_781A24D57CD122C5*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_METHOD_2_408185F9C93560D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1217CF6D6791F0_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
