#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3D3C03F026030C32;
class Class_3_87492AF8E794E45E_38;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_95FF6CE8101C0F53;

#define CLASS_1_F7F7F828FE90962C_METHOD_1_0120539054A2AC4D_OFFSET UNITYSDK_OFFSET(0x1826C450)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_0D14C3A8829D2FDB_OFFSET UNITYSDK_OFFSET(0x1826C6E0)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_639D3EEFA0C7EA0E_OFFSET UNITYSDK_OFFSET(0x1826C330)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_80EA9137CC81A9BC_OFFSET UNITYSDK_OFFSET(0x1826C890)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_E1DA2427B085F596_OFFSET UNITYSDK_OFFSET(0x1826C750)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_EDFF34C73306C6F7_OFFSET UNITYSDK_OFFSET(0x1826C0B0)
#define CLASS_1_F7F7F828FE90962C__CTOR_OFFSET UNITYSDK_OFFSET(0x1826C000)

inline static constexpr unsigned int Class_1_F7F7F828FE90962C_TypeDefinitionIndex = 50591;

class Class_1_F7F7F828FE90962C : public ::System::Object
{
public:
	::Class_1_95FF6CE8101C0F53<::System::Int32, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDFF34C73306C6F7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_EDFF34C73306C6F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_639D3EEFA0C7EA0E(::Class_3_3D3C03F026030C32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3D3C03F026030C32*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_639D3EEFA0C7EA0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0120539054A2AC4D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_0120539054A2AC4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D14C3A8829D2FDB(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_0D14C3A8829D2FDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1DA2427B085F596(::Class_3_87492AF8E794E45E_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_38*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_E1DA2427B085F596_OFFSET))(this, a1);
	}

	::System::Void Method_1_80EA9137CC81A9BC(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_80EA9137CC81A9BC_OFFSET))(this, a1, a2);
	}
};
