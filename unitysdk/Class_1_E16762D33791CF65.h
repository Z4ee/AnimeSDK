#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_810.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_628;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E16762D33791CF65_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15BFEB70)
#define CLASS_1_E16762D33791CF65_METHOD_1_07C9B6498A9C9005_OFFSET UNITYSDK_OFFSET(0x15BFECB0)
#define CLASS_1_E16762D33791CF65_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x15BFDD80)
#define CLASS_1_E16762D33791CF65_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x15BFED80)
#define CLASS_1_E16762D33791CF65_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x15BFE050)
#define CLASS_1_E16762D33791CF65_METHOD_1_6D5D3557CBDD4B6D_OFFSET UNITYSDK_OFFSET(0x15BFE140)
#define CLASS_1_E16762D33791CF65_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15BFE9D0)
#define CLASS_1_E16762D33791CF65_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15BFEA90)
#define CLASS_1_E16762D33791CF65_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x15BFE760)
#define CLASS_1_E16762D33791CF65_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x15BFDD60)
#define CLASS_1_E16762D33791CF65_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x15BFE900)
#define CLASS_1_E16762D33791CF65_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x15BFEF90)
#define CLASS_1_E16762D33791CF65__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFECA0)

inline static constexpr unsigned int Class_1_E16762D33791CF65_TypeDefinitionIndex = 12773;

class Class_1_E16762D33791CF65 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_628*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18
	::Struct_2_1862835F8661A21F_810 Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::String*>, ::Class_2_208CC9941471731A_628*>* Field_1_4; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_628*>* Field_1_1; // 0x40
	::System::Int32 Field_1_3; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D5D3557CBDD4B6D(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_6D5D3557CBDD4B6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_FINALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_07C9B6498A9C9005(::System::String* a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_628*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_628*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_07C9B6498A9C9005_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_628* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_628*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_628*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_628*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16762D33791CF65_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}
};
