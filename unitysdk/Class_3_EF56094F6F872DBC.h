#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_EF56094F6F872DBC_METHOD_3_0F51127D996814D2_OFFSET UNITYSDK_OFFSET(0x1C74BE70)
#define CLASS_3_EF56094F6F872DBC_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1C74BE30)
#define CLASS_3_EF56094F6F872DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C74BE60)

inline static constexpr unsigned int Class_3_EF56094F6F872DBC_TypeDefinitionIndex = 22163;

class Class_3_EF56094F6F872DBC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Boolean AHCIOIHFOHH; // 0x20
	::System::Boolean NJNGPPFAEPG; // 0x21
	::System::Boolean APKNFGMBLGD; // 0x22
	::System::Int32 BGFBICLOCMK; // 0x24
	::System::Int32 KMOPKKPGADM; // 0x28
	::System::Int32 IIPFHDIAFHL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EF56094F6F872DBC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EF56094F6F872DBC*&))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0F51127D996814D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EF56094F6F872DBC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EF56094F6F872DBC*))((::PBYTE)hIl2Cpp + CLASS_3_EF56094F6F872DBC_METHOD_3_0F51127D996814D2_OFFSET))(a1, a2);
	}
};
