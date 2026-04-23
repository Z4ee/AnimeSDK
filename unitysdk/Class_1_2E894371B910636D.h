#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_2CAAA2FDF9170110;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2E894371B910636D_METHOD_1_01430D7189E30887_OFFSET UNITYSDK_OFFSET(0xBACE3D0)
#define CLASS_1_2E894371B910636D_METHOD_1_2EE2DCE32DD81EED_OFFSET UNITYSDK_OFFSET(0xBACE300)
#define CLASS_1_2E894371B910636D__CTOR_OFFSET UNITYSDK_OFFSET(0xBACE490)

inline static constexpr unsigned int Class_1_2E894371B910636D_TypeDefinitionIndex = 50539;

class Class_1_2E894371B910636D : public ::System::Object
{
public:
	::Class_1_2E894371B910636D* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_1_2; // 0x18
	::Class_1_2CAAA2FDF9170110* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E894371B910636D__CTOR_OFFSET))(this);
	}

	::Class_1_2CAAA2FDF9170110* Method_1_2EE2DCE32DD81EED(::RPG::GameCore::StringHash a1)
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2E894371B910636D_METHOD_1_2EE2DCE32DD81EED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_1_01430D7189E30887(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2E894371B910636D_METHOD_1_01430D7189E30887_OFFSET))(this, a1);
	}
};
