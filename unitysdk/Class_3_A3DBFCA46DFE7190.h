#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimRandomBubbleTalkInfoGroup; }

#define CLASS_3_A3DBFCA46DFE7190_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x17943040)
#define CLASS_3_A3DBFCA46DFE7190_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x17942FA0)
#define CLASS_3_A3DBFCA46DFE7190__CTOR_OFFSET UNITYSDK_OFFSET(0x17943000)

inline static constexpr unsigned int Class_3_A3DBFCA46DFE7190_TypeDefinitionIndex = 19688;

class Class_3_A3DBFCA46DFE7190 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*>* Field_3_0; // 0x18
	::System::Single Field_3_2; // 0x20
	::System::UInt32 Field_3_4; // 0x24
	::System::Boolean Field_3_1; // 0x28
	::System::Boolean Field_3_3; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DBFCA46DFE7190__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A3DBFCA46DFE7190*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A3DBFCA46DFE7190*&))((::PBYTE)hIl2Cpp + CLASS_3_A3DBFCA46DFE7190_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A3DBFCA46DFE7190* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A3DBFCA46DFE7190*))((::PBYTE)hIl2Cpp + CLASS_3_A3DBFCA46DFE7190_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};
