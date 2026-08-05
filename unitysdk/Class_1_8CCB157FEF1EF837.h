#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_646.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_484;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8CCB157FEF1EF837_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BBCF260)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1BBCE630)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1BBCF780)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x1BBCF990)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BBCF190)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_4CEAEA2D01E525FA_OFFSET UNITYSDK_OFFSET(0x1BBCF700)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x1BBCED40)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1BBCF1A0)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x1BBCDFA0)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1BBCF510)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1BBCF450)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x1BBCE7D0)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BBCDF80)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1BBCF0C0)
#define CLASS_1_8CCB157FEF1EF837_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1BBCF760)
#define CLASS_1_8CCB157FEF1EF837__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCF5F0)

inline static constexpr unsigned int Class_1_8CCB157FEF1EF837_TypeDefinitionIndex = 11295;

class Class_1_8CCB157FEF1EF837 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_484*>*>* Field_1_1; // 0x20
	::Struct_2_1862835F8661A21F_646 Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x40
	::Il2CppArray<::Class_2_208CC9941471731A_484*>* Field_1_2; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_7; // 0x50
	::System::Boolean Field_1_11; // 0x58
	::System::Int32 Field_1_5; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Int32 Method_1_4CEAEA2D01E525FA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_4CEAEA2D01E525FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_484*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_484* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_484*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_484* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_484*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}
};
