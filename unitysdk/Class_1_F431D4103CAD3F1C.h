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

#define CLASS_1_F431D4103CAD3F1C_CLEAR_OFFSET UNITYSDK_OFFSET(0x18DAE630)
#define CLASS_1_F431D4103CAD3F1C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18DAD730)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_10BB2BE20B265FD1_OFFSET UNITYSDK_OFFSET(0x18DAE330)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_18A2B813755D15B2_OFFSET UNITYSDK_OFFSET(0x18DAE110)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x18DADB60)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_5CA90424237EB44F_OFFSET UNITYSDK_OFFSET(0x18DADE90)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_85307DC794B66DD0_OFFSET UNITYSDK_OFFSET(0x18DADC60)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_AE23CE85F8124D64_OFFSET UNITYSDK_OFFSET(0x18DAD6E0)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x18DAD850)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_CC95B1519A868AD0_OFFSET UNITYSDK_OFFSET(0x18DAE4F0)
#define CLASS_1_F431D4103CAD3F1C_METHOD_1_FE05356E47D9A94A_OFFSET UNITYSDK_OFFSET(0x18DAD9F0)
#define CLASS_1_F431D4103CAD3F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAE7C0)

inline static constexpr unsigned int Class_1_F431D4103CAD3F1C_TypeDefinitionIndex = 38792;

class Class_1_F431D4103CAD3F1C : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::PoolList_1<::System::Int32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AE23CE85F8124D64(::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>*))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_AE23CE85F8124D64_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_EVALUATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0C43CECDD765C65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_B0C43CECDD765C65_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE05356E47D9A94A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_FE05356E47D9A94A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_85307DC794B66DD0(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_85307DC794B66DD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5CA90424237EB44F(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_5CA90424237EB44F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18A2B813755D15B2(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_18A2B813755D15B2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_10BB2BE20B265FD1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_10BB2BE20B265FD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC95B1519A868AD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_METHOD_1_CC95B1519A868AD0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F431D4103CAD3F1C_CLEAR_OFFSET))(this);
	}
};
