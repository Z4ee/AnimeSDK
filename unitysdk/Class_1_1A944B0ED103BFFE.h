#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_735.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_545;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1A944B0ED103BFFE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAEC780)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1BAEC080)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x1BAEC900)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x1BAECB40)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BAEC430)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_4015189E7EA6901D_OFFSET UNITYSDK_OFFSET(0x1BAECDB0)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1BAEC340)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1BAEC5E0)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1BAEC6A0)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1BAEC440)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BAEC060)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x1BAED370)
#define CLASS_1_1A944B0ED103BFFE_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1BAECB10)
#define CLASS_1_1A944B0ED103BFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEC8B0)

inline static constexpr unsigned int Class_1_1A944B0ED103BFFE_TypeDefinitionIndex = 11657;

class Class_1_1A944B0ED103BFFE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_545*>*>* Field_1_4; // 0x18
	::Il2CppArray<::Class_2_208CC9941471731A_545*>* Field_1_0; // 0x20
	::Struct_2_1862835F8661A21F_735 Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x40
	::System::Boolean Field_1_11; // 0x48
	::System::Int32 Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_545* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_545*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_545* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_545*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_545*>* Method_1_4015189E7EA6901D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_545*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_4015189E7EA6901D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_545*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_545*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A944B0ED103BFFE_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}
};
