#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A345EAE5F749316_43;
class Class_3_51F1E0C1802CFAF1;
class Class_3_BD4AA5812E2F928C_1;
class Class_3_EC25B6E84130E2CA;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A98E572F9974A8AB_METHOD_2_05402D20C9E95B67_OFFSET UNITYSDK_OFFSET(0x1593BCF0)
#define CLASS_2_A98E572F9974A8AB_METHOD_2_1A6501A750A9701F_OFFSET UNITYSDK_OFFSET(0x1593B240)
#define CLASS_2_A98E572F9974A8AB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1593B110)
#define CLASS_2_A98E572F9974A8AB_METHOD_2_6260C856881447F0_OFFSET UNITYSDK_OFFSET(0x1593B4F0)
#define CLASS_2_A98E572F9974A8AB_METHOD_2_88C5497037BE31EF_OFFSET UNITYSDK_OFFSET(0x1593BA80)
#define CLASS_2_A98E572F9974A8AB_METHOD_2_E92BA641366CE9D9_OFFSET UNITYSDK_OFFSET(0x1593B8C0)
#define CLASS_2_A98E572F9974A8AB_ONSTART_OFFSET UNITYSDK_OFFSET(0x1593B0D0)
#define CLASS_2_A98E572F9974A8AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1593B0C0)

inline static constexpr unsigned int Class_2_A98E572F9974A8AB_TypeDefinitionIndex = 91087;

class Class_2_A98E572F9974A8AB : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_1A6501A750A9701F(::Class_3_51F1E0C1802CFAF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_51F1E0C1802CFAF1*))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_METHOD_2_1A6501A750A9701F_OFFSET))(this, a1);
	}

	::System::Void Method_2_6260C856881447F0(::Class_3_BD4AA5812E2F928C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BD4AA5812E2F928C_1*))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_METHOD_2_6260C856881447F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_E92BA641366CE9D9(::Class_3_1A345EAE5F749316_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_43*))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_METHOD_2_E92BA641366CE9D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_88C5497037BE31EF(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_METHOD_2_88C5497037BE31EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_05402D20C9E95B67(::System::Collections::Generic::List_1<::Class_3_EC25B6E84130E2CA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_EC25B6E84130E2CA*>*))((::PBYTE)hIl2Cpp + CLASS_2_A98E572F9974A8AB_METHOD_2_05402D20C9E95B67_OFFSET))(this, a1);
	}
};
