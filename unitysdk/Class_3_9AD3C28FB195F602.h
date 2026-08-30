#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_9AD3C28FB195F602_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CA9BC20)
#define CLASS_3_9AD3C28FB195F602_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CA9BC70)
#define CLASS_3_9AD3C28FB195F602__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9BC60)

inline static constexpr unsigned int Class_3_9AD3C28FB195F602_TypeDefinitionIndex = 22355;

class Class_3_9AD3C28FB195F602 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
	::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x20
	::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AD3C28FB195F602__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9AD3C28FB195F602*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9AD3C28FB195F602*&))((::PBYTE)hIl2Cpp + CLASS_3_9AD3C28FB195F602_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9AD3C28FB195F602* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9AD3C28FB195F602*))((::PBYTE)hIl2Cpp + CLASS_3_9AD3C28FB195F602_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
