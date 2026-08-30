#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_2;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1D60F7271ABDF106_CLASS_1_98952B4A4DD0BE99_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xB6861B0)
#define CLASS_2_1D60F7271ABDF106_CLASS_1_98952B4A4DD0BE99__CTOR_OFFSET UNITYSDK_OFFSET(0xB685F00)

inline static constexpr unsigned int Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99_TypeDefinitionIndex = 56198;

class Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* BKEDPLIEJMC; // 0x10
	::System::Double FKOGJCPGFPD; // 0x18
	::System::Boolean ICFMHKKLPKG; // 0x20
	::System::Boolean HCJHAHLEGHE; // 0x21
	::System::Double PNNCHMGJFBJ; // 0x28
	::System::Double ELEJAOKKHFO; // 0x30
	::System::Double PFIAONCIHOG; // 0x38
	::System::UInt32 OHIDKMKBIGJ; // 0x40
	::System::UInt32 IBNLKOLLPJH; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D60F7271ABDF106_CLASS_1_98952B4A4DD0BE99__CTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_2* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_EBB10EC01CCC4716_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D60F7271ABDF106_CLASS_1_98952B4A4DD0BE99_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}
};
