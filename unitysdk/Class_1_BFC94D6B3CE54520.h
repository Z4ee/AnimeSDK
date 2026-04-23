#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_DBB509B210C17187;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_BFC94D6B3CE54520_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F5E130)
#define CLASS_1_BFC94D6B3CE54520_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17F5D070)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_012E43180BC4474F_OFFSET UNITYSDK_OFFSET(0x17F5DB80)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x17F5DFA0)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_2FF85733DB45EE9C_OFFSET UNITYSDK_OFFSET(0x17F5D1E0)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_39124D05575676D1_OFFSET UNITYSDK_OFFSET(0x17F5D8E0)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_5009BD3C08788261_OFFSET UNITYSDK_OFFSET(0x17F5D580)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_6CF16CC4E93D1060_OFFSET UNITYSDK_OFFSET(0x17F5DE30)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_A09F22ECE58F2398_OFFSET UNITYSDK_OFFSET(0x17F5D6B0)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_AE23CE85F8124D64_OFFSET UNITYSDK_OFFSET(0x17F5D020)
#define CLASS_1_BFC94D6B3CE54520_METHOD_1_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x17F5D3D0)
#define CLASS_1_BFC94D6B3CE54520__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5E310)

inline static constexpr unsigned int Class_1_BFC94D6B3CE54520_TypeDefinitionIndex = 38051;

class Class_1_BFC94D6B3CE54520 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::PoolList_1<::System::Int32>*>* Field_1_1; // 0x10
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AE23CE85F8124D64(::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>*))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_AE23CE85F8124D64_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_EVALUATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FF85733DB45EE9C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_2FF85733DB45EE9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0C43CECDD765C65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_B0C43CECDD765C65_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5009BD3C08788261(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_5009BD3C08788261_OFFSET))(this, a1);
	}

	::System::Void Method_1_A09F22ECE58F2398(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_A09F22ECE58F2398_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39124D05575676D1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_39124D05575676D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_012E43180BC4474F(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_012E43180BC4474F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6CF16CC4E93D1060(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_6CF16CC4E93D1060_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC94D6B3CE54520_CLEAR_OFFSET))(this);
	}
};
