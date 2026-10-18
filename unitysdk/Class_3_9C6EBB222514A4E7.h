#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
class Class_1_D975FC0407AA8C9D;
namespace RPG::GameCore { class MarbleBySealCount; }

#define CLASS_3_9C6EBB222514A4E7_METHOD_3_1B7541FA6273FD9D_OFFSET UNITYSDK_OFFSET(0x1CA332A0)
#define CLASS_3_9C6EBB222514A4E7_METHOD_3_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x1CA33140)
#define CLASS_3_9C6EBB222514A4E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33120)

inline static constexpr unsigned int Class_3_9C6EBB222514A4E7_TypeDefinitionIndex = 43152;

class Class_3_9C6EBB222514A4E7 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleBySealCount* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleBySealCount* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBySealCount*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_9C6EBB222514A4E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C6EBB222514A4E7_METHOD_3_2A887DFC7A5BB2CB_OFFSET))(this);
	}

	::System::Int32 Method_3_1B7541FA6273FD9D(::Class_1_D975FC0407AA8C9D* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D975FC0407AA8C9D*))((::PBYTE)hIl2Cpp + CLASS_3_9C6EBB222514A4E7_METHOD_3_1B7541FA6273FD9D_OFFSET))(this, a1);
	}
};
