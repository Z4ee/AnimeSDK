#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6A9DB0C2071DE312;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_EBC2E2824DF39B18_METHOD_3_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x15842000)
#define CLASS_3_EBC2E2824DF39B18_METHOD_3_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x15842270)
#define CLASS_3_EBC2E2824DF39B18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15841F90)
#define CLASS_3_EBC2E2824DF39B18__CTOR_OFFSET UNITYSDK_OFFSET(0x15841F60)

inline static constexpr unsigned int Class_3_EBC2E2824DF39B18_TypeDefinitionIndex = 55797;

class Class_3_EBC2E2824DF39B18 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6A9DB0C2071DE312*>
{
public:
	// static const ::System::String* NMHCPDICPCO; // 0x0
	// static const ::System::String* JEPINIMBKHI; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6A9DB0C2071DE312* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6A9DB0C2071DE312*))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_METHOD_3_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_3_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_METHOD_3_7F4EBEC55EBE2D81_OFFSET))(this);
	}
};
