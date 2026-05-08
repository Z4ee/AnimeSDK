#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_17C16694410E7397.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_493953025FA316DA;
class Class_4_DA19DD65175B97CF;
namespace Share { class CVector2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_0ED0C8C191D88E95_OFFSET UNITYSDK_OFFSET(0x138C9ED0)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_323C91A30A27F22D_OFFSET UNITYSDK_OFFSET(0x138C7CC0)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x138C7BC0)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_50EC03CFE62D064D_OFFSET UNITYSDK_OFFSET(0x138C9D00)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_6B7CE047AE187CA5_OFFSET UNITYSDK_OFFSET(0x138C9D70)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0x138C78C0)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_9B267A43DD5B6245_OFFSET UNITYSDK_OFFSET(0x138C9990)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_9BA8DEDDE1DE1208_OFFSET UNITYSDK_OFFSET(0x138C7C50)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x138C9F80)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138C7C10)
#define CLASS_2_915BDDE5CA09F2B7_METHOD_2_ED274882D1643B07_OFFSET UNITYSDK_OFFSET(0x138C9900)
#define CLASS_2_915BDDE5CA09F2B7__CTOR_OFFSET UNITYSDK_OFFSET(0x138C7840)

inline static constexpr unsigned int Class_2_915BDDE5CA09F2B7_TypeDefinitionIndex = 80844;

class Class_2_915BDDE5CA09F2B7 : public ::Class_1_17C16694410E7397
{
public:
	::Class_3_493953025FA316DA* Field_2_7; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Single Field_2_5; // 0x2C
	::System::Single Field_2_0; // 0x30
	::System::Single Field_2_1; // 0x34
	::MoleMole::Vector2Int Field_2_6; // 0x38

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::Class_3_493953025FA316DA* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Class_3_493953025FA316DA*))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9BA8DEDDE1DE1208(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_9BA8DEDDE1DE1208_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ED274882D1643B07(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::Share::CVector2* a3, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::CVector2*, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_ED274882D1643B07_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9B267A43DD5B6245(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>& a2, ::Share::CVector2* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>&, ::Share::CVector2*))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_9B267A43DD5B6245_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowCell Method_2_6B7CE047AE187CA5(::UnityEngine::Vector2 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_6B7CE047AE187CA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_50EC03CFE62D064D(::MoleMole::Vector2Int a1, ::MoleMole::HollowChessboard::HollowCell& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_50EC03CFE62D064D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_0ED0C8C191D88E95(::UnityEngine::Vector2 a1, ::MoleMole::HollowChessboard::HollowCell& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_0ED0C8C191D88E95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_323C91A30A27F22D(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::Share::CVector2* a3, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::CVector2*, ::System::Func_2<::Class_4_DA19DD65175B97CF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_323C91A30A27F22D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8336E89DF737C001()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_915BDDE5CA09F2B7_METHOD_2_8336E89DF737C001_OFFSET))(this);
	}
};
