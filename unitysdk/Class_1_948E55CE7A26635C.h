#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_556.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_443;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_948E55CE7A26635C_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14F79E70)
#define CLASS_1_948E55CE7A26635C_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x14F79420)
#define CLASS_1_948E55CE7A26635C_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x14F7A010)
#define CLASS_1_948E55CE7A26635C_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x14F7A220)
#define CLASS_1_948E55CE7A26635C_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x14F796E0)
#define CLASS_1_948E55CE7A26635C_METHOD_1_4CEAEA2D01E525FA_OFFSET UNITYSDK_OFFSET(0x14F7A480)
#define CLASS_1_948E55CE7A26635C_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14F79CD0)
#define CLASS_1_948E55CE7A26635C_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14F79D90)
#define CLASS_1_948E55CE7A26635C_METHOD_1_B2058F63F7E846C9_OFFSET UNITYSDK_OFFSET(0x14F797C0)
#define CLASS_1_948E55CE7A26635C_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x14F79A60)
#define CLASS_1_948E55CE7A26635C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14F79400)
#define CLASS_1_948E55CE7A26635C_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x14F79C00)
#define CLASS_1_948E55CE7A26635C_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x14F79FF0)
#define CLASS_1_948E55CE7A26635C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F79FA0)

inline static constexpr unsigned int Class_1_948E55CE7A26635C_TypeDefinitionIndex = 11628;

class Class_1_948E55CE7A26635C : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::Struct_2_1862835F8661A21F_556 Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_443*>* Field_1_1; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2058F63F7E846C9(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_B2058F63F7E846C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_443*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_443*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_443* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_443*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_443* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_443*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4CEAEA2D01E525FA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_948E55CE7A26635C_METHOD_1_4CEAEA2D01E525FA_OFFSET))(this, a1);
	}
};
