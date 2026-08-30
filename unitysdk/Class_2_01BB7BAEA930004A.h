#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47DAE01AFECF913D.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3A873ED311700F93;

#define CLASS_2_01BB7BAEA930004A_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB405EC0)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB406070)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xB4062E0)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xB406010)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_8A657BFA9C9561D8_OFFSET UNITYSDK_OFFSET(0xB405EF0)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_C8324B85AEB18C17_OFFSET UNITYSDK_OFFSET(0xB405EB0)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB4062A0)
#define CLASS_2_01BB7BAEA930004A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB405FD0)
#define CLASS_2_01BB7BAEA930004A_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB405EE0)
#define CLASS_2_01BB7BAEA930004A__CCTOR_OFFSET UNITYSDK_OFFSET(0xB406400)
#define CLASS_2_01BB7BAEA930004A__CTOR_OFFSET UNITYSDK_OFFSET(0xB405FB0)

inline static constexpr unsigned int Class_2_01BB7BAEA930004A_TypeDefinitionIndex = 77648;

class Class_2_01BB7BAEA930004A : public ::Class_1_47DAE01AFECF913D
{
public:
	static ::System::Int32* StaticGet_HKGHMHKEJNC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_01BB7BAEA930004A_TypeDefinitionIndex)->GetStaticField(0x13660);
	}
	static ::System::Int32* StaticGet_PMHLFNJNKNP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_01BB7BAEA930004A_TypeDefinitionIndex)->GetStaticField(0x13664);
	}
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x40

	::System::Void _ctor(::Class_1_3A873ED311700F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A__CCTOR_OFFSET))();
	}

	::RPG::GameCore::CakeRaceAIState Method_2_C8324B85AEB18C17()
	{
		return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_C8324B85AEB18C17_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_SET_POSITION_OFFSET))(this, a1);
	}

	static ::Class_2_01BB7BAEA930004A* Method_2_8A657BFA9C9561D8(::Class_1_3A873ED311700F93* a1)
	{
		return ((::Class_2_01BB7BAEA930004A*(*)(::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_8A657BFA9C9561D8_OFFSET))(a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01BB7BAEA930004A_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}
};
