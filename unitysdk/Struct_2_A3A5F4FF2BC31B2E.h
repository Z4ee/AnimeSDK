#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_28EBF7743F49BA15_OFFSET UNITYSDK_OFFSET(0x7468B0)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_625FBF14AF26EF8B_OFFSET UNITYSDK_OFFSET(0x7468F0)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x7469C0)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_B924E6EC33D07211_OFFSET UNITYSDK_OFFSET(0x746980)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x46F550)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2F1C00)
#define STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x383860)
#define STRUCT_2_A3A5F4FF2BC31B2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x12281360)
#define STRUCT_2_A3A5F4FF2BC31B2E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x746850)
#define STRUCT_2_A3A5F4FF2BC31B2E__CTOR_2_OFFSET UNITYSDK_OFFSET(0x746860)
#define STRUCT_2_A3A5F4FF2BC31B2E__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7468A0)
#define STRUCT_2_A3A5F4FF2BC31B2E__CTOR_OFFSET UNITYSDK_OFFSET(0x746830)

inline static constexpr unsigned int Struct_2_A3A5F4FF2BC31B2E_TypeDefinitionIndex = 78060;

struct alignas(8) Struct_2_A3A5F4FF2BC31B2E
{
	static ::Struct_2_A3A5F4FF2BC31B2E* StaticGet_Field_2_0()
	{
		return (::Struct_2_A3A5F4FF2BC31B2E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A3A5F4FF2BC31B2E_TypeDefinitionIndex)->GetStaticField(0x3F9D0);
	}
	::MoleMole::Battle::Entity* Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Boolean Field_2_4; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E__CTOR_1_OFFSET))(this, a1);
	}

	/*
	::System::Void _ctor_2(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E__CTOR_2_OFFSET))(this, a1);
	}
	*/

	::System::Void _ctor_3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E__CTOR_3_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E__CCTOR_OFFSET))();
	}

	/*
	::UnityEngine::Quaternion Method_2_28EBF7743F49BA15(::Struct_2_430298E7CED86228 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Struct_2_430298E7CED86228))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_28EBF7743F49BA15_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_625FBF14AF26EF8B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_625FBF14AF26EF8B_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_B924E6EC33D07211(::Struct_2_430298E7CED86228 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_430298E7CED86228))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_B924E6EC33D07211_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3A5F4FF2BC31B2E_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}
};
