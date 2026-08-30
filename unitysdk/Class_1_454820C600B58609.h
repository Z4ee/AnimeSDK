#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }

#define CLASS_1_454820C600B58609_METHOD_1_74E39874929C9477_OFFSET UNITYSDK_OFFSET(0x190FC040)
#define CLASS_1_454820C600B58609__CTOR_1_OFFSET UNITYSDK_OFFSET(0x190FC030)
#define CLASS_1_454820C600B58609__CTOR_OFFSET UNITYSDK_OFFSET(0x190FC020)

inline static constexpr unsigned int Class_1_454820C600B58609_TypeDefinitionIndex = 59156;

class Class_1_454820C600B58609 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_454820C600B58609__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_454820C600B58609__CTOR_1_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_74E39874929C9477()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_454820C600B58609_METHOD_1_74E39874929C9477_OFFSET))(this);
	}
};
