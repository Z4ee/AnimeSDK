#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_10841FDE58E9B286.h"
#include "unitysdk/Struct_2_E0A99F3F953ABF88.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_520121F0B7FF172F_METHOD_2_383AE8662A93F4D0_OFFSET UNITYSDK_OFFSET(0x10697CF0)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14258A0)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x1425820)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x14257E0)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_602A336CBD30C930_1_OFFSET UNITYSDK_OFFSET(0x1425860)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x1425800)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_6ECD6AEF43AFDC8B_OFFSET UNITYSDK_OFFSET(0x10697E20)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1425A30)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_B2182821D893BB26_OFFSET UNITYSDK_OFFSET(0x10697C70)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1425960)
#define STRUCT_2_520121F0B7FF172F_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x14258F0)
#define STRUCT_2_520121F0B7FF172F__CTOR_OFFSET UNITYSDK_OFFSET(0x14257A0)

inline static constexpr unsigned int Struct_2_520121F0B7FF172F_TypeDefinitionIndex = 60624;

struct alignas(8) Struct_2_520121F0B7FF172F
{
	::Struct_2_E0A99F3F953ABF88 Field_2_0; // 0x10
	::Struct_2_10841FDE58E9B286 Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_2_2; // 0x98
	::System::Single Field_2_3; // 0xA0
	::UnityEngine::Vector3 Field_2_4; // 0xA4
	::UnityEngine::Vector2 Field_2_5; // 0xB0
	::UnityEngine::Vector2 Field_2_6; // 0xB8
	::System::Boolean Field_2_7; // 0xC0
	::System::Boolean Field_2_8; // 0xC1
	::System::Single Field_2_9; // 0xC4

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_E0A99F3F953ABF88 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_E0A99F3F953ABF88(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930(::Struct_2_E0A99F3F953ABF88 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E0A99F3F953ABF88))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}

	::Struct_2_10841FDE58E9B286 Method_2_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_10841FDE58E9B286(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930_1(::Struct_2_10841FDE58E9B286 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_10841FDE58E9B286))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_602A336CBD30C930_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	static ::System::Boolean Method_2_B2182821D893BB26(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_B2182821D893BB26_OFFSET))(a1);
	}

	static ::System::Void Method_2_383AE8662A93F4D0(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_383AE8662A93F4D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_6ECD6AEF43AFDC8B(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + STRUCT_2_520121F0B7FF172F_METHOD_2_6ECD6AEF43AFDC8B_OFFSET))(a1);
	}
};
