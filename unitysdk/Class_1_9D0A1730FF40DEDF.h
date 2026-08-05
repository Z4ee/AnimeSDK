#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1384.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_971;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D0A1730FF40DEDF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A16A840)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_08F8A1C795362D14_OFFSET UNITYSDK_OFFSET(0x1A16B5D0)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A16A3C0)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1A16AC40)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x1A16AE50)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A16A770)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1A16A680)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A16A780)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A16AA20)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1A16A970)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A16A3A0)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x1A16B0C0)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1A16AB50)
#define CLASS_1_9D0A1730FF40DEDF_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1A16AC20)
#define CLASS_1_9D0A1730FF40DEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16AB00)

inline static constexpr unsigned int Class_1_9D0A1730FF40DEDF_TypeDefinitionIndex = 15543;

class Class_1_9D0A1730FF40DEDF : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1384 Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_6; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_971*>* Field_1_2; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::System::Boolean Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_971*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_971*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_971* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_971*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_971* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_971*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_08F8A1C795362D14(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_08F8A1C795362D14_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D0A1730FF40DEDF_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
