#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_939.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_704;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB6834B4D467A186_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A69CCF0)
#define CLASS_1_DB6834B4D467A186_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1A69D640)
#define CLASS_1_DB6834B4D467A186_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x1A69D3B0)
#define CLASS_1_DB6834B4D467A186_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A69CC20)
#define CLASS_1_DB6834B4D467A186_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1A69CA60)
#define CLASS_1_DB6834B4D467A186_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A69CC30)
#define CLASS_1_DB6834B4D467A186_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A69CED0)
#define CLASS_1_DB6834B4D467A186_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x1A69CE20)
#define CLASS_1_DB6834B4D467A186_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A69C290)
#define CLASS_1_DB6834B4D467A186_METHOD_1_E31A70A3171B6D1D_OFFSET UNITYSDK_OFFSET(0x1A69D070)
#define CLASS_1_DB6834B4D467A186_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1A69CB50)
#define CLASS_1_DB6834B4D467A186_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1A69D620)
#define CLASS_1_DB6834B4D467A186_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x1A69C2B0)
#define CLASS_1_DB6834B4D467A186__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69CFB0)

inline static constexpr unsigned int Class_1_DB6834B4D467A186_TypeDefinitionIndex = 12614;

class Class_1_DB6834B4D467A186 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_704*>*>* Field_1_7; // 0x20
	::Il2CppArray<::Class_2_208CC9941471731A_704*>* Field_1_2; // 0x28
	::Struct_2_1862835F8661A21F_939 Field_1_3; // 0x30
	::System::Boolean Field_1_5; // 0x48
	::System::Int32 Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_704* Method_1_E31A70A3171B6D1D(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::Class_2_208CC9941471731A_704*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_E31A70A3171B6D1D_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_208CC9941471731A_704* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_704*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_704*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_704*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_704* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_704*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB6834B4D467A186_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}
};
