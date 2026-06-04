#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6A06E6F11DAF49.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_63C71618419B0DDE_METHOD_2_009113D5A6029A2A_OFFSET UNITYSDK_OFFSET(0xACB00B0)
#define CLASS_2_63C71618419B0DDE_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xACB01C0)
#define CLASS_2_63C71618419B0DDE__CTOR_OFFSET UNITYSDK_OFFSET(0xACAFFC0)

inline static constexpr unsigned int Class_2_63C71618419B0DDE_TypeDefinitionIndex = 60897;

class Class_2_63C71618419B0DDE : public ::Class_1_ED6A06E6F11DAF49
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20
	::RPG::Client::GridFightRoleStarConfig* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_63C71618419B0DDE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_009113D5A6029A2A(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_63C71618419B0DDE_METHOD_2_009113D5A6029A2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C71618419B0DDE_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
