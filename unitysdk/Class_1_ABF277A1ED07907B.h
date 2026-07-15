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

#define CLASS_1_ABF277A1ED07907B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B165200)
#define CLASS_1_ABF277A1ED07907B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B164150)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_107A57602252DAE5_OFFSET UNITYSDK_OFFSET(0x1B1649F0)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_10BB2BE20B265FD1_OFFSET UNITYSDK_OFFSET(0x1B164F00)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_18A2B813755D15B2_OFFSET UNITYSDK_OFFSET(0x1B164CD0)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x1B1646C0)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_2FF85733DB45EE9C_OFFSET UNITYSDK_OFFSET(0x1B1642D0)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_85307DC794B66DD0_OFFSET UNITYSDK_OFFSET(0x1B1647C0)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_AE23CE85F8124D64_OFFSET UNITYSDK_OFFSET(0x1B164100)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x1B1644E0)
#define CLASS_1_ABF277A1ED07907B_METHOD_1_CC95B1519A868AD0_OFFSET UNITYSDK_OFFSET(0x1B1650C0)
#define CLASS_1_ABF277A1ED07907B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B165390)

inline static constexpr unsigned int Class_1_ABF277A1ED07907B_TypeDefinitionIndex = 39601;

class Class_1_ABF277A1ED07907B : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::PoolList_1<::System::Int32>*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AE23CE85F8124D64(::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::Class_1_DBB509B210C17187*>*))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_AE23CE85F8124D64_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_EVALUATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FF85733DB45EE9C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_2FF85733DB45EE9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0C43CECDD765C65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_B0C43CECDD765C65_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_85307DC794B66DD0(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_85307DC794B66DD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_107A57602252DAE5(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_107A57602252DAE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18A2B813755D15B2(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_18A2B813755D15B2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_10BB2BE20B265FD1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_10BB2BE20B265FD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC95B1519A868AD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_METHOD_1_CC95B1519A868AD0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABF277A1ED07907B_CLEAR_OFFSET))(this);
	}
};
