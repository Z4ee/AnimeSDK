#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_49B8518B8EA39010.h"
#include "unitysdk/RPG/GameCore/ConstValueMapping/ConstValueSource.h"

class Class_0_16E4307DCC419505_349;
namespace System { class String; }

#define CLASS_3_BC5FBE16C0BDE6E4_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1C70C040)
#define CLASS_3_BC5FBE16C0BDE6E4_METHOD_3_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x1C70C050)
#define CLASS_3_BC5FBE16C0BDE6E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70BFC0)

inline static constexpr unsigned int Class_3_BC5FBE16C0BDE6E4_TypeDefinitionIndex = 43990;

class Class_3_BC5FBE16C0BDE6E4 : public ::Class_2_49B8518B8EA39010
{
public:
	::RPG::GameCore::ConstValueMapping::ConstValueSource _Source_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ConstValueMapping::ConstValueSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ConstValueMapping::ConstValueSource))((::PBYTE)hIl2Cpp + CLASS_3_BC5FBE16C0BDE6E4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ConstValueMapping::ConstValueSource get_Source()
	{
		return ((::RPG::GameCore::ConstValueMapping::ConstValueSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5FBE16C0BDE6E4_GET_SOURCE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_349* Method_3_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_349*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5FBE16C0BDE6E4_METHOD_3_E20365345CC9C440_OFFSET))(this);
	}
};
