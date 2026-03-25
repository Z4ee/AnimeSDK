#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_AE54088C838A17D2;

#define CLASS_1_424DD384AAFD58F5_METHOD_1_47E4E6CE6BAAD58E_OFFSET UNITYSDK_OFFSET(0x8743A20)
#define CLASS_1_424DD384AAFD58F5_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x8743B50)
#define CLASS_1_424DD384AAFD58F5_METHOD_1_CD729A9634455FE2_OFFSET UNITYSDK_OFFSET(0x8743A90)
#define CLASS_1_424DD384AAFD58F5__CTOR_OFFSET UNITYSDK_OFFSET(0x8743B40)

inline static constexpr unsigned int Class_1_424DD384AAFD58F5_TypeDefinitionIndex = 60769;

class Class_1_424DD384AAFD58F5 : public ::System::Object
{
public:
	::Class_1_AE54088C838A17D2* Field_1_0; // 0x10
	::Class_1_424DD384AAFD58F5* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_424DD384AAFD58F5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_47E4E6CE6BAAD58E(::RPG::GameCore::AlleyPackAnchorType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_424DD384AAFD58F5_METHOD_1_47E4E6CE6BAAD58E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CD729A9634455FE2(::Class_1_AE54088C838A17D2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_424DD384AAFD58F5_METHOD_1_CD729A9634455FE2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_AE54088C838A17D2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_424DD384AAFD58F5_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}
};
