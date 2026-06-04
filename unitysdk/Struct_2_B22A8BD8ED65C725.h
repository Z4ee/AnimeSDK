#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_10841FDE58E9B286.h"
#include "unitysdk/Struct_2_3230999ED912FA88.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_003ED7DD9BE67F62_OFFSET UNITYSDK_OFFSET(0x13717DF0)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_383AE8662A93F4D0_OFFSET UNITYSDK_OFFSET(0x13717CE0)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x2BBD850)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x836C0)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x83680)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_602A336CBD30C930_1_OFFSET UNITYSDK_OFFSET(0x83700)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x836A0)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_97409C5AB8423CFA_OFFSET UNITYSDK_OFFSET(0x13717C20)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x2BBD9E0)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x2BBD910)
#define STRUCT_2_B22A8BD8ED65C725_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x2BBD8A0)
#define STRUCT_2_B22A8BD8ED65C725__CTOR_OFFSET UNITYSDK_OFFSET(0x2BBD810)

inline static constexpr unsigned int Struct_2_B22A8BD8ED65C725_TypeDefinitionIndex = 69037;

struct alignas(8) Struct_2_B22A8BD8ED65C725
{
	::Struct_2_3230999ED912FA88 Field_2_0; // 0x10
	::Struct_2_10841FDE58E9B286 Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_2_2; // 0xA0
	::System::Single Field_2_3; // 0xA8
	::UnityEngine::Vector3 Field_2_4; // 0xAC
	::UnityEngine::Vector2 Field_2_5; // 0xB8
	::UnityEngine::Vector2 Field_2_6; // 0xC0
	::System::Boolean Field_2_7; // 0xC8
	::System::Boolean Field_2_8; // 0xC9
	::System::Single Field_2_9; // 0xCC

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::System::Int32>* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3, ::System::Action_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_3230999ED912FA88 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_3230999ED912FA88(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930(::Struct_2_3230999ED912FA88 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3230999ED912FA88))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}

	::Struct_2_10841FDE58E9B286 Method_2_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_10841FDE58E9B286(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930_1(::Struct_2_10841FDE58E9B286 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_10841FDE58E9B286))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_602A336CBD30C930_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	static ::System::Boolean Method_2_97409C5AB8423CFA(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_97409C5AB8423CFA_OFFSET))(a1);
	}

	static ::System::Void Method_2_383AE8662A93F4D0(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_383AE8662A93F4D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_003ED7DD9BE67F62(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STRUCT_2_B22A8BD8ED65C725_METHOD_2_003ED7DD9BE67F62_OFFSET))(a1);
	}
};
