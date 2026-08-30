#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseConditionExprTokenParser_1.h"
#include "unitysdk/RPG/GameCore/PamChatConditionType.h"

class Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10;
namespace System { class String; }

#define CLASS_2_F71231D877170194_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x152D5A50)
#define CLASS_2_F71231D877170194__CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x152D58B0)
#define CLASS_2_F71231D877170194__CTOR_OFFSET UNITYSDK_OFFSET(0x152D5AA0)

inline static constexpr unsigned int Class_2_F71231D877170194_TypeDefinitionIndex = 63339;

class Class_2_F71231D877170194 : public ::RPG::Client::BaseConditionExprTokenParser_1<::RPG::GameCore::PamChatConditionType>
{
public:
	::System::UInt32 ELIAFFHAABN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71231D877170194__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10* _CreateCondition(::RPG::GameCore::PamChatConditionType a1, ::System::String* a2)
	{
		return ((::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10*(*)(::PVOID, ::RPG::GameCore::PamChatConditionType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F71231D877170194__CREATECONDITION_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F71231D877170194_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}
};
