#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBuffIcon; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_071C40089A141ACA_METHOD_1_07880C3C85D28804_OFFSET UNITYSDK_OFFSET(0x156CF9E0)
#define CLASS_1_071C40089A141ACA_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x156CFB10)
#define CLASS_1_071C40089A141ACA_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x156CFF70)
#define CLASS_1_071C40089A141ACA_METHOD_1_3453A1C1933277AB_OFFSET UNITYSDK_OFFSET(0x156CF0C0)
#define CLASS_1_071C40089A141ACA_METHOD_1_388F7AC45B18BAF4_OFFSET UNITYSDK_OFFSET(0x156D0CB0)
#define CLASS_1_071C40089A141ACA_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x156CD830)
#define CLASS_1_071C40089A141ACA_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x156D08C0)
#define CLASS_1_071C40089A141ACA_METHOD_1_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x156CDBE0)
#define CLASS_1_071C40089A141ACA_METHOD_1_6D6A596DB319F841_OFFSET UNITYSDK_OFFSET(0x156CD440)
#define CLASS_1_071C40089A141ACA_METHOD_1_6DC37033BBE0C893_OFFSET UNITYSDK_OFFSET(0x156CF2E0)
#define CLASS_1_071C40089A141ACA_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x156D0A90)
#define CLASS_1_071C40089A141ACA_METHOD_1_9E2A222301D0C981_OFFSET UNITYSDK_OFFSET(0x156CCB70)
#define CLASS_1_071C40089A141ACA_METHOD_1_A92A3F5FD912C9BD_OFFSET UNITYSDK_OFFSET(0x156CCF80)
#define CLASS_1_071C40089A141ACA_METHOD_1_B030C692F7E9F91E_OFFSET UNITYSDK_OFFSET(0x156CD640)
#define CLASS_1_071C40089A141ACA_METHOD_1_C43C82841DEC3B64_OFFSET UNITYSDK_OFFSET(0x156CD260)
#define CLASS_1_071C40089A141ACA_METHOD_1_CA34427CED9BE33F_OFFSET UNITYSDK_OFFSET(0x156CF8B0)
#define CLASS_1_071C40089A141ACA_METHOD_1_D07E0588CDDEE993_OFFSET UNITYSDK_OFFSET(0x156CDC60)
#define CLASS_1_071C40089A141ACA_METHOD_1_E1400E4D7CE222C3_OFFSET UNITYSDK_OFFSET(0x156CC970)
#define CLASS_1_071C40089A141ACA_METHOD_1_EBA9221EA085B52F_OFFSET UNITYSDK_OFFSET(0x156CEAC0)
#define CLASS_1_071C40089A141ACA_METHOD_1_EDEE2005066C4244_OFFSET UNITYSDK_OFFSET(0x156CD940)
#define CLASS_1_071C40089A141ACA_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x156CCF60)
#define CLASS_1_071C40089A141ACA_METHOD_1_FADEB4F9AE306EC1_OFFSET UNITYSDK_OFFSET(0x156D1120)
#define CLASS_1_071C40089A141ACA__CTOR_OFFSET UNITYSDK_OFFSET(0x156CC6F0)

inline static constexpr unsigned int Class_1_071C40089A141ACA_TypeDefinitionIndex = 43338;

class Class_1_071C40089A141ACA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* Field_1_9; // 0x10
	::UnityEngine::Transform* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::MoleMole::MonoBuffIcon*>*>*>* Field_1_11; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_1_10; // 0x38
	::UnityEngine::Transform* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* Field_1_4; // 0x48
	::System::Boolean Field_1_5; // 0x50
	::System::UInt32 Field_1_0; // 0x54

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_E1400E4D7CE222C3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_E1400E4D7CE222C3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9E2A222301D0C981(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_9E2A222301D0C981_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_A92A3F5FD912C9BD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_A92A3F5FD912C9BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C43C82841DEC3B64(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_C43C82841DEC3B64_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_B030C692F7E9F91E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_B030C692F7E9F91E_OFFSET))(this);
	}

	::System::Void Method_1_EDEE2005066C4244(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_EDEE2005066C4244_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D07E0588CDDEE993(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_D07E0588CDDEE993_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_07880C3C85D28804(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_07880C3C85D28804_OFFSET))(this, a1);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Boolean Method_1_3453A1C1933277AB(::System::Int32 a1, ::MoleMole::MonoBuffIcon* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MonoBuffIcon*))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_3453A1C1933277AB_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_CA34427CED9BE33F(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_CA34427CED9BE33F_OFFSET))(this, a1);
	}

	::System::Void Method_1_388F7AC45B18BAF4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_388F7AC45B18BAF4_OFFSET))(this, a1);
	}

	::MoleMole::MonoBuffIcon* Method_1_EBA9221EA085B52F(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_EBA9221EA085B52F_OFFSET))(this, a1, a2);
	}

	::MoleMole::MonoBuffIcon* Method_1_6D6A596DB319F841(::System::Int32 a1)
	{
		return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_6D6A596DB319F841_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC37033BBE0C893(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_6DC37033BBE0C893_OFFSET))(this, a1);
	}

	::System::Void Method_1_FADEB4F9AE306EC1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_FADEB4F9AE306EC1_OFFSET))(this, a1);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}
};
