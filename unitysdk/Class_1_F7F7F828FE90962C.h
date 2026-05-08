#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD58E95ADFF8F5_65;
class Class_3_6187A10BAB170F19;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_BE9B8B83AC705E3A;

#define CLASS_1_F7F7F828FE90962C_METHOD_1_0D14C3A8829D2FDB_OFFSET UNITYSDK_OFFSET(0xFB68260)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_639D3EEFA0C7EA0E_OFFSET UNITYSDK_OFFSET(0xFB68920)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_66153C75D9B30EA6_OFFSET UNITYSDK_OFFSET(0xFB68410)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_A302849551355227_OFFSET UNITYSDK_OFFSET(0xFB68A40)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_E1DA2427B085F596_OFFSET UNITYSDK_OFFSET(0xFB682D0)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_EDFF34C73306C6F7_OFFSET UNITYSDK_OFFSET(0xFB686A0)
#define CLASS_1_F7F7F828FE90962C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB681B0)

inline static constexpr unsigned int Class_1_F7F7F828FE90962C_TypeDefinitionIndex = 43760;

class Class_1_F7F7F828FE90962C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_0; // 0x10
	::Class_1_BE9B8B83AC705E3A<::System::Int32, ::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D14C3A8829D2FDB(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_0D14C3A8829D2FDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1DA2427B085F596(::Class_3_32CD58E95ADFF8F5_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_65*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_E1DA2427B085F596_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFF34C73306C6F7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_EDFF34C73306C6F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_639D3EEFA0C7EA0E(::Class_3_6187A10BAB170F19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6187A10BAB170F19*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_639D3EEFA0C7EA0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_66153C75D9B30EA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_66153C75D9B30EA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A302849551355227(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_A302849551355227_OFFSET))(this, a1, a2);
	}
};
