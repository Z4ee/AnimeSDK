#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_143B7A497B890286_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_E49938F4BFE74407;
class Class_2_41CBD738F97E429F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_381355C35959B3A0_OFFSET UNITYSDK_OFFSET(0x13756A50)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x13756370)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_4DFFE08D848C0BBD_OFFSET UNITYSDK_OFFSET(0x13756A60)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x13756290)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_56EEA7C893A52EF2_OFFSET UNITYSDK_OFFSET(0x137561A0)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x13755FD0)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_856985C4DC46A933_OFFSET UNITYSDK_OFFSET(0x13755FE0)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_8DAD834C952342F4_OFFSET UNITYSDK_OFFSET(0x13755ED0)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_95729F59F958FA96_OFFSET UNITYSDK_OFFSET(0x13756710)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_9F8499824BE26DFD_OFFSET UNITYSDK_OFFSET(0x13755FC0)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x137566A0)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_D34185CA6A692B79_OFFSET UNITYSDK_OFFSET(0x13755D10)
#define CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x13756380)
#define CLASS_1_B2B5D28F2FE8EF9A__CTOR_OFFSET UNITYSDK_OFFSET(0x13755B00)

inline static constexpr unsigned int Class_1_B2B5D28F2FE8EF9A_TypeDefinitionIndex = 54711;

class Class_1_B2B5D28F2FE8EF9A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E49938F4BFE74407*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E49938F4BFE74407*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x20
	::System::Collections::Generic::HashSet_1<::Struct_2_143B7A497B890286_1>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>* Field_1_3; // 0x38
	::MoleMole::Vector2Int Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* Method_1_D34185CA6A692B79(::UnityEngine::Vector2 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_D34185CA6A692B79_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_143B7A497B890286_1>* Method_1_9F8499824BE26DFD()
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_143B7A497B890286_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_9F8499824BE26DFD_OFFSET))(this);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_E49938F4BFE74407*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E49938F4BFE74407*>*))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::Class_1_E49938F4BFE74407* Method_1_856985C4DC46A933(::UnityEngine::Vector2 a1)
	{
		return ((::Class_1_E49938F4BFE74407*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_856985C4DC46A933_OFFSET))(this, a1);
	}

	::Class_1_E49938F4BFE74407* Method_1_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_E49938F4BFE74407*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E49938F4BFE74407*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E49938F4BFE74407*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_E49938F4BFE74407* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E49938F4BFE74407*))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_143B7A497B890286_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_143B7A497B890286_1))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_95729F59F958FA96(::Class_2_41CBD738F97E429F* a1, ::Class_1_E49938F4BFE74407* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_41CBD738F97E429F*, ::Class_1_E49938F4BFE74407*))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_95729F59F958FA96_OFFSET))(this, a1, a2);
	}

	::Class_1_E49938F4BFE74407* Method_1_56EEA7C893A52EF2(::MoleMole::Vector2Int a1)
	{
		return ((::Class_1_E49938F4BFE74407*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_56EEA7C893A52EF2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* Method_1_8DAD834C952342F4(::MoleMole::Vector2Int a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_8DAD834C952342F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_381355C35959B3A0(::System::Collections::Generic::HashSet_1<::Struct_2_143B7A497B890286_1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Struct_2_143B7A497B890286_1>*))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_381355C35959B3A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DFFE08D848C0BBD(::Struct_2_143B7A497B890286_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_143B7A497B890286_1))((::PBYTE)hIl2Cpp + CLASS_1_B2B5D28F2FE8EF9A_METHOD_1_4DFFE08D848C0BBD_OFFSET))(this, a1);
	}
};
