#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityModule; }
namespace RPG::Client { class ActivityPanelData; }

#define CLASS_1_EA4F59A81E5559FD_METHOD_1_1C997B7C33892E70_OFFSET UNITYSDK_OFFSET(0x186C7310)
#define CLASS_1_EA4F59A81E5559FD_METHOD_1_F76BF7EE8C3F7500_OFFSET UNITYSDK_OFFSET(0x186C73F0)
#define CLASS_1_EA4F59A81E5559FD__CTOR_OFFSET UNITYSDK_OFFSET(0x186C72C0)

inline static constexpr unsigned int Class_1_EA4F59A81E5559FD_TypeDefinitionIndex = 61792;

class Class_1_EA4F59A81E5559FD : public ::System::Object
{
public:
	::RPG::Client::ActivityModule* DHPKGNANJED; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*))((::PBYTE)hIl2Cpp + CLASS_1_EA4F59A81E5559FD__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_EA4F59A81E5559FD* Method_1_1C997B7C33892E70(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_EA4F59A81E5559FD*(*)(::RPG::Client::ActivityModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA4F59A81E5559FD_METHOD_1_1C997B7C33892E70_OFFSET))(a1, a2);
	}

	static ::Class_1_EA4F59A81E5559FD* Method_1_F76BF7EE8C3F7500(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_EA4F59A81E5559FD*(*)(::RPG::Client::ActivityModule*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA4F59A81E5559FD_METHOD_1_F76BF7EE8C3F7500_OFFSET))(a1, a2, a3);
	}
};
