#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_8D3BE177805F6B96_9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_274;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B108250D57C93CC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18CE79E0)
#define CLASS_1_2B108250D57C93CC_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x18CE6D60)
#define CLASS_1_2B108250D57C93CC_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18CE7630)
#define CLASS_1_2B108250D57C93CC_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x18CE71A0)
#define CLASS_1_2B108250D57C93CC_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x18CE7840)
#define CLASS_1_2B108250D57C93CC_METHOD_1_87E60D0B8728CCD0_OFFSET UNITYSDK_OFFSET(0x18CE7C30)
#define CLASS_1_2B108250D57C93CC_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x18CE7900)
#define CLASS_1_2B108250D57C93CC_METHOD_1_BD917F4EC8B82D68_OFFSET UNITYSDK_OFFSET(0x18CE7640)
#define CLASS_1_2B108250D57C93CC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18CE6D40)
#define CLASS_1_2B108250D57C93CC_METHOD_1_D3CB0A9F8E55E6E8_OFFSET UNITYSDK_OFFSET(0x18CE7FB0)
#define CLASS_1_2B108250D57C93CC_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x18CE7060)
#define CLASS_1_2B108250D57C93CC_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x18CE83F0)
#define CLASS_1_2B108250D57C93CC_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x18CE7F90)
#define CLASS_1_2B108250D57C93CC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7B70)

inline static constexpr unsigned int Class_1_2B108250D57C93CC_TypeDefinitionIndex = 17321;

class Class_1_2B108250D57C93CC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_6; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_274*>* Field_1_7; // 0x18
	::Struct_2_8D3BE177805F6B96_9 Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_274*>*>* Field_1_11; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_5; // 0x40
	::System::Boolean Field_1_10; // 0x48
	::System::Int32 Field_1_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_BD917F4EC8B82D68(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_BD917F4EC8B82D68_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_274* Method_1_87E60D0B8728CCD0(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_274*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_87E60D0B8728CCD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_274* Method_1_D3CB0A9F8E55E6E8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_274*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_D3CB0A9F8E55E6E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_274*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_274*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B108250D57C93CC_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}
};
