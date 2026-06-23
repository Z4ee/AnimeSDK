#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_50BF4F6DB8616D8D_1.h"
#include "unitysdk/Enum_3_8ECE567D9875F145.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_13FEE442E6EBE447_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x16FE93B0)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_3FB3D01F50FC6D4E_OFFSET UNITYSDK_OFFSET(0x16FE93D0)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_40C73E9C7D2750A0_OFFSET UNITYSDK_OFFSET(0x16FEA020)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x16FE8F00)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_6647AC7A23B57DA8_OFFSET UNITYSDK_OFFSET(0x16FE9630)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_74067BAEDA820FD3_OFFSET UNITYSDK_OFFSET(0x16FE9610)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_7C81964C633AC5A0_OFFSET UNITYSDK_OFFSET(0x16FE9CE0)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x16FE93C0)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_AC8A0D0642E6FB6C_OFFSET UNITYSDK_OFFSET(0x16FE8F10)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x16FE9620)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FE8EB0)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_DB97950CE5E71243_OFFSET UNITYSDK_OFFSET(0x16FE8F30)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_E18578E270D56DE7_OFFSET UNITYSDK_OFFSET(0x16FE93A0)
#define CLASS_1_13FEE442E6EBE447_METHOD_1_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x16FE98D0)
#define CLASS_1_13FEE442E6EBE447__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE8EF0)

inline static constexpr unsigned int Class_1_13FEE442E6EBE447_TypeDefinitionIndex = 68440;

class Class_1_13FEE442E6EBE447 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_8; // 0x10
	::MoleMole::Battle::Entity* Field_1_3; // 0x30
	::System::String* Field_1_2; // 0x38
	::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>* Field_1_7; // 0x40
	::Class_2_F8EB4D9464ADCCA1* Field_1_9; // 0x48
	::Enum_3_8ECE567D9875F145 Field_1_0; // 0x50
	::System::Int32 Field_1_1; // 0x54
	::Enum_3_50BF4F6DB8616D8D_1 Field_1_4; // 0x58
	::UnityEngine::Vector3 Field_1_5; // 0x5C
	::UnityEngine::Quaternion Field_1_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}

	::Foundation::AssetRequestHandle Method_1_AC8A0D0642E6FB6C()
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_AC8A0D0642E6FB6C_OFFSET))(this);
	}

	::System::Void Method_1_DB97950CE5E71243(::System::Int32 a1, ::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_DB97950CE5E71243_OFFSET))(this, a1, a2);
	}

	::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>* Method_1_E18578E270D56DE7()
	{
		return ((::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_E18578E270D56DE7_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_50BF4F6DB8616D8D_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_50BF4F6DB8616D8D_1))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_50BF4F6DB8616D8D_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_50BF4F6DB8616D8D_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3FB3D01F50FC6D4E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_3FB3D01F50FC6D4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_74067BAEDA820FD3(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_74067BAEDA820FD3_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_1_6647AC7A23B57DA8(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_6647AC7A23B57DA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_F53BAAE38A584428_OFFSET))(this);
	}

	::System::Void Method_1_7C81964C633AC5A0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_7C81964C633AC5A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_40C73E9C7D2750A0(::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_13FEE442E6EBE447*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_13FEE442E6EBE447_METHOD_1_40C73E9C7D2750A0_OFFSET))(this, a1);
	}
};
