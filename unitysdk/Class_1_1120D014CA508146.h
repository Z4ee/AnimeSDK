#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1279.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_983;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1120D014CA508146_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14EDE6E0)
#define CLASS_1_1120D014CA508146_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x14EDDB80)
#define CLASS_1_1120D014CA508146_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x14EDE470)
#define CLASS_1_1120D014CA508146_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x14EDDE40)
#define CLASS_1_1120D014CA508146_METHOD_1_55AC43F88F777E88_OFFSET UNITYSDK_OFFSET(0x14EDEF00)
#define CLASS_1_1120D014CA508146_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14EDE620)
#define CLASS_1_1120D014CA508146_METHOD_1_7F58174572B82A52_OFFSET UNITYSDK_OFFSET(0x14EDEE40)
#define CLASS_1_1120D014CA508146_METHOD_1_98A6E54E0D6E32FD_OFFSET UNITYSDK_OFFSET(0x14EDE950)
#define CLASS_1_1120D014CA508146_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14EDE820)
#define CLASS_1_1120D014CA508146_METHOD_1_C3190F85BA6F80FA_OFFSET UNITYSDK_OFFSET(0x14EDDF30)
#define CLASS_1_1120D014CA508146_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x14EDE480)
#define CLASS_1_1120D014CA508146_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14EDDB60)
#define CLASS_1_1120D014CA508146_METHOD_1_E05A7599D5BC7E32_OFFSET UNITYSDK_OFFSET(0x14EDEC90)
#define CLASS_1_1120D014CA508146_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x14EDEC70)
#define CLASS_1_1120D014CA508146__CTOR_OFFSET UNITYSDK_OFFSET(0x14EDE900)

inline static constexpr unsigned int Class_1_1120D014CA508146_TypeDefinitionIndex = 14987;

class Class_1_1120D014CA508146 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_983*>*>* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x28
	::Struct_2_1862835F8661A21F_1279 Field_1_0; // 0x30
	::Il2CppArray<::Class_2_208CC9941471731A_983*>* Field_1_1; // 0x48
	::System::Boolean Field_1_7; // 0x50
	::System::Int32 Field_1_6; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_983*>* Method_1_98A6E54E0D6E32FD(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_983*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_98A6E54E0D6E32FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_983* Method_1_7F58174572B82A52(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_983*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_7F58174572B82A52_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_983* Method_1_E05A7599D5BC7E32(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_983*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_E05A7599D5BC7E32_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_55AC43F88F777E88(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_55AC43F88F777E88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3190F85BA6F80FA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1120D014CA508146_METHOD_1_C3190F85BA6F80FA_OFFSET))(this, a1);
	}
};
