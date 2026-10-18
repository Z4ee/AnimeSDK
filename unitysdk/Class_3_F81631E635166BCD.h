#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_F81631E635166BCD_METHOD_3_4E8875B300EBFC9B_OFFSET UNITYSDK_OFFSET(0x1CCD3020)
#define CLASS_3_F81631E635166BCD_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x1CCD2DF0)
#define CLASS_3_F81631E635166BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD2F20)

inline static constexpr unsigned int Class_3_F81631E635166BCD_TypeDefinitionIndex = 22156;

class Class_3_F81631E635166BCD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* CFAHJNIEMEM; // 0x18
	::RPG::GameCore::DynamicFloat* IGJJKEHKJOI; // 0x20
	::RPG::GameCore::DynamicString* EALNBEBALJM; // 0x28
	::RPG::GameCore::DynamicFloat* JODPHBJFOPL; // 0x30
	::RPG::GameCore::DynamicFloat* MAIMGNJKMEJ; // 0x38
	::RPG::MVector3 KCFICHILJEM; // 0x40
	::System::Boolean OPBKCOJPOPI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F81631E635166BCD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F81631E635166BCD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F81631E635166BCD*&))((::PBYTE)hIl2Cpp + CLASS_3_F81631E635166BCD_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4E8875B300EBFC9B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F81631E635166BCD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F81631E635166BCD*))((::PBYTE)hIl2Cpp + CLASS_3_F81631E635166BCD_METHOD_3_4E8875B300EBFC9B_OFFSET))(a1, a2);
	}
};
