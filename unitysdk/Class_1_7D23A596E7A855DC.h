#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3D4CDAF848DB014A;
class Class_2_37D832480CB327E1;
namespace RPG::Client { class MonoEscalatorConfigure; }
namespace RPG::Client { class PropInstanceManageMonoPlugin; }
namespace System { class String; }

#define CLASS_1_7D23A596E7A855DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A2B80)
#define CLASS_1_7D23A596E7A855DC_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x99A31F0)
#define CLASS_1_7D23A596E7A855DC_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x99A31E0)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x99A2F00)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x99A2CB0)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x99A3210)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x99A3230)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x99A3020)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x99A2C70)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99A2C20)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x99A3240)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x99A3220)
#define CLASS_1_7D23A596E7A855DC__CTOR_OFFSET UNITYSDK_OFFSET(0x99A2A70)

inline static constexpr unsigned int Class_1_7D23A596E7A855DC_TypeDefinitionIndex = 52906;

class Class_1_7D23A596E7A855DC : public ::System::Object
{
public:
	::Class_2_37D832480CB327E1* Field_1_6; // 0x10
	::System::String* _UniqueName_k__BackingField; // 0x18
	::RPG::Client::PropInstanceManageMonoPlugin* Field_1_8; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_5; // 0x28
	::Class_1_3D4CDAF848DB014A* Field_1_9; // 0x30
	::RPG::Client::MonoEscalatorConfigure* Field_1_7; // 0x38
	::System::Single Field_1_2; // 0x40
	::System::Boolean Field_1_4; // 0x44
	::UnityEngine::Vector3 _Forward_k__BackingField; // 0x48
	::System::Single Field_1_3; // 0x54

	::System::Void _ctor(::System::String* a1, ::Class_2_37D832480CB327E1* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_37D832480CB327E1*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_92A998451FF61049(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_92A998451FF61049_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_GET_UNIQUENAME_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Forward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_GET_FORWARD_OFFSET))(this);
	}

	::Class_2_37D832480CB327E1* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_37D832480CB327E1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
