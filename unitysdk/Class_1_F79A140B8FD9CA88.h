#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_262.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_693;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F79A140B8FD9CA88_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14F46410)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x14F45D00)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_1709A247CD0E080B_OFFSET UNITYSDK_OFFSET(0x14F47A00)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x14F46690)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x14F477A0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x14F460C0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x14F45FD0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x14F468A0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14F46270)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14F46330)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x14F460D0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14F45CE0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x14F465A0)
#define CLASS_1_F79A140B8FD9CA88_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x14F46670)
#define CLASS_1_F79A140B8FD9CA88__CTOR_OFFSET UNITYSDK_OFFSET(0x14F46550)

inline static constexpr unsigned int Class_1_F79A140B8FD9CA88_TypeDefinitionIndex = 17513;

class Class_1_F79A140B8FD9CA88 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_693*>*>* Field_1_5; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_693*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_693*>* Field_1_6; // 0x28
	::Struct_2_1862835F8661A21F_262 Field_1_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_693*>*>* Field_1_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x50
	::System::Boolean Field_1_8; // 0x58
	::System::Int32 Field_1_7; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_693*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_693*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_5D6CD31BA2372F92_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_693* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_693*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_693* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_693*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_693*>* Method_1_1709A247CD0E080B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_693*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_1709A247CD0E080B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79A140B8FD9CA88_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
