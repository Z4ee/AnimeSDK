#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_A509A996D269C6F2_3;
class Class_2_781A24D57CD122C5;
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CA1217CF6D6791F0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16E51FA0)
#define CLASS_2_CA1217CF6D6791F0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16E52090)
#define CLASS_2_CA1217CF6D6791F0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16E515C0)
#define CLASS_2_CA1217CF6D6791F0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16E515E0)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_0701B0E9F618C30B_OFFSET UNITYSDK_OFFSET(0x16E51B50)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x16E51AC0)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_408185F9C93560D9_OFFSET UNITYSDK_OFFSET(0x16E51E10)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16E51640)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16E51EB0)
#define CLASS_2_CA1217CF6D6791F0_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x16E517C0)
#define CLASS_2_CA1217CF6D6791F0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16E515D0)
#define CLASS_2_CA1217CF6D6791F0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E52160)
#define CLASS_2_CA1217CF6D6791F0__ONBIND_OFFSET UNITYSDK_OFFSET(0x16E513C0)
#define CLASS_2_CA1217CF6D6791F0__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16E51A60)

inline static constexpr unsigned int Class_2_CA1217CF6D6791F0_TypeDefinitionIndex = 69041;

class Class_2_CA1217CF6D6791F0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Il2CppArray<::Class_2_781A24D57CD122C5*>* Field_2_1; // 0x60
	::UnityEngine::Animation* Field_2_2; // 0x68
	::RPG::Client::RogueMagicScepterInfo* Field_2_3; // 0x70
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
