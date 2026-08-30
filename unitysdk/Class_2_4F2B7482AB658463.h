#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47DAE01AFECF913D.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3A873ED311700F93;

#define CLASS_2_4F2B7482AB658463_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1A7ED7F0)
#define CLASS_2_4F2B7482AB658463_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1A7ED7C0)
#define CLASS_2_4F2B7482AB658463_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A7ED970)
#define CLASS_2_4F2B7482AB658463_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x1A7EDBE0)
#define CLASS_2_4F2B7482AB658463_METHOD_2_8F4CC8440DF53D30_OFFSET UNITYSDK_OFFSET(0x1A7ED8C0)
#define CLASS_2_4F2B7482AB658463_METHOD_2_90A9D3FC07AADABC_OFFSET UNITYSDK_OFFSET(0x1A7ED820)
#define CLASS_2_4F2B7482AB658463_METHOD_2_C8324B85AEB18C17_OFFSET UNITYSDK_OFFSET(0x1A7ED7B0)
#define CLASS_2_4F2B7482AB658463_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A7EDBA0)
#define CLASS_2_4F2B7482AB658463_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1A7ED810)
#define CLASS_2_4F2B7482AB658463_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1A7ED7E0)
#define CLASS_2_4F2B7482AB658463__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7EDD00)
#define CLASS_2_4F2B7482AB658463__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ED950)

inline static constexpr unsigned int Class_2_4F2B7482AB658463_TypeDefinitionIndex = 77644;

class Class_2_4F2B7482AB658463 : public ::Class_1_47DAE01AFECF913D
{
public:
	static ::System::Int32* StaticGet_PMHLFNJNKNP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4F2B7482AB658463_TypeDefinitionIndex)->GetStaticField(0x14070);
	}
	static ::System::Int32* StaticGet_HKGHMHKEJNC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4F2B7482AB658463_TypeDefinitionIndex)->GetStaticField(0x14074);
	}
	::RPG::MVector3 _StartPos_k__BackingField; // 0x40
	::RPG::MVector3 _EndPos_k__BackingField; // 0x4C

	::System::Void _ctor(::Class_1_3A873ED311700F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463__CCTOR_OFFSET))();
	}

	::RPG::GameCore::CakeRaceAIState Method_2_C8324B85AEB18C17()
	{
		return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_METHOD_2_C8324B85AEB18C17_OFFSET))(this);
	}

	::RPG::MVector3 get_StartPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_SET_STARTPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_EndPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_SET_ENDPOS_OFFSET))(this, a1);
	}

	::System::Void Method_2_90A9D3FC07AADABC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_METHOD_2_90A9D3FC07AADABC_OFFSET))(this, a1, a2);
	}

	static ::Class_2_4F2B7482AB658463* Method_2_8F4CC8440DF53D30(::Class_1_3A873ED311700F93* a1)
	{
		return ((::Class_2_4F2B7482AB658463*(*)(::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_METHOD_2_8F4CC8440DF53D30_OFFSET))(a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F2B7482AB658463_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}
};
