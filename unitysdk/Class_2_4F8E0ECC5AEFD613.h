#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_025FF4981524A424_143;
class Class_3_025FF4981524A424_76;
class Class_3_48A3D3A34C52331D_30;
class Class_3_48A3D3A34C52331D_48;
class Class_3_48A3D3A34C52331D_49;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4F8E0ECC5AEFD613_METHOD_2_15C8F7B81470F350_OFFSET UNITYSDK_OFFSET(0x10F34100)
#define CLASS_2_4F8E0ECC5AEFD613_METHOD_2_220DB51CF6B39709_OFFSET UNITYSDK_OFFSET(0x10F34340)
#define CLASS_2_4F8E0ECC5AEFD613_METHOD_2_7DE8D29A635A488A_1_OFFSET UNITYSDK_OFFSET(0x10F34650)
#define CLASS_2_4F8E0ECC5AEFD613_METHOD_2_7DE8D29A635A488A_OFFSET UNITYSDK_OFFSET(0x10F33CD0)
#define CLASS_2_4F8E0ECC5AEFD613_METHOD_2_9A1C449D9083CE9F_OFFSET UNITYSDK_OFFSET(0x10F33E70)
#define CLASS_2_4F8E0ECC5AEFD613_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F33C80)
#define CLASS_2_4F8E0ECC5AEFD613_ONSTART_OFFSET UNITYSDK_OFFSET(0x10F33C40)
#define CLASS_2_4F8E0ECC5AEFD613__CTOR_OFFSET UNITYSDK_OFFSET(0x10F33CC0)

inline static constexpr unsigned int Class_2_4F8E0ECC5AEFD613_TypeDefinitionIndex = 60442;

class Class_2_4F8E0ECC5AEFD613 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7DE8D29A635A488A(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_76*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_76*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_METHOD_2_7DE8D29A635A488A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A1C449D9083CE9F(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_143*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_143*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_METHOD_2_9A1C449D9083CE9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_15C8F7B81470F350(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::Class_3_48A3D3A34C52331D_48*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_48*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_METHOD_2_15C8F7B81470F350_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_220DB51CF6B39709(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action_1<::Class_3_48A3D3A34C52331D_30*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::Class_3_48A3D3A34C52331D_30*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_METHOD_2_220DB51CF6B39709_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7DE8D29A635A488A_1(::System::Int32 a1, ::System::Action_1<::Class_3_48A3D3A34C52331D_49*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_49*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_METHOD_2_7DE8D29A635A488A_1_OFFSET))(this, a1, a2);
	}
};
