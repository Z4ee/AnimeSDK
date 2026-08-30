#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }

#define CLASS_1_7BEA553B07B2704F_METHOD_1_842BFDADF3B3F2EA_OFFSET UNITYSDK_OFFSET(0x1A74F770)
#define CLASS_1_7BEA553B07B2704F_METHOD_1_C5893590A0095DB6_OFFSET UNITYSDK_OFFSET(0x1A74D030)
#define CLASS_1_7BEA553B07B2704F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7508D0)

inline static constexpr unsigned int Class_1_7BEA553B07B2704F_TypeDefinitionIndex = 64684;

class Class_1_7BEA553B07B2704F : public ::System::Object
{
public:
	// static const ::System::Int32 CCDIJKGJCKP = 0xD; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_C5893590A0095DB6(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_METHOD_1_C5893590A0095DB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_842BFDADF3B3F2EA(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F_METHOD_1_842BFDADF3B3F2EA_OFFSET))(this, a1, a2);
	}
};
