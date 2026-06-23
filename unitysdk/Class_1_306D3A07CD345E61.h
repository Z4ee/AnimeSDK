#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_86.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_390;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_306D3A07CD345E61_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1499B7A0)
#define CLASS_1_306D3A07CD345E61_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1499B090)
#define CLASS_1_306D3A07CD345E61_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1499D250)
#define CLASS_1_306D3A07CD345E61_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x1499C8E0)
#define CLASS_1_306D3A07CD345E61_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1499B450)
#define CLASS_1_306D3A07CD345E61_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1499B360)
#define CLASS_1_306D3A07CD345E61_METHOD_1_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x1499B930)
#define CLASS_1_306D3A07CD345E61_METHOD_1_6BAA61A51CBAF242_OFFSET UNITYSDK_OFFSET(0x1499CB60)
#define CLASS_1_306D3A07CD345E61_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1499B600)
#define CLASS_1_306D3A07CD345E61_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1499B6C0)
#define CLASS_1_306D3A07CD345E61_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x1499B460)
#define CLASS_1_306D3A07CD345E61_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1499B070)
#define CLASS_1_306D3A07CD345E61_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1499C810)
#define CLASS_1_306D3A07CD345E61_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1499CB40)
#define CLASS_1_306D3A07CD345E61__CTOR_OFFSET UNITYSDK_OFFSET(0x1499B8E0)

inline static constexpr unsigned int Class_1_306D3A07CD345E61_TypeDefinitionIndex = 10600;

class Class_1_306D3A07CD345E61 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_390*>*>* Field_1_4; // 0x10
	::Struct_2_1862835F8661A21F_86 Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_390*>* Field_1_6; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_390*>*>* Field_1_5; // 0x40
	::Il2CppArray<::Class_2_208CC9941471731A_390*>* Field_1_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x50
	::System::Int32 Field_1_7; // 0x58
	::System::Boolean Field_1_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_5D6CD31BA2372F92_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_390* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_390*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_390*>* Method_1_6BAA61A51CBAF242(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_390*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_6BAA61A51CBAF242_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_390* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_390*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_390*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_390*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_306D3A07CD345E61_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
