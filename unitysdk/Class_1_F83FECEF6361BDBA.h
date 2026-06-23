#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F83FECEF6361BDBA_Struct_2_B8EF0221DF72BBA3.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_273278230A48923F;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F83FECEF6361BDBA_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x108CAAC0)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_39E7217E1A8A81E9_OFFSET UNITYSDK_OFFSET(0x108CABC0)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_3F9BDAE1E2BB3A0A_OFFSET UNITYSDK_OFFSET(0x108CCC30)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_546E0B885A314125_OFFSET UNITYSDK_OFFSET(0x108CCF00)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_6826B142C4E0ADCA_1_OFFSET UNITYSDK_OFFSET(0x108CCE10)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_6826B142C4E0ADCA_OFFSET UNITYSDK_OFFSET(0x108CCD20)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_923644E52E6E150E_OFFSET UNITYSDK_OFFSET(0x108CCCB0)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_97BD9806A2A7F477_OFFSET UNITYSDK_OFFSET(0x108CB500)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_99907FF3A9B746E4_OFFSET UNITYSDK_OFFSET(0x108CB090)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_BBA7B48D3918837D_OFFSET UNITYSDK_OFFSET(0x108CCBA0)
#define CLASS_1_F83FECEF6361BDBA_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x108CAB40)
#define CLASS_1_F83FECEF6361BDBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x108CCB80)
#define CLASS_1_F83FECEF6361BDBA__CTOR_OFFSET UNITYSDK_OFFSET(0x108CCB30)

inline static constexpr unsigned int Class_1_F83FECEF6361BDBA_TypeDefinitionIndex = 67704;

class Class_1_F83FECEF6361BDBA : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F83FECEF6361BDBA_TypeDefinitionIndex)->GetStaticField(0xEEC0);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F83FECEF6361BDBA_TypeDefinitionIndex)->GetStaticField(0xEEC4);
	}
	::PipelineCamera::CircularBuffer_1<::Class_1_F83FECEF6361BDBA_Struct_2_B8EF0221DF72BBA3>* Field_1_2; // 0x10
	::System::Single Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_39E7217E1A8A81E9(::UnityEngine::Vector2& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_39E7217E1A8A81E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_99907FF3A9B746E4(::System::Single a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_99907FF3A9B746E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97BD9806A2A7F477(::Class_1_273278230A48923F* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_273278230A48923F*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_97BD9806A2A7F477_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_BBA7B48D3918837D(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_BBA7B48D3918837D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_3F9BDAE1E2BB3A0A(::UnityEngine::Vector2& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_3F9BDAE1E2BB3A0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_923644E52E6E150E(::System::Single a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_923644E52E6E150E_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_6826B142C4E0ADCA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA_1(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_6826B142C4E0ADCA_1_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_546E0B885A314125(::System::Span_1<::Struct_2_31CE9F74ED7EF316_2> a1, ::System::Single a2, ::System::Single a3, ::System::Func_2<::UnityEngine::Vector2, ::System::Single>* a4, ::System::Single& a5, ::System::Single& a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316_2>, ::System::Single, ::System::Single, ::System::Func_2<::UnityEngine::Vector2, ::System::Single>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_METHOD_1_546E0B885A314125_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
