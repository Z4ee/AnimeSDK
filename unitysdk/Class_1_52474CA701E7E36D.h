#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129;
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace RPG::GameCore { class ChimeraDuelConditionConfig; }
namespace RPG::GameCore { class ChimeraDuelEventListener; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class String; }

#define CLASS_1_52474CA701E7E36D_METHOD_1_1C0D42A78D29F185_OFFSET UNITYSDK_OFFSET(0x1455C150)
#define CLASS_1_52474CA701E7E36D_METHOD_1_3C8E4E1405E6C681_OFFSET UNITYSDK_OFFSET(0x1455C390)
#define CLASS_1_52474CA701E7E36D_METHOD_1_7D6DE147B4663610_OFFSET UNITYSDK_OFFSET(0x1455C270)
#define CLASS_1_52474CA701E7E36D_METHOD_1_9BE17016EB2C25F9_OFFSET UNITYSDK_OFFSET(0x1455BD70)
#define CLASS_1_52474CA701E7E36D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1455BD30)
#define CLASS_1_52474CA701E7E36D_METHOD_1_D94AD46E070C5401_OFFSET UNITYSDK_OFFSET(0x1455C210)
#define CLASS_1_52474CA701E7E36D_METHOD_1_F40AF41B962D2981_1_OFFSET UNITYSDK_OFFSET(0x1455C330)
#define CLASS_1_52474CA701E7E36D_METHOD_1_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0x1455BF20)
#define CLASS_1_52474CA701E7E36D__CTOR_OFFSET UNITYSDK_OFFSET(0x1455C430)

inline static constexpr unsigned int Class_1_52474CA701E7E36D_TypeDefinitionIndex = 59307;

class Class_1_52474CA701E7E36D : public ::System::Object
{
public:
	::Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129* Field_1_0; // 0x10
	::Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129* Field_1_1; // 0x18
	::Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129* Field_1_2; // 0x20
	::Class_1_52474CA701E7E36D_Class_1_FC27B2AA72B76129* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_9BE17016EB2C25F9(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_9BE17016EB2C25F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_F40AF41B962D2981_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelConditionConfig* Method_1_1C0D42A78D29F185(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelConditionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_1C0D42A78D29F185_OFFSET))(this, a1);
	}

	::System::Void Method_1_D94AD46E070C5401(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_D94AD46E070C5401_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelEventListener* Method_1_7D6DE147B4663610(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelEventListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_7D6DE147B4663610_OFFSET))(this, a1);
	}

	::System::Void Method_1_F40AF41B962D2981_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_F40AF41B962D2981_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelBubbleEventListener* Method_1_3C8E4E1405E6C681(::System::String* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelBubbleEventListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52474CA701E7E36D_METHOD_1_3C8E4E1405E6C681_OFFSET))(this, a1);
	}
};
