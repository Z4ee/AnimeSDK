#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace System { class String; }

#define CLASS_3_649F7823C69AF414_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1B59D990)
#define CLASS_3_649F7823C69AF414_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1B59D940)
#define CLASS_3_649F7823C69AF414__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59D980)

inline static constexpr unsigned int Class_3_649F7823C69AF414_TypeDefinitionIndex = 20681;

class Class_3_649F7823C69AF414 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* Field_3_0; // 0x18
	::Il2CppArray<::System::Int16>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x31
	::System::Boolean Field_3_5; // 0x32
	::System::Single Field_3_6; // 0x34
	::System::UInt32 Field_3_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_649F7823C69AF414__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_649F7823C69AF414*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_649F7823C69AF414*&))((::PBYTE)hIl2Cpp + CLASS_3_649F7823C69AF414_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_649F7823C69AF414* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_649F7823C69AF414*))((::PBYTE)hIl2Cpp + CLASS_3_649F7823C69AF414_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
