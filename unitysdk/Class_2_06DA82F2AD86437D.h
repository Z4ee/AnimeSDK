#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47DAE01AFECF913D.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3A873ED311700F93;

#define CLASS_2_06DA82F2AD86437D_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB967670)
#define CLASS_2_06DA82F2AD86437D_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB967640)
#define CLASS_2_06DA82F2AD86437D_GET_V0_OFFSET UNITYSDK_OFFSET(0xB9676A0)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB967780)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB967980)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xB967C90)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_8F4CC8440DF53D30_OFFSET UNITYSDK_OFFSET(0xB9676D0)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0xB967B50)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_C8324B85AEB18C17_OFFSET UNITYSDK_OFFSET(0xB967630)
#define CLASS_2_06DA82F2AD86437D_METHOD_2_F434636093AEB743_OFFSET UNITYSDK_OFFSET(0xB967DB0)
#define CLASS_2_06DA82F2AD86437D_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB967690)
#define CLASS_2_06DA82F2AD86437D_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB967660)
#define CLASS_2_06DA82F2AD86437D_SET_V0_OFFSET UNITYSDK_OFFSET(0xB9676C0)
#define CLASS_2_06DA82F2AD86437D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB967E70)
#define CLASS_2_06DA82F2AD86437D__CTOR_OFFSET UNITYSDK_OFFSET(0xB967760)

inline static constexpr unsigned int Class_2_06DA82F2AD86437D_TypeDefinitionIndex = 77644;

class Class_2_06DA82F2AD86437D : public ::Class_1_47DAE01AFECF913D
{
public:
	static ::System::Int32* StaticGet_NIJJLNIJNMI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_06DA82F2AD86437D_TypeDefinitionIndex)->GetStaticField(0xCBB0);
	}
	static ::System::Int32* StaticGet_LKHIIAMEHFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_06DA82F2AD86437D_TypeDefinitionIndex)->GetStaticField(0xCBB4);
	}
	::RPG::MVector3 _StartPos_k__BackingField; // 0x40
	::RPG::MVector3 _EndPos_k__BackingField; // 0x4C
	::RPG::MVector3 _V0_k__BackingField; // 0x58

	::System::Void _ctor(::Class_1_3A873ED311700F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D__CCTOR_OFFSET))();
	}

	::RPG::GameCore::CakeRaceAIState Method_2_C8324B85AEB18C17()
	{
		return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_C8324B85AEB18C17_OFFSET))(this);
	}

	::RPG::MVector3 get_StartPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_SET_STARTPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_EndPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_SET_ENDPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_V0()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_GET_V0_OFFSET))(this);
	}

	::System::Void set_V0(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_SET_V0_OFFSET))(this, a1);
	}

	static ::Class_2_06DA82F2AD86437D* Method_2_8F4CC8440DF53D30(::Class_1_3A873ED311700F93* a1)
	{
		return ((::Class_2_06DA82F2AD86437D*(*)(::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_8F4CC8440DF53D30_OFFSET))(a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_F434636093AEB743(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_F434636093AEB743_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06DA82F2AD86437D_METHOD_2_ADA85C40A3382050_OFFSET))(this);
	}
};
