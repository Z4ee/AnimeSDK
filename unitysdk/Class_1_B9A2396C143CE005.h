#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9A2396C143CE005_Class_1_FC27B2AA72B76129;
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace RPG::GameCore { class ChimeraDuelConditionConfig; }
namespace RPG::GameCore { class ChimeraDuelEventListener; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class String; }

#define CLASS_1_B9A2396C143CE005_METHOD_1_12C73D99AB0F2558_OFFSET UNITYSDK_OFFSET(0xAC6D220)
#define CLASS_1_B9A2396C143CE005_METHOD_1_132277E828B9B96E_OFFSET UNITYSDK_OFFSET(0xAC6CC00)
#define CLASS_1_B9A2396C143CE005_METHOD_1_147C3B2DE0FD7E6A_OFFSET UNITYSDK_OFFSET(0xAC6CFE0)
#define CLASS_1_B9A2396C143CE005_METHOD_1_4D7F6F578805C257_OFFSET UNITYSDK_OFFSET(0xAC6D100)
#define CLASS_1_B9A2396C143CE005_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC6CBC0)
#define CLASS_1_B9A2396C143CE005_METHOD_1_D94AD46E070C5401_OFFSET UNITYSDK_OFFSET(0xAC6D0A0)
#define CLASS_1_B9A2396C143CE005_METHOD_1_F40AF41B962D2981_1_OFFSET UNITYSDK_OFFSET(0xAC6D1C0)
#define CLASS_1_B9A2396C143CE005_METHOD_1_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0xAC6CDB0)
#define CLASS_1_B9A2396C143CE005__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6D2B0)

inline static constexpr unsigned int Class_1_B9A2396C143CE005_TypeDefinitionIndex = 51439;

class Class_1_B9A2396C143CE005 : public ::System::Object
{
public:
	::Class_1_B9A2396C143CE005_Class_1_FC27B2AA72B76129* Field_1_1; // 0x10
	::Class_1_B9A2396C143CE005_Class_1_FC27B2AA72B76129* Field_1_0; // 0x18
	::Class_1_B9A2396C143CE005_Class_1_FC27B2AA72B76129* Field_1_2; // 0x20
	::Class_1_B9A2396C143CE005_Class_1_FC27B2AA72B76129* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_132277E828B9B96E(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_132277E828B9B96E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_F40AF41B962D2981_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelConditionConfig* Method_1_147C3B2DE0FD7E6A(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelConditionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_147C3B2DE0FD7E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D94AD46E070C5401(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_D94AD46E070C5401_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelEventListener* Method_1_4D7F6F578805C257(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelEventListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_4D7F6F578805C257_OFFSET))(this, a1);
	}

	::System::Void Method_1_F40AF41B962D2981_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_F40AF41B962D2981_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelBubbleEventListener* Method_1_12C73D99AB0F2558(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelBubbleEventListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9A2396C143CE005_METHOD_1_12C73D99AB0F2558_OFFSET))(this, a1);
	}
};
