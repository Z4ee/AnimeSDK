#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1398.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_828;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B42BB96143496570_FINALIZE_OFFSET UNITYSDK_OFFSET(0x184BB5E0)
#define CLASS_1_B42BB96143496570_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x184BA9E0)
#define CLASS_1_B42BB96143496570_METHOD_1_0F8226F089EBF6F9_OFFSET UNITYSDK_OFFSET(0x184BBBE0)
#define CLASS_1_B42BB96143496570_METHOD_1_18C8188D0B8FC958_OFFSET UNITYSDK_OFFSET(0x184BAD80)
#define CLASS_1_B42BB96143496570_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x184BBCB0)
#define CLASS_1_B42BB96143496570_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x184BB980)
#define CLASS_1_B42BB96143496570_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x184BACA0)
#define CLASS_1_B42BB96143496570_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x184BB440)
#define CLASS_1_B42BB96143496570_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x184BB500)
#define CLASS_1_B42BB96143496570_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x184BB1E0)
#define CLASS_1_B42BB96143496570_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x184BA9C0)
#define CLASS_1_B42BB96143496570_METHOD_1_D19289372166685A_OFFSET UNITYSDK_OFFSET(0x184BB7F0)
#define CLASS_1_B42BB96143496570_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x184BB370)
#define CLASS_1_B42BB96143496570_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x184BBC90)
#define CLASS_1_B42BB96143496570__CTOR_OFFSET UNITYSDK_OFFSET(0x184BB710)

inline static constexpr unsigned int Class_1_B42BB96143496570_TypeDefinitionIndex = 16897;

class Class_1_B42BB96143496570 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x18
	::Struct_2_1862835F8661A21F_1398 Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_828*>* Field_1_1; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_18C8188D0B8FC958(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_18C8188D0B8FC958_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_D19289372166685A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_D19289372166685A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_828*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_828*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Int32 Method_1_0F8226F089EBF6F9(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_0F8226F089EBF6F9_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_828* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_828*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_828* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_828*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B42BB96143496570_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
