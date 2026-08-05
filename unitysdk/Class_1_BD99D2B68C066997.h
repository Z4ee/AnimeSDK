#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_A3B5141C858708A0_25.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1054;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_BD99D2B68C066997_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A6AA5C0)
#define CLASS_1_BD99D2B68C066997_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A6A9F20)
#define CLASS_1_BD99D2B68C066997_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A6AA280)
#define CLASS_1_BD99D2B68C066997_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1A6AA1A0)
#define CLASS_1_BD99D2B68C066997_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A6AA420)
#define CLASS_1_BD99D2B68C066997_METHOD_1_87E60D0B8728CCD0_OFFSET UNITYSDK_OFFSET(0x1A6AA830)
#define CLASS_1_BD99D2B68C066997_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A6AA4E0)
#define CLASS_1_BD99D2B68C066997_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1A6AA290)
#define CLASS_1_BD99D2B68C066997_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A6A9F00)
#define CLASS_1_BD99D2B68C066997_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1A6AA740)
#define CLASS_1_BD99D2B68C066997_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1A6AA810)
#define CLASS_1_BD99D2B68C066997__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6AA6F0)

inline static constexpr unsigned int Class_1_BD99D2B68C066997_TypeDefinitionIndex = 15702;

class Class_1_BD99D2B68C066997 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_7; // 0x10
	::Struct_2_A3B5141C858708A0_25 Field_1_2; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_1054*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_0; // 0x38
	::System::Int32 Field_1_6; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_1054*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_1054*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1054* Method_1_87E60D0B8728CCD0(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1054*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD99D2B68C066997_METHOD_1_87E60D0B8728CCD0_OFFSET))(this, a1);
	}
};
